#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,n;
    n = 5;
    int *ptr;
    ptr =(int*) malloc(n*sizeof(int));
    printf("%p\n",ptr);
    if(ptr==Null)
        {
        printf("Memory allocation Failed.\n");

    }
    else
    {
        for(i=0;i<n;i++)
        {
            scanf("%d",(ptr+1));
        }
        for(i=0;i<n;i++)
        {
            scanf("%d",*(ptr+1));
        }

    }
    n=10;
    ptr = realloc(ptr,n*sizeof(int));
    printf("%p\n",ptr);
    if(ptr==Null){
        printf("Memory allocation Failed.\n");

    }
    else
    {
        for(i=0;i<n;i++)
        {
            scanf("%d",(ptr+1));
        }
        for(i=0;i<n;i++)
        {
            scanf("%d",*(ptr+1));
        }
    }
    free(ptr);

    return 0;
}
