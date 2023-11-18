#include<stdio.h>
    int sum(int ,int );
    int main()
 {
    int a,b,c;
    printf("Enter the value of a and b:");
    scanf("%d%d",&a,&b);
    c=sum(a,b); 
    printf("The sum is %d",c);   
 }
 int sum(int a, int b)
 {
    return a+b;
 }