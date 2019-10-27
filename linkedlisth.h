struct node { int i; struct node *next; };

void print_list(struct node * front);
struct node * insert_front(struct node * front, int x);
struct node * free_list(struct node * front);
struct node * remove_node(struct node * front, int data);
