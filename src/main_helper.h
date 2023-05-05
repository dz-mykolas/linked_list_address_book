#ifndef _MAIN_HELPER_H
#define _MAIN_HELPER_H

#include <signal.h>

#include "task_util.h"
#include "llist.h"

void task_print(struct Person *list);
void task_add_end(struct Person **list);
void task_add_at(struct Person **list);
void task_remove_at(struct Person **list);
void task_remove_all(struct Person **list);
void task_find_at(struct Person *list);
void task_find_by(struct Person *list);

#endif