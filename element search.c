#include <stdio.h>
#define MAX 50
int main()
{
    int A[MAX];
    int n,t,f=0;
    printf("Enter no. of element:\n");
    scanf("%d",&n);
    printf("Enter element in an array:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d\n",&A[i]);
    }
    printf("Entered element in an array:\n");
    for(int i=0;i<n;i++)
    {
        printf("%d\t",A[i]);
    }
    printf("\n");
    printf("Enter element to be found:\n");
    scanf("%d\n",&t);
    for(int i=0;i<n;i++)
    {
        if(t==A[i])
            f=1;
    }
    if(f==1)
    {
        printf("Element found\n");
    }
    return 0;
}
