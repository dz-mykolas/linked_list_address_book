#ifdef TEST

#include <string.h>
#include "unity.h"

#include "main_helper.h"
/* MOCKED FUNCTIONS */
#include "mock_llist.h"
#include "mock_task_util.h"

static FILE *original_stdin = NULL;
struct Person *list = NULL;
struct Person new;

char *string = NULL;
struct Person new_list_instance;
struct Person *new_list = &new_list_instance;

static void set_stdin(const char *input_str) 
{
    FILE *input_stream = fmemopen((void *)input_str, strlen(input_str), "r");
    stdin = input_stream;
}

void setUp(void)
{
    string = malloc(sizeof(char));
    snprintf(new.name, 30, "%s", "Name1");
    snprintf(new.surname, 30, "%s", "Surname1");
    snprintf(new.email, 30, "%s", "Email1");
    snprintf(new.phone, 30, "%s", "Phone1");
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


/* TASK_PRINT */
void test_main_task_print(void)
{
    llist_print_Expect(list);
    llist_print(list);
}


/* TASK_ADD_END */
void test_main_task_add_end_normal(void)
{
    ask_address_input_ExpectAndReturn(&new);
    llist_add_end_Expect(&list, &new);
    task_add_end(&list);
}
/**/
void test_main_task_add_end_empty(void)
{
    ask_address_input_ExpectAndReturn(NULL);
    task_add_end(&list);
}


/* TASK_ADD_AT */
void test_main_task_add_at_normal(void)
{
    int pos = 5;
    ask_address_input_ExpectAndReturn(&new);
    ask_num_ExpectAndReturn(pos);
    llist_add_at_Expect(&list, &new, pos);
    task_add_at(&list);
}
/**/
void test_main_task_add_at_empty(void)
{
    ask_address_input_ExpectAndReturn(NULL);
    task_add_at(&list);
}
/**/
void test_main_task_add_at_wrong(void)
{
    int pos = -2;
    /* Needs to free if wrong position */
    struct Person *temp = (struct Person *)malloc(sizeof(struct Person));
    ask_address_input_ExpectAndReturn(temp);
    ask_num_ExpectAndReturn(pos);
    task_add_at(&list);
}


/* TASK_REMOVE_AT */
void test_main_task_remove_at_normal(void)
{
    int pos = 5;
    ask_num_ExpectAndReturn(pos);
    llist_remove_at_Expect(&list, pos);
    task_remove_at(&list);
}
/**/
void test_main_task_remove_at_wrong(void)
{
    int pos = -2;
    ask_num_ExpectAndReturn(pos);
    task_remove_at(&list);
}


/* TASK_REMOVE_ALL */
void test_main_task_remove_all_normal(void)
{
    llist_remove_all_Expect(&list);
    task_remove_all(&list);
}


/* TASK_FIND_AT */
void test_main_task_find_at_normal(void)
{
    int pos = 5;
    ask_num_ExpectAndReturn(pos);
    llist_find_at_ExpectAndReturn(list, pos, &new);
    person_print_Expect(&new);
    task_find_at(list);
}
/**/
void test_main_task_find_at_wrong(void)
{
    int pos = -2;
    ask_num_ExpectAndReturn(pos);
    task_find_at(list);
}


/* TASK_FIND_BY */
void llist_remove_all_stub_func(struct Person **new, int num_calls)
{
    TEST_ASSERT_EQUAL_PTR(*new, new_list);
}
/**/
void test_main_task_find_by_normal(void)
{
    ask_input_ExpectAndReturn(string);
    llist_find_by_ExpectAndReturn(list, string, new_list);
    llist_print_Expect(new_list);
    llist_remove_all_Stub(llist_remove_all_stub_func);

    task_find_by(list);
}
/**/
void test_main_task_find_by_wrong(void)
{
    ask_input_ExpectAndReturn(NULL);

    task_find_by(list);
}

#endif // TEST
