#include<stdio.h>
#include<stdlib.h>

main()
{
struct Node{
    int data;
    struct Node *next;
}*tmp,*last;

struct Head{
    int count;
    struct Node *p;
}*start;

start = (struct Head *)malloc(sizeof(struct Head));
tmp = (struct Node *)malloc(sizeof(struct Node));

start->count = 0;
start->p = NULL;

tmp->data = 10;
tmp->next = NULL;

start->p = tmp;
start->count++;
printf("Your data...\n");
printf("------------\n");
printf("Number of nodes: %d",start->count);
printf("\nData in the node: %d",start->p->data);
printf("\n\n");

}
