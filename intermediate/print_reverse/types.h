// A node in our linked list

typedef struct node {
    int val;
    struct node *next;
} node;

// The entire list

typedef struct list {
    node *head;
} list;