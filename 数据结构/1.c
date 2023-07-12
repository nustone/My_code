#include<stdio.h>

typedef struct list
{
    int data[100];
    int length;
}SeqList;

void init(SeqList *p){
    p->length=0;
}

//插入元素
int insert(SeqList *p,int position,int value){
    if (position<0||position>p->length||p->length>100)
    {
        return -1;
    }               
    
    for (int i = p->length-1; i >position ; i--)
    {
        p->data[i-1] = p->data[i];
    }
    p->data[position]=value;
    p->length++;
    return 0;
}
// 删除元素

int removeAt(SeqList *p,int position){
     if(position<0||position>p->length){
        return -1;
     }
     for (int i = position;i < p->length-1 ; i++)
     {
        p->data[i] = p->data[i+1];
     }
     p->length--;
     return 0;
}
//输出顺序表
void display(const SeqList *p){
    for (int i = 0; i < p->length; i++)
    {
        printf("%d ",p->data[i]);
    }
    printf("\n");
    
}
int main(){
    SeqList list;
    init(&list);

    insert(&list, 0, 10);
    insert(&list, 1, 20);
    insert(&list, 2, 30);

    display(&list);

    removeAt(&list, 1);

    display(&list);

    return 0;
}