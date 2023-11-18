#include<stdio.h>
  int main()
 {
    int a=76;
    int *pnt = &a;
    printf("The Value of A is %d\n",*pnt);
    printf("The Value of A is %d\n",a);
    printf("The & of A is %p\n",pnt);
    printf("The & of A is %p\n",&a);
    
    return 0;
 }