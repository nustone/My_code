#include<stdio.h>
int main(){
int a = 0x11223344;
char *p = (char *)&a;   
p++;
*p=0x55;
printf("%#x\n",a);

}
