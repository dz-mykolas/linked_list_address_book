#define INPUT_SIZE 30
#define SPACING 47

#define MAXV2(y) #y
#define MAXV(x) MAXV2(x)

void sig_handler(int signum);
void file_open(char *file_path, struct Person **list);
void load_file(FILE *file, struct Person **list);
void print_possible();
void consume_buffer(char *buffer);
int ask_num();
char *ask_input();
struct Person *ask_address_input();
void do_task(struct Person **list, int task);