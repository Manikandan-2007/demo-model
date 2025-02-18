#include<stdio.h>
int main()
{
    int n,i,arr[10],key,result;
    printf("Enter the n value:");
    scanf("%d",&n);
    printf("Enter the array value:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);

    }
    printf("Linear search element: \n");
    for(i=0;i<n;i++)
    {
      if(arr[i]==key)
      {
          result=i;
          break;
      }
    }
    if(result=-1)
    {
        printf("Element not found");
    }
    else
    {
        printf("The Element is found");
    }
    return 0;
}
