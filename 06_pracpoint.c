#include<stdio.h>

int main(){
    int a=5;
    int *ptr;
    ptr=&a;
    printf("THE ADDRESS OF VARIABLE A IS %u\n",ptr);
    printf("THE VALUE OF VARIABLE A IS %d\n",*ptr);
    return 0;
}