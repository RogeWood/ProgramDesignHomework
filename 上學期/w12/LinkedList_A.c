#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Node{
    int data;
    struct Node *next;
};


void add(struct Node *head, int data);
void print(struct Node *node);
void insert(struct Node *head, int target, int data);
void f_delete(struct Node *head, int target);
void search(struct Node *node, int target);
void update(struct Node *head, int target, int data);

int main()
{
    struct Node *head; // head->next is first node in link list
    head = (struct Node*)malloc(sizeof(struct Node));
    char s[10]; // command sting

    while(scanf("%s", s) != EOF)
    {
        if(!strcmp(s, "add"))
        {
            int n;
            scanf("%d", &n);
            add(head, n);
        }
        else if(!strcmp(s, "insert"))
        {
            int n, t;
            scanf("%d %d", &t, &n);
            insert(head, t, n);
        }
        else if(!strcmp(s, "print"))
        print(head->next);
        else if(!strcmp(s, "search"))
        {
            int t;
            scanf("%d", &t);
            search(head, t);
        }
        else if(!strcmp(s, "update"))
        {
            int n, t;
            scanf("%d %d", &t, &n);
            update(head, t, n);
        }
        else if(!strcmp(s, "delete"))
        {
            int t;
            scanf("%d", &t);
            f_delete(head, t);
        }
    }
    return 0;
}

void add(struct Node *head, int data)
{
    printf("ADD_SUCC\n");

    // creat new node
    struct Node *newNode;
    newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;

    if(head->next == NULL) // add the first node
    {
        head->next = newNode;
        return;
    }

    // add other node
    struct Node *node = head;
    while(node->next != NULL) // find the last node
    node = node->next;
    node->next = newNode; // set last node->next to newNode
    return;
}

void print(struct Node *node)
{
    while(node != NULL)
    {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("\n");
    return;
}

void insert(struct Node *head, int target, int data)
{
    struct Node *node = head->next; // first node
    struct Node *last; // the node->next to target node
    struct Node *newNode; // the new node

    newNode = (struct Node*)malloc(sizeof(struct Node));

    while(node != NULL)
    {
        if(node->data == target)
        {
            printf("INSERT_SUCC\n");
            newNode->next = node;

            if(head->next == node) head->next = newNode; // if insert first node, set head->next to newNode
            else last->next = newNode; // else set privious node->next to newNode

            newNode->data = data;
            return;
        }
        last = node; // save privious node
        node = node->next;
    }

    // not found target
    printf("INSERT_FAIL\n");
    return;
}

void f_delete(struct Node *head, int target)
{
    struct Node *last; // the node->next to target node
    struct Node *node = head->next; // first node

    while(node != NULL)
    {
        if(node->data == target) // find target
        {
            printf("DELETE_SUCC\n");
            if(head->next == node) // if delete first node
            {
                if(node->next) head->next = node->next;//if node->next not NULL, set head->next to node->next
                else head->next = NULL; //
            }
            else last->next = node->next;
            free(node); // free node memory
            return;
        }
        last = node;
        node = node->next;
    }

    // not found target
    printf("DELETE_FAIL\n");
    return;
}

void search(struct Node *node, int target)
{
    while(node != NULL)
    {
        if(node->data == target) // find target
        {
            printf("FOUND\n");
            return;
        }
        node = node->next;
    }

    // not found target
    printf("NOT FOUND\n");
    return;
}

void update(struct Node *head, int target, int data)
{
    struct Node *node = head->next; // first node
    while(node != NULL)
    {
        if(node->data == target) // find target
        {
            node->data = data; // update data
            printf("UPDATE_SUCC\n");
            return;
        }
        node = node->next;
    }

    // not found target
    printf("UPDATE_FAIL\n");
    return;
}
