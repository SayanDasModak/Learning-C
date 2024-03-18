// Add Two Numbers Your task is very simple: given two integers � A and  �B, write a program to add these two numbers and output the sum.

#include <stdio.h>

int main(){
    int a,b,c;
    scanf("%d",&a);
    while(a--){
        scanf("%d%d",&b,&c);
        printf("%d\n",b+c);
    }
    return 0;
}