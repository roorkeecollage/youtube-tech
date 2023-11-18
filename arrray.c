#include<stdio.h>
 main()
 {
    int a[2][2],i,j,n;
    printf("Enter the oder of matrix");
    scanf("%d",&n);
    for(i=0;i<2;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("Enter the element of array:");
            scanf("%d",&a[i][j]);
        }
    }
    //printing
     for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d\t",a[i][j]);
          
        }
        printf("\n");
    }
    
    return 0;
 }
