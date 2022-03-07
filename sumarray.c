#include <stdio.h>
#define MAX 50
int main()
{
    int a[MAX];
    int n,f=0,c=0;
    printf("Enter no of element in array\n");
    scanf("%d",&n);
    printf("Enter element in array\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int k=0;k<n;k++)
    {
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(j>i)
                {
                if(i!=j && j!=i && k!=j)
                {
                    if((a[i]+a[j])==a[k])
                    {
                        printf("%d,%d,%d\n",j,i,k);
                    }
                }
                }
            }
        }
    }
    return 0;
}
