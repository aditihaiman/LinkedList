#include <stdio.h>
#include <stdlib.h>
#include "headers.h"


void print_list(struct node *current) {
    //if(current == NULL) printf("[]\n"); //fix
    //else {
        printf("[");
        while(current != NULL) {
            printf("%d,", current->i);
            current = current->next;
        }
        printf("]\n");
//        printf("%d]\n", current->i);
    //}
}

struct node * insert_front(struct node *current, int val){
    struct node *new;
    new->i = val;
    new->next = current;
    return new;
}

struct node * remove_val(struct node *front, int data){
    
}

struct node * free_list(struct node *current) {
    
    
}

struct node * newList(){
    struct node *nl = malloc(sizeof(struct node));
    
}
