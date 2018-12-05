#include <stdio.h>

int main()
{
  int i, arr[20],j,no;
  printf("enter the size of the array\n");
  scanf("%d",&no);
  printf("enter any %d elements in array\n",no);
  for(i=0;i<no;i++)
  {
      scanf("%d",&arr[i]);
  }
  printf("duplicate elements are:\n");
  for(i=0;i<no;i++)
  {
      for(j=i+1;j<no;j++)
      {
          if(arr[i]==arr[j])
          {
              printf("%d\n",arr[i]);
          }
      }
  }
    return 0;
}