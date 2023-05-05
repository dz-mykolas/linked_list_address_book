#include "src/llist.h"
#include "/var/lib/gems/3.0.0/gems/ceedling-0.31.1/vendor/unity/src/unity.h"


void setUp(void)

{



}



void tearDown(void)

{



}



void test_create_address_node_normal(void)

{

    char s[] = "name,surname,email,phone";

    struct Person *head = create_address_node(s);



    UnityAssertEqualString((const char*)(("name")), (const char*)((head->name)), (

   ((void *)0)

   ), (UNITY_UINT)(19));

    UnityAssertEqualString((const char*)(("surname")), (const char*)((head->surname)), (

   ((void *)0)

   ), (UNITY_UINT)(20));

    UnityAssertEqualString((const char*)(("email")), (const char*)((head->email)), (

   ((void *)0)

   ), (UNITY_UINT)(21));

    UnityAssertEqualString((const char*)(("phone")), (const char*)((head->phone)), (

   ((void *)0)

   ), (UNITY_UINT)(22));

    do {if ((((head->next)) == 

   ((void *)0)

   )) {} else {UnityFail( (((" Expected NULL"))), (UNITY_UINT)((UNITY_UINT)((UNITY_UINT)(23))));}} while(0);

}



void test_create_address_node_overflow(void)

{

    char s[] = "nameddddddddddddddddddddddddd_dddddddddddddddddddddddddddddd,surnameddddddd,email,phone";

    struct Person *head = create_address_node(s);



    UnityAssertEqualString((const char*)(("nameddddddddddddddddddddddddd")), (const char*)((head->name)), (

   ((void *)0)

   ), (UNITY_UINT)(31));

    UnityAssertEqualString((const char*)(("surname")), (const char*)((head->surname)), (

   ((void *)0)

   ), (UNITY_UINT)(32));

    UnityAssertEqualString((const char*)(("email")), (const char*)((head->email)), (

   ((void *)0)

   ), (UNITY_UINT)(33));

    UnityAssertEqualString((const char*)(("phone")), (const char*)((head->phone)), (

   ((void *)0)

   ), (UNITY_UINT)(34));

    do {if ((((head->next)) == 

   ((void *)0)

   )) {} else {UnityFail( (((" Expected NULL"))), (UNITY_UINT)((UNITY_UINT)((UNITY_UINT)(35))));}} while(0);

}



void test_create_address_node_wrong(void)

{

    char s[] = "name    , surname  sad, email, phone";

    struct Person *head = create_address_node(s);



    UnityAssertEqualString((const char*)(("name")), (const char*)((head->name)), (

   ((void *)0)

   ), (UNITY_UINT)(43));

    UnityAssertEqualString((const char*)(("surname")), (const char*)((head->surname)), (

   ((void *)0)

   ), (UNITY_UINT)(44));

    UnityAssertEqualString((const char*)(("email")), (const char*)((head->email)), (

   ((void *)0)

   ), (UNITY_UINT)(45));

    UnityAssertEqualString((const char*)(("phone")), (const char*)((head->phone)), (

   ((void *)0)

   ), (UNITY_UINT)(46));

    do {if ((((head->next)) == 

   ((void *)0)

   )) {} else {UnityFail( (((" Expected NULL"))), (UNITY_UINT)((UNITY_UINT)((UNITY_UINT)(47))));}} while(0);

}
