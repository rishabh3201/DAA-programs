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
        if(key==a[i])
        {
            f=1;
            c++;
        }
    }
    if(f=1)
        printf("found\n");
    else
            printf("not found\n");
    if(f=1)
        printf("no of copies: %d\n",c);
    return 0;
}
