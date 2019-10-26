#include <stdio.h>
#include <stdlib.h>
#include "headers.h"


int main() {
    struct node test;
    test.i = 0;
    test.next = NULL;
    
    //printf("%p", test.next);
    
    struct node *lst = NULL;
        
    //printf("%d\n", test.i);
    //print_list(lst);
    
    lst = insert_front(lst, 0);
    //print_list(lst);

    lst = insert_front(lst, 1);
    
//    printf("lst[0]: %d\n", lst->i);
//    printf("lst[1]: %d\n", lst->next->i);
//    printf("lst[2]: %p\n", lst->next->next);

    
    print_list(lst);


    
}
