#include <stdio.h>
#include <stdlib.h>
#include "headers.h"


int main() {
    struct node test;
    test.i = NULL;
    test.next = NULL;
    
    //printf("%p", test.next);
    
    struct node *lst = &test;
        
    printf("%d\n", test.i);
    print_list(lst);
    
    lst = insert_front(lst, 0);
    lst = insert_front(lst, 1);

    
    print_list(lst);


    
}
