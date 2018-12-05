#include <stdio.h>
int main()
{
    int n;
    printf("enter the size if the array\n");
    scanf("%d",&n);
    int a[n];
    printf("enter the elements of the array:\n");
    int i,j;
    for(i=0;i<n;i++)
        
        scanf("%d",&a[i]);
    int count=0;
    //int x[n];
    // int k=0;
    //int l;
    
    printf("Non Repeated element(s) is/are \n");
    
    for(i=0;i<n;++i)
    {
        count = 0;
        for(j=0;j<n;j++)
        {
            
            if(a[j]==a[i])
                count++;
            
        }
        
        if (count == 1) {
            printf(" %d ", a[i]);
        }
        
    }
    
    printf("\n");
    
    return 0;
}

