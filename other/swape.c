// #include<stdio.h>
// void main(){
//     int a,b;
//     scanf("%d%d",&a,&b);
//     printf("value of a=%d and b=%d using before swape\n",a,b);
//     a=a^b;
//     b=a^b;
//     a=a^b;
//     printf("value of a=%d and b=%d using after swape",a,b);  
// } 

#include<stdio.h>
void main(){
   int x=10,y=11,z=8,s;
   s = ++x+y--+z++;
   printf("value of s=%d",s);
}