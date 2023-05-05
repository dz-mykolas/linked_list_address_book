#ifdef TEST

#include "unity.h"

#include "task_util.h"
#include "mock_llist.h"

static FILE *original_stdin = NULL;
int running = 1;
char file_path[] = "test/test_data/test_data.txt";

/* CALLBACK FOR LLIST_ADD_END MOCK */
void llist_add_end_callback(struct Person **list, struct Person *p, int NumCalls)
{
    struct Person *curr = *list;
    while (curr->next != NULL) {
        curr = curr->next;
    }
    curr->next = p;
    p->next = NULL;
}
/* CALLBACK FOR CREATE_NODE MOCK */
struct Person *create_node_callback(char *name, char *surname, char *email, char *phone, int NumCalls)
{
    struct Person *node = (struct Person *)malloc(sizeof(struct Person));
    snprintf(node->name, 30, "%s", name);
    snprintf(node->surname, 30, "%s", surname);
    snprintf(node->email, 30, "%s", email);
    snprintf(node->phone, 30, "%s", phone);

    return node;
}

static void set_stdin(const char *input_str) 
{
    FILE *input_stream = fmemopen((void *)input_str, strlen(input_str), "r");
    stdin = input_stream;
}

void setUp(void)
{
    if (original_stdin == NULL) {
        original_stdin = stdin;
    }
}

void tearDown(void)
{
    if (stdin != original_stdin) {
        fclose(stdin);
        stdin = original_stdin;
    }
}


/* FILE_OPEN */
void test_task_util_file_open_normal(void)
{
    struct Person *list = NULL;
    struct Person person1, person2;

    create_address_node_ExpectAndReturn("Name1,Surname1,Email1,Phone1\n", &person1);
    llist_add_end_Expect(&list, &person1);
    create_address_node_ExpectAndReturn("Name2,Surname2,Email2,Phone2\n", &person2);
    llist_add_end_Expect(&list, &person2);
    llist_print_Expect(list);

    file_open(file_path, &list);
}
/**/
void test_task_util_file_open_no_file(void)
{
    /* 
        This does not need any assertions or expects
        because CMock does not get any mocked function 
        calls.
    */
    char file_path[] = "";
    struct Person *list = NULL;

    file_open(file_path, &list);
}
/**/
void test_task_util_file_open_existing_list(void)
{
    struct Person *list = (struct Person *)malloc(sizeof(struct Person));
    list->next = NULL;
    struct Person node1, node2;
    list->next = &node1;
    node1.next = &node2;
    node2.next = NULL;
    struct Person person1, person2;

    /*  
        Don't actually need to test it likes this 
        because you expect llist_add_end to work correctly. 
        This is just to test functionality of CMock.
    */
    llist_add_end_AddCallback(llist_add_end_callback);

    create_address_node_ExpectAndReturn("Name1,Surname1,Email1,Phone1\n", &person1);
    llist_add_end_Expect(&list, &person1);
    create_address_node_ExpectAndReturn("Name2,Surname2,Email2,Phone2\n", &person2);
    llist_add_end_Expect(&list, &person2);
    llist_print_Expect(list);

    file_open(file_path, &list);

    TEST_ASSERT_EQUAL_PTR(&person1, (&node2)->next);
    TEST_ASSERT_EQUAL_PTR(&person2, (&person1)->next) ;
}


/* ASK_NUM */
void test_task_util_ask_num_normal(void)
{
    set_stdin("8\n");
    TEST_ASSERT_EQUAL_INT(8, ask_num());
}
/**/
void test_task_util_ask_num_wrong(void)
{
    set_stdin("aaa\n");
    TEST_ASSERT_EQUAL_INT(-1, ask_num());
}
/**/
void test_task_util_ask_num_wrong2(void)
{
    set_stdin("9999999\n");
    TEST_ASSERT_EQUAL_INT(-1, ask_num());
}


/* ASK_ADDRESS_INPUT */
void test_task_util_ask_address_input_normal(void)
{
    set_stdin("Name1\nSurname1\nEmail1\nPhone1\n");
    struct Person person1;
    create_node_AddCallback(create_node_callback);
    create_node_ExpectAndReturn("Name1", "Surname1", "Email1", "Phone1", &person1);
    person1 = *ask_address_input();
    TEST_ASSERT_EQUAL_STRING("Name1", person1.name);
    TEST_ASSERT_EQUAL_STRING("Phone1", person1.phone);
}
/**/
void test_task_util_ask_address_input_empty_all(void)
{
    /* Should be no calls of mocked functions */
    set_stdin("\n\n\n\n");
    ask_address_input();
}
/**/
void test_task_util_ask_address_input_empty_middle(void)
{
    /* Should be no calls of mocked functions */
    set_stdin("aaa\n\nsda\ndsa");
    ask_address_input();
}
/**/
void test_task_util_ask_address_input_too_many(void)
{
    set_stdin("Name1\nSurname1\nEmail1\nPhone1\nadada\n");
    struct Person person1;
    create_node_AddCallback(create_node_callback);
    create_node_ExpectAndReturn("Name1", "Surname1", "Email1", "Phone1", &person1);
    person1 = *ask_address_input();
    TEST_ASSERT_EQUAL_STRING("Name1", person1.name);
    TEST_ASSERT_EQUAL_STRING("Phone1", person1.phone);
}
/**/
void test_task_util_ask_address_input_terminate_program(void)
{
    /* Should be no calls of mocked functions */
    running = 0;
    set_stdin("Name1\nSurname1\nEmail1\nPhone1\n");
    ask_address_input();
}

#endif // TEST
