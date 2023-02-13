#include "llist.h"
#include "main_helper.h"
#include "task_util.h"

void task_print(struct Person *list)
{
    printf("Current list:\n");
    llist_print(list);
}

void task_add_end(struct Person **list)
{
    struct Person *new = ask_address_input();

    if (new == NULL) {
        printf("Failed to create!\n");
        return;
    }
    printf("New address: %s,%s,%s,%s\n", new->name, new->surname, new->email, new->phone);
    llist_add_end(list, new);
}

void task_add_at(struct Person **list)
{
    struct Person *new = ask_address_input();

    if (new == NULL) {
        printf("Failed to create!\n");
        return;
    }
    printf("Input address position: ");
    int pos = 0;
    printf("New address: %s,%s,%s,%s\n", new->name, new->surname, new->email, new->phone);
    pos = ask_num();
    if (pos < 0) {
        free(new);
        printf("Position less than 0\n");
    }
    else {
        llist_add_at(list, new, pos);
    }
}

void task_remove_at(struct Person **list)
{
    int pos = 0;

    printf("Input address position: ");
    pos = ask_num();
    llist_remove_at(list, pos);
}

void task_remove_all(struct Person **list)
{
    printf("Removed all!\n");
    llist_remove_all(list);
}   

void task_find_at(struct Person *list)
{
    int pos = 0;
    struct Person *new = NULL;

    printf("Input address position: ");
    pos = ask_num();
    if (pos < 0)
        printf("Position can not be less than 0\n");
    else if ((new = llist_find_at(list, pos)) != NULL)
        person_print(new);
}

void task_find_by(struct Person *list)
{
    char *input = NULL;
    struct Person *new = NULL;

    printf("Input exact name/surname/email/phone: ");
    input = ask_input();
    if (input == NULL) {
        printf("Error!");
        return;
    }
    new = llist_find_by(list, input);
    if (new != NULL)
        llist_print(new);
    else 
        printf("Address not found!\n");
    free(input);
    llist_remove_all(&new);
}