#include<stdio.h>
void main(){
    int a;
    printf("enter the value of a : ");
    scanf("%d",&a);
    switch (a % 2)
    {
    case 0 :
    printf("number is even");
        break;
    case 1 :
    printf("number is odd");
    default:
    printf(" please valid input !");
        break;
    }
}