#include <stdio.h>
#define MAX 50
int main()
{
    int a[MAX];
    int n,key,f=0,c=0;
    printf("Enter no of element in array\n");
    scanf("%d",&n);
    printf("Enter element in array\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter element to be found\n");
    scanf("%d",&key);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i>j)
            {
                if((a[i]-a[j])==key)
                {
                    c+=2;
                }
            }
        }
    }
    if(c>0)
        printf("%d\n",c);
    else
        printf("Not found\n");
    return 0;
    }
