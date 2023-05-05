#include "src/llist.h"






















extern int running;



void sig_handler(int signum);

void file_open(char *file_path, struct Person **list);

void load_file(FILE *file, struct Person **list);

void print_possible();

void consume_buffer(char *buffer);

int ask_num();

char *ask_input();

struct Person *ask_address_input();

void do_task(struct Person **list, int task);
