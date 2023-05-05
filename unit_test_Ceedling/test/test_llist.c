#ifdef TEST

#include <stdio.h>
#include <string.h>
#include <stdarg.h>

#include "unity.h"

#include "llist.h"
#include "test_helpers.h"

struct Person *g_head = NULL;
struct Person *g_node1 = NULL;
struct Person *g_node2 = NULL;
struct Person *g_node_last = NULL;
struct Person *g_temp = NULL;

void assert_node_equal(const struct Person *node, char *name, char *surname, char *email, char *phone)
{
    TEST_ASSERT_EQUAL_STRING(name, node->name);
    TEST_ASSERT_EQUAL_STRING(surname, node->surname);
    TEST_ASSERT_EQUAL_STRING(email, node->email);
    TEST_ASSERT_EQUAL_STRING(phone, node->phone);
}

void assert_nodes_equality(const struct Person *node, const struct Person *expected)
{
    TEST_ASSERT_EQUAL_STRING(expected->name, node->name);
    TEST_ASSERT_EQUAL_STRING(expected->surname, node->surname);
    TEST_ASSERT_EQUAL_STRING(expected->email, node->email);
    TEST_ASSERT_EQUAL_STRING(expected->phone, node->phone);
}

struct Person *setUp_helper(char *name, char *surname, char *email, char *phone)
{
    struct Person *node_new = NULL;
    node_new = (struct Person *)malloc(sizeof(struct Person));
    strcpy(node_new->name, name);
    strcpy(node_new->surname, surname);
    strcpy(node_new->email, email);
    strcpy(node_new->phone, phone);
    node_new->next = NULL;
    
    return node_new;
}

void setUp(void) 
{
    clear_printf_buffer();
    /* LINKED LIST */
    g_head = setUp_helper("name1", "surname1", "email1", "phone1");
    g_node1 = setUp_helper("name2", "surname2", "email2", "phone2");
    g_node2 = setUp_helper("name3", "surname3", "email3", "phone3");
    g_node_last = setUp_helper("name4", "surname4", "email4", "phone4");

    g_head->next = g_node1;
    g_node1->next = g_node2;
    g_node2->next = g_node_last;
    g_node_last->next = NULL;

    /* SINGLE NODE */
    g_temp = setUp_helper("temp_nm", "temp_sm", "temp_em", "temp_ph");
}

void tearDown(void) 
{
    /* Forget allocated memory */
    g_head = NULL;
    g_node1 = NULL;
    g_node2 = NULL;
    g_node_last = NULL;
    g_temp = NULL;
}


/* CREATE_ADDRESS_NODE */
void test_create_address_node_normal(void) 
{
    char s[] = "name,surname,email,phone";
    struct Person *head = create_address_node(s);
    assert_node_equal(head, "name", "surname", "email", "phone");
    TEST_ASSERT_NULL(head->next);
}
/**/
void test_create_address_node_overflow(void) 
{
    char s[] = "nameddddddddddddddddddddddddd_dddddddddddddddddddddddddddddd,surnameddddddd,email,phone";
    struct Person *head = create_address_node(s);

    assert_node_equal(head, "nameddddddddddddddddddddddddd", "surnameddddddd", "email", "phone");
    TEST_ASSERT_NULL(head->next);
}
/**/
void test_create_address_node_wrong(void) 
{
    char s[] = "name    , surname  sad, email, phone";
    struct Person *head = create_address_node(s);

    assert_node_equal(head, "name", "surname", "email", "phone");
    TEST_ASSERT_NULL(head->next);
}
/**/
void test_create_address_node_wrong2(void) 
{
    char s[] = "dadalald , dsa  sad, dada   ";
    struct Person *head = create_address_node(s);

    TEST_ASSERT_NULL(head);
}


/* LLIST_PRINT */
void test_llist_print_normal(void)
{
    struct Person *head = g_head;
    llist_print(head);

    const char *expected_output =
        "0: name1 surname1 email1 phone1\n"
        "1: name2 surname2 email2 phone2\n"
        "2: name3 surname3 email3 phone3\n"
        "3: name4 surname4 email4 phone4\n";

    TEST_ASSERT_EQUAL_STRING(expected_output, get_printf_buffer());
}
/**/
void test_llist_print_single(void)
{
    struct Person *head = g_node_last;
    llist_print(head);

    const char *expected_output =
        "0: name4 surname4 email4 phone4\n";

    TEST_ASSERT_EQUAL_STRING(expected_output, get_printf_buffer());
}
/**/
void test_llist_print_empty(void)
{
    struct Person *head = NULL;
    llist_print(head);

    const char *expected_output = "";

    TEST_ASSERT_EQUAL_STRING(expected_output, get_printf_buffer());
}


/* LLIST_ADD_END */
void test_llist_add_end_list_normal()
{
    struct Person *head = g_head;
    llist_add_end(&head, g_temp);
    assert_nodes_equality(g_node_last->next, g_temp);
}
/**/
void test_llist_add_end_list_single()
{
    struct Person *head = g_node_last;
    llist_add_end(&head, g_temp);
    assert_nodes_equality(head->next, g_temp);
}
/**/
void test_llist_add_end_list_empty()
{
    struct Person *head = NULL;
    llist_add_end(&head, g_temp);

    assert_nodes_equality(head, g_temp);
    TEST_ASSERT_NULL(g_temp->next);
}
/**/
void test_llist_add_end_node_NULL()
{
    struct Person *head = g_head;
    struct Person *temp = NULL;
    llist_add_end(&head, temp);

    TEST_ASSERT_NULL(g_node_last->next);
}


/* LLIST_ADD_AT */
void test_llist_add_at_list_normal()
{
    struct Person *head = g_head;
    // Adding before last node
    llist_add_at(&head, g_temp, 3);
    
    assert_nodes_equality(g_node2->next, g_temp);
    assert_nodes_equality(g_temp->next, g_node_last);
}
/**/
void test_llist_add_at_list_single()
{
    struct Person *head = g_node_last;
    llist_add_at(&head, g_temp, 1);

    assert_nodes_equality(head->next, g_temp);
    assert_nodes_equality(head, g_node_last);
}
/**/
void test_llist_add_at_node_last()
{
    struct Person *head = g_head;
    // Adding at position 4 (list size 4)
    llist_add_at(&head, g_temp, 4);

    assert_nodes_equality(g_node_last->next, g_temp);
    TEST_ASSERT_NULL(g_temp->next);
}
/**/
void test_llist_add_at_list_empty()
{
    struct Person *head = NULL;
    llist_add_at(&head, g_temp, 0);

    assert_nodes_equality(head, g_temp);
    TEST_ASSERT_NULL(g_temp->next);
}
/**/
void test_llist_add_at_node_NULL()
{
    struct Person *head = g_head;
    struct Person *temp = NULL;
    llist_add_at(&head, temp, 0);

    assert_nodes_equality(head, g_head);
}
/**/
void test_llist_add_at_node_wrong()
{
    struct Person *head = g_head;
    struct Person *temp = NULL;
    // No such position
    llist_add_at(&head, temp, 5);

    assert_nodes_equality(head, g_head);
    TEST_ASSERT_NULL(g_node_last->next);
}


/* LIST_REMOVE_AT */
void test_llist_remove_at_normal(void) 
{
    struct Person *head = g_head;
    llist_remove_at(&head, 3);
    TEST_ASSERT_NULL(g_node2->next);
}
/**/
void test_llist_remove_at_single(void) 
{
    struct Person *head = g_node_last;
    llist_remove_at(&head, 0);
    TEST_ASSERT_NULL(head);
}
/**/
void test_llist_remove_at_empty(void) 
{
    struct Person *head = NULL;
    llist_remove_at(&head, 0);
    TEST_ASSERT_NULL(head);
}
/**/
void test_llist_remove_at_wrong(void) 
{
    struct Person *head = g_node_last;
    llist_remove_at(&head, 2);
    llist_remove_at(&head, 1);
    assert_nodes_equality(head, g_node_last);
}


/* LLIST_REMOVE_ALL */
void test_llist_remove_all_normal(void) 
{
    struct Person *head = g_head;
    llist_remove_all(&head);
    TEST_ASSERT_NULL(head);
}
/**/
void test_llist_remove_all_single(void) 
{
    struct Person *head = g_node_last;
    llist_remove_all(&head);
    TEST_ASSERT_NULL(head);
}
/**/
void test_llist_remove_all_empty(void) 
{
    struct Person *head = NULL;
    llist_remove_all(&head);
    TEST_ASSERT_NULL(head);
}


/* LLIST_FIND_AT */
void test_llist_find_at_first(void) 
{
    struct Person *head = g_head;
    struct Person *found = llist_find_at(head, 0);
    assert_nodes_equality(found, g_head);
}
/**/
void test_llist_find_at_last(void) 
{
    struct Person *head = g_head;
    struct Person *found = llist_find_at(head, 3);
    assert_nodes_equality(found, g_node_last);
}
/**/
void test_llist_find_at_empty(void) 
{
    struct Person *head = NULL;
    struct Person *found = llist_find_at(head, 2);
    TEST_ASSERT_NULL(found);
}
/**/
void test_llist_find_at_wrong(void) 
{
    struct Person *head = g_head;
    struct Person *found = llist_find_at(head, 5);
    TEST_ASSERT_NULL(found);
}


/* LLIST_FIND_BY */
void test_llist_find_by_single_node(void) 
{
    struct Person *head = g_head;
    struct Person *found = llist_find_by(head, "name1");
    assert_nodes_equality(found, g_head);
}
/**/
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
    TEST_ASSERT_NULL(found->next->next);
}
/**/
void test_llist_find_by_empty(void) 
{
    struct Person *head = NULL;
    struct Person *found = llist_find_by(head, "name1");
    TEST_ASSERT_NULL(found);
}
/**/
void test_llist_find_by_wrong(void) 
{
    struct Person *head = g_head;
    struct Person *found = llist_find_by(head, "");
    TEST_ASSERT_NULL(found);
}

#endif // TEST
