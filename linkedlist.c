#include <stdio.h>
#include <stdlib.h>
#include "headers.h"


void print_list(struct node *current) {
    if(current->next == NULL) printf("[]\n");
    else {
        printf("[");
        while(current->next->i != NULL) {
            printf("%d,", current->i);
            current = current->next;
        }
        printf("%d]\n", current->i);
    }
}

struct node * insert_front(struct node *current, int val){
    struct node new;
    new.i = val;
    new.next = current;
    return &new;
}

struct node * remove_val(struct node *front, int data){
    
}

struct node * free_list(struct node *current) {
    
    
}

struct node * newList(){
    struct node *nl = malloc(sizeof(struct node));
    
}


