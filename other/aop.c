// #include<math.h>
// #include<stdio.h>
// void main()
// {
//     float b,h,a;
//     scanf(" %f %f",&b,&h);
//     a=(b*h);
//     printf("AOP %.2f",a);
// }
#include<stdio.h>
void main(){
    int a,b;
    scanf("%d%d",&a,&b);
    printf("value of a=%d and b=%d using before swape",a,b);
    a=a^b;
    b=a^b;
    a=a^b;
    printf("value of a=%d and b=%d using after swape",a,b);  
}