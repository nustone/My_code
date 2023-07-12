#include<stdio.h>

typedef struct node{
    struct node *next;
}List, *Plist;

Plist creat_list()
{
    Plist p = malloc(sizeof(List));
    p->next = NULL;
    return 0;
}
int insert(Plist p)
{
    Plist q = malloc(sizeof(List));
    q->next = p->next;
    p->next = q;
    return 0;
}                           