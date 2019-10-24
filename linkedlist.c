#include <stdio.h>

struct node {
    int i;
    struct node *next;
};

void print_list(struct node *current) {
    if(current->i == NULL) printf("[]\n");
    else {
        printf("[");
        while(current->next->i != NULL) {
            printf("%d,", current->i);
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

struct node * free_list(struct node *current) {
    
    
}

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
