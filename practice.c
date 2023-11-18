#include<stdio.h>
 main()
 {
    // int fact=1,n,add=0;
    // printf("Enter the no.");
    // scanf("%d",&n);
    // for(int i=1;i<=n;i++)
    // {
    //     fact=fact*i;
    //     add=add+fact*i;
    // }
    //     printf("factorial iss %d",fact);
    //     printf("\nsum of factrioal is %d",add);
    int n,sum=0,digit;
    printf("Enter the no.:");
    scanf("%d",&n);
    while (n>0)
   
    {
        digit=n%10;
        sum=sum+digit;
        n=n/10;
    }
    printf("the sum is %d",sum);
    return 0;
 }