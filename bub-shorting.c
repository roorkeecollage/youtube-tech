#include<stdio.h>
    main()
  {
    int i,j,t,n;
    int a[20];
    printf("Enter the size of Array:");
    scanf("%d",&n);
    //input array;
    printf("Enter the Elements of Array:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    //printing array before shorting;
     printf("Array before shorting:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    //Logic;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
    }
    //printing Array After shorting;
    printf("\nArray after Shorting:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
  return 0;
  }