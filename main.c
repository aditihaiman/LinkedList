#include <stdio.h>
#include <stdlib.h>
#include "headers.h"


int main() {
    struct node *front = NULL;
    
    printf("Testing print empty list: \n");
    print_list(front);

    
    printf("\nAdding 0-9 to list: \n");
    for(int x = 0; x < 10; x++){
        front = insert_front(front,x);
    }
    print_list(front);
    
    printf("\nTesting remove(9): \n");
    front = remove_val(front, 9);
    print_list(front);
    
    printf("\nTesting remove(0): \n");
    front = remove_val(front, 0);
    print_list(front);
    
    printf("\nTesting remove(5): \n");
    front = remove_val(front, 5);
    print_list(front);
   
    printf("\nTesting remove(10): \n");
    front = remove_val(front, 10);
    print_list(front);
    
    printf("\nRemoving all values from list: \n");
    for(int x = 0; x < 9; x++){
        front = remove_val(front, x);
    }
    print_list(front);
    
    printf("\nAdding back 0-9 to list: \n");
     for(int x = 0; x < 10; x++){
         front = insert_front(front,x);
     }
     print_list(front);

    printf("\nTesting free(list): \n");
    front = free_list(front);
    print_list(front);

}
