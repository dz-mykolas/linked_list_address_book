















struct Person {

    char name[30];

    char surname[30];

    char email[30];

    char phone[30];

    struct Person *next;

};



struct Person *create_address_node(char *string);

struct Person *create_node(char *name, char *surname, char *email, char *phone);

int get_size(struct Person **list);

void person_print(struct Person *p);

void llist_print(struct Person *list);

void llist_add_end(struct Person **list, struct Person *p);

void llist_add_at(struct Person **list, struct Person *p, int pos);

void llist_remove_at(struct Person **list, int pos);

void llist_remove_all(struct Person **list);

struct Person *llist_find_at(struct Person *list, int pos);

struct Person *llist_find_by(struct Person *list, char *s);
