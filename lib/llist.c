#include "llist.h"

struct Person *create_address_node(char *string)
{
    const char *delim = DELIMITER;
    char *str_copy, *token, *state;
    char name[INPUT_SIZE], surname[INPUT_SIZE], email[INPUT_SIZE], phone[INPUT_SIZE];

    str_copy = strdup(string);
    if (!str_copy) {
        return NULL;
    }
    
    token = str_copy;
    snprintf(name, 30, "%s", strsep(&token, delim));
    snprintf(surname, 30, "%s", strsep(&token, delim));
    snprintf(email, 30, "%s", strsep(&token, delim));
    snprintf(phone, 30, "%s", strsep(&token, delim));
    if (!name || !surname || !email || !phone) {
        free(str_copy);
        return NULL;
    }

    struct Person *person = create_node(name, surname, email, phone);
    free(str_copy);

    return person;
}

struct Person *create_node(char *name, char *surname, char *email, char *phone)
{
    struct Person *p = (struct Person *) malloc(sizeof(struct Person));
    if (p == NULL) {
        return NULL;
    }
    strcpy(p->name, name);
    strcpy(p->surname, surname);
    strcpy(p->email, email);
    strcpy(p->phone, phone);
    p->next = NULL;

    return p;
}

void person_print(struct Person *p)
{
    printf("%s %s %s %s\n", p->name, p->surname, p->email, p->phone);
}

void llist_print(struct Person *list)
{
    struct Person *temp = list;
    int i = 0;
    while (temp != NULL) {
        printf("%d: ", i);
        person_print(temp);
        temp = temp->next;
        i++;
    }
}

void llist_add_end(struct Person **list, struct Person *p)
{
    if (!p) {
        return;
    }

    struct Person *temp = *list;
    if (temp == NULL) {
        *list = p;
        return;
    }

    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = p;
}

void llist_add_at(struct Person **list, struct Person *p, int pos)
{
    if (!p) {
        return;
    }

    struct Person *temp = *list;
    if (pos == 0) {
        if (temp == NULL) {
            *list = p;
        } else {
            p->next = *list;
            *list = p;
        }
        return;
    }

    if (temp == NULL) {
        printf("List has 0 elements, can not assign to position %d\n", pos);
    } else {
        struct Person *previous;
        int i = 0;
        while (temp != NULL && i < pos) {
            previous = temp;
            temp = temp->next;
            i++;
        }
        if (i < pos) {
            printf("List is too small for specified position (Current Size: %d)\n", i);
            return;
        }
        previous->next = p;
        p->next = temp;
    }
}

void llist_remove_at(struct Person **list, int pos)
{
    struct Person *current = *list;
    if (current == NULL) {
        printf("List has 0 elements\n");
        return;
    }
    if (pos == 0) {
        *list = current->next;
        free(current);
        return;
    }

    int i = 0;
    while (current != NULL && i + 1 < pos) {
        current = current->next;
        i++;
    }
    if (current == NULL || current->next == NULL) {
        printf("List is too small for specified position\n");
        return;
    }
    struct Person *temp = current->next->next;
    free(current->next);
    current->next = temp;
}

void llist_remove_all(struct Person **list)
{
    struct Person *head = *list;
    while (head != NULL) {
        struct Person *temp;
        temp = head;
        head = head->next;
        free(temp);
    }
    *list = NULL;
}

struct Person *llist_find_at(struct Person *list, int pos)
{
    struct Person *temp = list;
    int i = 0;
    while (temp != NULL && i < pos) {
        temp = temp->next;
        i++;
    }
    if (i <= pos && temp == NULL) {
        printf("List is too small for specified position (Current Size: %d)\n", i);
        return NULL;
    }
    return temp;
}

struct Person *llist_find_by(struct Person *list, char *s)
{
    struct Person *temp = list;
    struct Person *new_list = NULL;
    while (temp != NULL) {
        char *name = temp->name;
        char *surname = temp->surname;
        char *email = temp->email;
        char *phone = temp->phone;
        if (strcmp(name, s) == 0 || strcmp(surname, s) == 0 ||
            strcmp(email, s) == 0 || strcmp(phone, s) == 0) 
            {
            struct Person *new = NULL;
            new = create_node(name, surname, email, phone);
            llist_add_end(&new_list, new);
        }
        temp = temp->next;
    }
    if (new_list != NULL) {
        return new_list;
    }
    return NULL;
}
