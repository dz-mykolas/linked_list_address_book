#include "build/test/mocks/mock_llist.h"
#include "src/task_util.h"
#include "/var/lib/gems/3.0.0/gems/ceedling-0.31.1/vendor/unity/src/unity.h"








static FILE *original_stdin = 

                             ((void *)0)

                                 ;

int running = 1;

char file_path[] = "test/test_data/test_data.txt";





void llist_add_end_callback(struct Person **list, struct Person *p, int NumCalls)

{

    struct Person *curr = *list;

    while (curr->next != 

                        ((void *)0)

                            ) {

        curr = curr->next;

    }

    curr->next = p;

    p->next = 

             ((void *)0)

                 ;

}



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

    

   stdin 

         = input_stream;

}



void setUp(void)

{

    if (original_stdin == 

                         ((void *)0)

                             ) {

        original_stdin = 

                        stdin

                             ;

    }

}



void tearDown(void)

{

    if (

       stdin 

             != original_stdin) {

        fclose(

              stdin

                   );

        

       stdin 

             = original_stdin;

    }

}







void test_task_util_file_open_normal(void)

{

    struct Person *list = 

                         ((void *)0)

                             ;

    struct Person person1, person2;



    create_address_node_CMockExpectAndReturn(62, "Name1,Surname1,Email1,Phone1\n", &person1);

    llist_add_end_CMockExpect(63, &list, &person1);

    create_address_node_CMockExpectAndReturn(64, "Name2,Surname2,Email2,Phone2\n", &person2);

    llist_add_end_CMockExpect(65, &list, &person2);

    llist_print_CMockExpect(66, list);



    file_open(file_path, &list);

}



void test_task_util_file_open_no_file(void)

{











    char file_path[] = "";

    struct Person *list = 

                         ((void *)0)

                             ;



    file_open(file_path, &list);

}



void test_task_util_file_open_existing_list(void)

{

    struct Person *list = (struct Person *)malloc(sizeof(struct Person));

    list->next = 

                ((void *)0)

                    ;

    struct Person node1, node2;

    list->next = &node1;

    node1.next = &node2;

    node2.next = 

                ((void *)0)

                    ;

    struct Person person1, person2;













    llist_add_end_AddCallback(llist_add_end_callback);



    create_address_node_CMockExpectAndReturn(101, "Name1,Surname1,Email1,Phone1\n", &person1);

    llist_add_end_CMockExpect(102, &list, &person1);

    create_address_node_CMockExpectAndReturn(103, "Name2,Surname2,Email2,Phone2\n", &person2);

    llist_add_end_CMockExpect(104, &list, &person2);

    llist_print_CMockExpect(105, list);



    file_open(file_path, &list);



    UnityAssertEqualNumber((UNITY_INT64)((&person1)), (UNITY_INT64)(((&node2)->next)), (

   ((void *)0)

   ), (UNITY_UINT)(109), UNITY_DISPLAY_STYLE_HEX64);

    UnityAssertEqualNumber((UNITY_INT64)((&person2)), (UNITY_INT64)(((&person1)->next)), (

   ((void *)0)

   ), (UNITY_UINT)(110), UNITY_DISPLAY_STYLE_HEX64) ;

}







void test_task_util_ask_num_normal(void)

{

    set_stdin("8\n");

    UnityAssertEqualNumber((UNITY_INT)((8)), (UNITY_INT)((ask_num())), (

   ((void *)0)

   ), (UNITY_UINT)(118), UNITY_DISPLAY_STYLE_INT);

}



void test_task_util_ask_num_wrong(void)

{

    set_stdin("aaa\n");

    UnityAssertEqualNumber((UNITY_INT)((-1)), (UNITY_INT)((ask_num())), (

   ((void *)0)

   ), (UNITY_UINT)(124), UNITY_DISPLAY_STYLE_INT);

}



void test_task_util_ask_num_wrong2(void)

{

    set_stdin("9999999\n");

    UnityAssertEqualNumber((UNITY_INT)((-1)), (UNITY_INT)((ask_num())), (

   ((void *)0)

   ), (UNITY_UINT)(130), UNITY_DISPLAY_STYLE_INT);

}







void test_task_util_ask_address_input_normal(void)

{

    set_stdin("Name1\nSurname1\nEmail1\nPhone1\n");

    struct Person person1;

    create_node_AddCallback(create_node_callback);

    create_node_CMockExpectAndReturn(140, "Name1", "Surname1", "Email1", "Phone1", &person1);

    person1 = *ask_address_input();

    UnityAssertEqualString((const char*)(("Name1")), (const char*)((person1.name)), (

   ((void *)0)

   ), (UNITY_UINT)(142));

    UnityAssertEqualString((const char*)(("Phone1")), (const char*)((person1.phone)), (

   ((void *)0)

   ), (UNITY_UINT)(143));

}



void test_task_util_ask_address_input_empty_all(void)

{



    set_stdin("\n\n\n\n");

    ask_address_input();

}



void test_task_util_ask_address_input_empty_middle(void)

{



    set_stdin("aaa\n\nsda\ndsa");

    ask_address_input();

}



void test_task_util_ask_address_input_too_many(void)

{

    set_stdin("Name1\nSurname1\nEmail1\nPhone1\nadada\n");

    struct Person person1;

    create_node_AddCallback(create_node_callback);

    create_node_CMockExpectAndReturn(165, "Name1", "Surname1", "Email1", "Phone1", &person1);

    person1 = *ask_address_input();

    UnityAssertEqualString((const char*)(("Name1")), (const char*)((person1.name)), (

   ((void *)0)

   ), (UNITY_UINT)(167));

    UnityAssertEqualString((const char*)(("Phone1")), (const char*)((person1.phone)), (

   ((void *)0)

   ), (UNITY_UINT)(168));

}



void test_task_util_ask_address_input_terminate_program(void)

{



    running = 0;

    set_stdin("Name1\nSurname1\nEmail1\nPhone1\n");

    ask_address_input();

}
