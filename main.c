#include <stdio.h>
#include <stdlib.h>
#include "headers.h"

struct node {
    int i;
    struct node *next;
};

int main() {
    struct node test;
    test.i = NULL;

    //printf("%p", test.next);

    struct node *lst = &test;

    printf("%d\n", test.i);
    print_list(lst);

    lst = insert_front(lst, 5);

    print_list(lst);



}
