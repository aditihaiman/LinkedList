struct node {
    int i;
    struct node *next;
};

void print_list(struct node *);
struct node * insert_front(struct node *, int );
struct node * free_list(struct node *);
struct node * newList();
struct node * remove_val(struct node *, int);
struct node * newNode(int val);
