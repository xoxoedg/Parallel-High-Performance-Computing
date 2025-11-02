#include <stdio.h>
#include <stdlib.h>

struct element {
    int             val;
    struct element *next; // pointer to next list element
};

/* TODO: implement push_back function body */
struct element *push_back(struct element *head, int val)
{
    struct element *new;

    // allocate storage for new list element

    // set 'val' and 'next'

    // check for valid input of 'head' (empty list)

    // set 'head' to last element

    // append 'new' to list tail

    return new;
}

struct element *push_front(struct element *head, int val)
{
    struct element *new = malloc(sizeof(struct element));
    if (new == NULL) {
        return NULL;
    }

    // new->val  = val; new->next = head;
    *new = (struct element){.val = val, .next = head};

    return new;
}

void print_list(struct element *head)
{
    printf("head --> ");
    while (head != NULL) {
        printf("[ %d ] --> ", head->val);
        head = head->next;
    }
    printf("NULL\n");
}

int main(void)
{
    struct element *head = NULL; // empty list

    head = push_front(head, 37);
    head = push_front(head, 99);
    head = push_front(head, 42);

    printf("before push_back(head, 13):\n");
    print_list(head);

    push_back(head, 13);

    printf("after push_back(head, 13):\n");
    // expected output: head --> [ 42 ] --> [ 99 ] --> [ 37 ] --> [ 13 ] --> NULL
    print_list(head);

    // this should not segfault:
    struct element *tail = push_back(NULL, 0);
}

