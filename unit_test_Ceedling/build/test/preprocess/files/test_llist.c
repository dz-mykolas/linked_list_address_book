#include "src/test_helpers.h"
#include "src/llist.h"
#include "/var/lib/gems/3.0.0/gems/ceedling-0.31.1/vendor/unity/src/unity.h"










struct Person *g_head = 

                       ((void *)0)

                           ;

struct Person *g_node1 = 

                        ((void *)0)

                            ;

struct Person *g_node2 = 

                        ((void *)0)

                            ;

struct Person *g_node_last = 

                            ((void *)0)

                                ;

struct Person *g_temp = 

                       ((void *)0)

                           ;



void assert_node_equal(const struct Person *node, char *name, char *surname, char *email, char *phone)

{

    UnityAssertEqualString((const char*)((name)), (const char*)((node->name)), (

   ((void *)0)

   ), (UNITY_UINT)(20));

    UnityAssertEqualString((const char*)((surname)), (const char*)((node->surname)), (

   ((void *)0)

   ), (UNITY_UINT)(21));

    UnityAssertEqualString((const char*)((email)), (const char*)((node->email)), (

   ((void *)0)

   ), (UNITY_UINT)(22));

    UnityAssertEqualString((const char*)((phone)), (const char*)((node->phone)), (

   ((void *)0)

   ), (UNITY_UINT)(23));

}



void assert_nodes_equality(const struct Person *node, const struct Person *expected)

{

    UnityAssertEqualString((const char*)((expected->name)), (const char*)((node->name)), (

   ((void *)0)

   ), (UNITY_UINT)(28));

    UnityAssertEqualString((const char*)((expected->surname)), (const char*)((node->surname)), (

   ((void *)0)

   ), (UNITY_UINT)(29));

    UnityAssertEqualString((const char*)((expected->email)), (const char*)((node->email)), (

   ((void *)0)

   ), (UNITY_UINT)(30));

    UnityAssertEqualString((const char*)((expected->phone)), (const char*)((node->phone)), (

   ((void *)0)

   ), (UNITY_UINT)(31));

}



struct Person *setUp_helper(char *name, char *surname, char *email, char *phone)

{

    struct Person *node_new = 

                             ((void *)0)

                                 ;

    node_new = (struct Person *)malloc(sizeof(struct Person));

    strcpy(node_new->name, name);

    strcpy(node_new->surname, surname);

    strcpy(node_new->email, email);

    strcpy(node_new->phone, phone);

    node_new->next = 

                    ((void *)0)

                        ;



    return node_new;

}



void setUp(void)

{

    clear_printf_buffer();



    g_head = setUp_helper("name1", "surname1", "email1", "phone1");

    g_node1 = setUp_helper("name2", "surname2", "email2", "phone2");

    g_node2 = setUp_helper("name3", "surname3", "email3", "phone3");

    g_node_last = setUp_helper("name4", "surname4", "email4", "phone4");



    g_head->next = g_node1;

    g_node1->next = g_node2;

    g_node2->next = g_node_last;

    g_node_last->next = 

                       ((void *)0)

                           ;





    g_temp = setUp_helper("temp_nm", "temp_sm", "temp_em", "temp_ph");

}



void tearDown(void)

{



    g_head = 

            ((void *)0)

                ;

    g_node1 = 

             ((void *)0)

                 ;

    g_node2 = 

             ((void *)0)

                 ;

    g_node_last = 

                 ((void *)0)

                     ;

    g_temp = 

            ((void *)0)

                ;

}







void test_create_address_node_normal(void)

{

    char s[] = "name,surname,email,phone";

    struct Person *head = create_address_node(s);

    assert_node_equal(head, "name", "surname", "email", "phone");

    do {if ((((head->next)) == 

   ((void *)0)

   )) {} else {UnityFail( (((" Expected NULL"))), (UNITY_UINT)((UNITY_UINT)((UNITY_UINT)(82))));}} while(0);

}



void test_create_address_node_overflow(void)

{

    char s[] = "nameddddddddddddddddddddddddd_dddddddddddddddddddddddddddddd,surnameddddddd,email,phone";

    struct Person *head = create_address_node(s);



    assert_node_equal(head, "nameddddddddddddddddddddddddd", "surnameddddddd", "email", "phone");

    do {if ((((head->next)) == 

   ((void *)0)

   )) {} else {UnityFail( (((" Expected NULL"))), (UNITY_UINT)((UNITY_UINT)((UNITY_UINT)(91))));}} while(0);

}



void test_create_address_node_wrong(void)

{

    char s[] = "name    , surname  sad, email, phone";

    struct Person *head = create_address_node(s);



    assert_node_equal(head, "name", "surname", "email", "phone");

    do {if ((((head->next)) == 

   ((void *)0)

   )) {} else {UnityFail( (((" Expected NULL"))), (UNITY_UINT)((UNITY_UINT)((UNITY_UINT)(100))));}} while(0);

}



void test_create_address_node_wrong2(void)

{

    char s[] = "dadalald , dsa  sad, dada   ";

    struct Person *head = create_address_node(s);



    do {if ((((head)) == 

   ((void *)0)

   )) {} else {UnityFail( (((" Expected NULL"))), (UNITY_UINT)((UNITY_UINT)((UNITY_UINT)(108))));}} while(0);

}







void test_llist_print_normal(void)

{

    struct Person *head = g_head;

    llist_print(head);



    const char *expected_output =

        "0: name1 surname1 email1 phone1\n"

        "1: name2 surname2 email2 phone2\n"

        "2: name3 surname3 email3 phone3\n"

        "3: name4 surname4 email4 phone4\n";



    UnityAssertEqualString((const char*)((expected_output)), (const char*)((get_printf_buffer())), (

   ((void *)0)

   ), (UNITY_UINT)(124));

}



void test_llist_print_single(void)

{

    struct Person *head = g_node_last;

    llist_print(head);



    const char *expected_output =

        "0: name4 surname4 email4 phone4\n";



    UnityAssertEqualString((const char*)((expected_output)), (const char*)((get_printf_buffer())), (

   ((void *)0)

   ), (UNITY_UINT)(135));

}



void test_llist_print_empty(void)

{

    struct Person *head = 

                         ((void *)0)

                             ;

    llist_print(head);



    const char *expected_output = "";



    UnityAssertEqualString((const char*)((expected_output)), (const char*)((get_printf_buffer())), (

   ((void *)0)

   ), (UNITY_UINT)(145));

}







void test_llist_add_end_list_normal()

{

    struct Person *head = g_head;

    llist_add_end(&head, g_temp);

    assert_nodes_equality(g_node_last->next, g_temp);

}



void test_llist_add_end_list_single()

{

    struct Person *head = g_node_last;

    llist_add_end(&head, g_temp);

    assert_nodes_equality(head->next, g_temp);

}



void test_llist_add_end_list_empty()

{

    struct Person *head = 

                         ((void *)0)

                             ;

    llist_add_end(&head, g_temp);



    assert_nodes_equality(head, g_temp);

    do {if ((((g_temp->next)) == 

   ((void *)0)

   )) {} else {UnityFail( (((" Expected NULL"))), (UNITY_UINT)((UNITY_UINT)((UNITY_UINT)(170))));}} while(0);

}



void test_llist_add_end_node_NULL()

{

    struct Person *head = g_head;

    struct Person *temp = 

                         ((void *)0)

                             ;

    llist_add_end(&head, temp);



    do {if ((((g_node_last->next)) == 

   ((void *)0)

   )) {} else {UnityFail( (((" Expected NULL"))), (UNITY_UINT)((UNITY_UINT)((UNITY_UINT)(179))));}} while(0);

}







void test_llist_add_at_list_normal()

{

    struct Person *head = g_head;



    llist_add_at(&head, g_temp, 3);



    assert_nodes_equality(g_node2->next, g_temp);

    assert_nodes_equality(g_temp->next, g_node_last);

}



void test_llist_add_at_list_single()

{

    struct Person *head = g_node_last;

    llist_add_at(&head, g_temp, 1);



    assert_nodes_equality(head->next, g_temp);

    assert_nodes_equality(head, g_node_last);

}



void test_llist_add_at_node_last()

{

    struct Person *head = g_head;



    llist_add_at(&head, g_temp, 4);



    assert_nodes_equality(g_node_last->next, g_temp);

    do {if ((((g_temp->next)) == 

   ((void *)0)

   )) {} else {UnityFail( (((" Expected NULL"))), (UNITY_UINT)((UNITY_UINT)((UNITY_UINT)(210))));}} while(0);

}



void test_llist_add_at_list_empty()

{

    struct Person *head = 

                         ((void *)0)

                             ;

    llist_add_at(&head, g_temp, 0);



    assert_nodes_equality(head, g_temp);

    do {if ((((g_temp->next)) == 

   ((void *)0)

   )) {} else {UnityFail( (((" Expected NULL"))), (UNITY_UINT)((UNITY_UINT)((UNITY_UINT)(219))));}} while(0);

}



void test_llist_add_at_node_NULL()

{

    struct Person *head = g_head;

    struct Person *temp = 

                         ((void *)0)

                             ;

    llist_add_at(&head, temp, 0);



    assert_nodes_equality(head, g_head);

}



void test_llist_add_at_node_wrong()

{

    struct Person *head = g_head;

    struct Person *temp = 

                         ((void *)0)

                             ;



    llist_add_at(&head, temp, 5);



    assert_nodes_equality(head, g_head);

    do {if ((((g_node_last->next)) == 

   ((void *)0)

   )) {} else {UnityFail( (((" Expected NULL"))), (UNITY_UINT)((UNITY_UINT)((UNITY_UINT)(239))));}} while(0);

}







void test_llist_remove_at_normal(void)

{

    struct Person *head = g_head;

    llist_remove_at(&head, 3);

    do {if ((((g_node2->next)) == 

   ((void *)0)

   )) {} else {UnityFail( (((" Expected NULL"))), (UNITY_UINT)((UNITY_UINT)((UNITY_UINT)(248))));}} while(0);

}



void test_llist_remove_at_single(void)

{

    struct Person *head = g_node_last;

    llist_remove_at(&head, 0);

    do {if ((((head)) == 

   ((void *)0)

   )) {} else {UnityFail( (((" Expected NULL"))), (UNITY_UINT)((UNITY_UINT)((UNITY_UINT)(255))));}} while(0);

}



void test_llist_remove_at_empty(void)

{

    struct Person *head = 

                         ((void *)0)

                             ;

    llist_remove_at(&head, 0);

    do {if ((((head)) == 

   ((void *)0)

   )) {} else {UnityFail( (((" Expected NULL"))), (UNITY_UINT)((UNITY_UINT)((UNITY_UINT)(262))));}} while(0);

}



void test_llist_remove_at_wrong(void)

{

    struct Person *head = g_node_last;

    llist_remove_at(&head, 2);

    llist_remove_at(&head, 1);

    assert_nodes_equality(head, g_node_last);

}







void test_llist_remove_all_normal(void)

{

    struct Person *head = g_head;

    llist_remove_all(&head);

    do {if ((((head)) == 

   ((void *)0)

   )) {} else {UnityFail( (((" Expected NULL"))), (UNITY_UINT)((UNITY_UINT)((UNITY_UINT)(279))));}} while(0);

}



void test_llist_remove_all_single(void)

{

    struct Person *head = g_node_last;

    llist_remove_all(&head);

    do {if ((((head)) == 

   ((void *)0)

   )) {} else {UnityFail( (((" Expected NULL"))), (UNITY_UINT)((UNITY_UINT)((UNITY_UINT)(286))));}} while(0);

}



void test_llist_remove_all_empty(void)

{

    struct Person *head = 

                         ((void *)0)

                             ;

    llist_remove_all(&head);

    do {if ((((head)) == 

   ((void *)0)

   )) {} else {UnityFail( (((" Expected NULL"))), (UNITY_UINT)((UNITY_UINT)((UNITY_UINT)(293))));}} while(0);

}







void test_llist_find_at_first(void)

{

    struct Person *head = g_head;

    struct Person *found = llist_find_at(head, 0);

    assert_nodes_equality(found, g_head);

}



void test_llist_find_at_last(void)

{

    struct Person *head = g_head;

    struct Person *found = llist_find_at(head, 3);

    assert_nodes_equality(found, g_node_last);

}



void test_llist_find_at_empty(void)

{

    struct Person *head = 

                         ((void *)0)

                             ;

    struct Person *found = llist_find_at(head, 2);

    do {if ((((found)) == 

   ((void *)0)

   )) {} else {UnityFail( (((" Expected NULL"))), (UNITY_UINT)((UNITY_UINT)((UNITY_UINT)(316))));}} while(0);

}



void test_llist_find_at_wrong(void)

{

    struct Person *head = g_head;

    struct Person *found = llist_find_at(head, 5);

    do {if ((((found)) == 

   ((void *)0)

   )) {} else {UnityFail( (((" Expected NULL"))), (UNITY_UINT)((UNITY_UINT)((UNITY_UINT)(323))));}} while(0);

}







void test_llist_find_by_single_node(void)

{

    struct Person *head = g_head;

    struct Person *found = llist_find_by(head, "name1");

    assert_nodes_equality(found, g_head);

}



void test_llist_find_by_multiple_nodes(void)

{

    struct Person *head = g_head;

    struct Person *node1 = setUp_helper("find", "node1_surname", "node1_email", "node1_phone");

    g_node_last->next = node1;

    struct Person *node2 = setUp_helper("node2_name", "node2_surname", "find", "node2_phone");

    node1->next = node2;

    struct Person *found = llist_find_by(head, "find");

    assert_nodes_equality(found, node1);

    assert_nodes_equality(found->next, node2);

    do {if ((((found->next->next)) == 

   ((void *)0)

   )) {} else {UnityFail( (((" Expected NULL"))), (UNITY_UINT)((UNITY_UINT)((UNITY_UINT)(345))));}} while(0);

}



void test_llist_find_by_empty(void)

{

    struct Person *head = 

                         ((void *)0)

                             ;

    struct Person *found = llist_find_by(head, "name1");

    do {if ((((found)) == 

   ((void *)0)

   )) {} else {UnityFail( (((" Expected NULL"))), (UNITY_UINT)((UNITY_UINT)((UNITY_UINT)(352))));}} while(0);

}



void test_llist_find_by_wrong(void)

{

    struct Person *head = g_head;

    struct Person *found = llist_find_by(head, "");

    do {if ((((found)) == 

   ((void *)0)

   )) {} else {UnityFail( (((" Expected NULL"))), (UNITY_UINT)((UNITY_UINT)((UNITY_UINT)(359))));}} while(0);

}
