#include<stdio.h>
int main(){
    int a=5;
    int b=6;
    const* int ptr;
    ptr=&a;

    printf("%p\n",ptr);
    ptr=&b;
     printf("%p",ptr);


}