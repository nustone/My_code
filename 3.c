#include<stdio.h>

void swap(char **a,char **b){
    char *p = *a;
    *a = *b;
    *b = p;
}

int main(){
    char *pa = "ABCD";
    char *pb = "abcd";
    swap(&pa,&pb);
    puts(pa);
    puts(pb);
    return 0;
}