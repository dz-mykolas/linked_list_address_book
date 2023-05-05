#include "src/llist.h"
#include "/var/lib/gems/3.0.0/gems/ceedling-0.31.1/vendor/unity/src/unity.h"


void setUp(void)

{



}



void tearDown(void)

{



}



void test_remove_all_nodes_normal(void)

{

    char s[] = "name,surname,email,phone";

    char s2[] = "name2,surname2,email2,phone2";

    char s3[] = "name3,surname3,email3,phone3";

    char s4[] = "name4,surname4,email4,phone4";

    struct Person *head = create_address_node(s);

    struct Person *node1 = create_address_node(s2);

    struct Person *node2 = create_address_node(s3);

    struct Person *node3 = create_address_node(s4);

    llist_add_end(&head, node1);

    llist_add_end(&head, node2);

    llist_add_end(&head, node3);



    llist_remove_all(&head);

    do {if ((((head)) == 

   ((void *)0)

   )) {} else {UnityFail( (((" Expected NULL"))), (UNITY_UINT)((UNITY_UINT)((UNITY_UINT)(29))));}} while(0);

}
