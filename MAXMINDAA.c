#include <stdio.h>
#define MAX 50
int main()
{
    int A[MAX];
    int n;
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
    int max=A[0],min=A[0];
    for(int i=0;i<n;i++)
    {
        if(max>A[i])
            max=A[i];
        if(min<A[i])
            min=A[i];
    }
    printf("Max element %d\n",max);
    printf("Min element %d\n",min);
    return 0;
}
