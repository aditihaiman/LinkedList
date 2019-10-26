#include <stdio.h>
#include <stdlib.h>
#include "headers.h"


void print_list(struct node *current) {
        printf("[");
        while(current != NULL) {
            printf("%d", current->i);
            current = current->next;
            if(current!=NULL) printf(",");
        }
        printf("]\n");
}

struct node * insert_front(struct node *front, int val){
    struct node *new;
    new = (struct node*)malloc(sizeof(struct node));
    new->i = val;
    new->next = front;
    return new;
}

struct node * remove_val(struct node *front, int data){
    struct node *current = front;
    while(current != NULL){
        struct node *prev = current;
        if(current->i == data){
            if(current == front) front = front->next;
            else prev->next = current->next;
            return front;
        }
        prev = current;
        current = current->next;
    }
    return front;
}

struct node * free_list(struct node *current) {
    
    
}

//int main() {
//    struct node *front;
//
//    print_list(front);
//
//    insert_front(front, 1);
//
//    print_list(front);
//
//
//
//}
