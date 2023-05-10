#include "build/test/mocks/mock_task_util.h"
#include "build/test/mocks/mock_llist.h"
#include "src/main_helper.h"
#include "/var/lib/gems/3.0.0/gems/ceedling-0.31.1/vendor/unity/src/unity.h"










static FILE *original_stdin = 

                             ((void *)0)

                                 ;

struct Person *list = 

                     ((void *)0)

                         ;

struct Person new;



char *string = 

              ((void *)0)

                  ;

struct Person new_list_instance;

struct Person *new_list = &new_list_instance;



static void set_stdin(const char *input_str)

{

    FILE *input_stream = fmemopen((void *)input_str, strlen(input_str), "r");

    

   stdin 

         = input_stream;

}



void setUp(void)

{

    string = malloc(sizeof(char));

    snprintf(new.name, 30, "%s", "Name1");

    snprintf(new.surname, 30, "%s", "Surname1");

    snprintf(new.email, 30, "%s", "Email1");

    snprintf(new.phone, 30, "%s", "Phone1");

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







void test_main_task_print(void)

{

    llist_print_CMockExpect(49, list);

    llist_print(list);

}







void test_main_task_add_end_normal(void)

{

    ask_address_input_CMockExpectAndReturn(57, &new);

    llist_add_end_CMockExpect(58, &list, &new);

    task_add_end(&list);

}



void test_main_task_add_end_empty(void)

{

    ask_address_input_CMockExpectAndReturn(64, 

   ((void *)0)

   );

    task_add_end(&list);

}







void test_main_task_add_at_normal(void)

{

    int pos = 5;

    ask_address_input_CMockExpectAndReturn(73, &new);

    ask_num_CMockExpectAndReturn(74, pos);

    llist_add_at_CMockExpect(75, &list, &new, pos);

    task_add_at(&list);

}



void test_main_task_add_at_empty(void)

{

    ask_address_input_CMockExpectAndReturn(81, 

   ((void *)0)

   );

    task_add_at(&list);

}



void test_main_task_add_at_wrong(void)

{

    int pos = -2;



    struct Person *temp = (struct Person *)malloc(sizeof(struct Person));

    ask_address_input_CMockExpectAndReturn(90, temp);

    ask_num_CMockExpectAndReturn(91, pos);

    task_add_at(&list);

}







void test_main_task_remove_at_normal(void)

{

    int pos = 5;

    ask_num_CMockExpectAndReturn(100, pos);

    llist_remove_at_CMockExpect(101, &list, pos);

    task_remove_at(&list);

}



void test_main_task_remove_at_wrong(void)

{

    int pos = -2;

    ask_num_CMockExpectAndReturn(108, pos);

    task_remove_at(&list);

}







void test_main_task_remove_all_normal(void)

{

    llist_remove_all_CMockExpect(116, &list);

    task_remove_all(&list);

}







void test_main_task_find_at_normal(void)

{

    int pos = 5;

    ask_num_CMockExpectAndReturn(125, pos);

    llist_find_at_CMockExpectAndReturn(126, list, pos, &new);

    person_print_CMockExpect(127, &new);

    task_find_at(list);

}



void test_main_task_find_at_wrong(void)

{

    int pos = -2;

    ask_num_CMockExpectAndReturn(134, pos);

    task_find_at(list);

}







void llist_remove_all_stub_func(struct Person **new, int num_calls)

{

    UnityAssertEqualNumber((UNITY_INT64)((*new)), (UNITY_INT64)((new_list)), (

   ((void *)0)

   ), (UNITY_UINT)(142), UNITY_DISPLAY_STYLE_HEX64);

}



void test_main_task_find_by_normal(void)

{

    ask_input_CMockExpectAndReturn(147, string);

    llist_find_by_CMockExpectAndReturn(148, list, string, new_list);

    llist_print_CMockExpect(149, new_list);

    llist_remove_all_Stub(llist_remove_all_stub_func);



    task_find_by(list);

}



void test_main_task_find_by_wrong(void)

{

    ask_input_CMockExpectAndReturn(157, 

   ((void *)0)

   );



    task_find_by(list);

}
