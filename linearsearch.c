#include <stdio.h>

int linearSearch(int n,int a[],int key)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(a[i]== key)
        return i;
    }
    return -1;
}

int main()
{
    int n,i,key;
    printf("Enter the number of elements=");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements in array=");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the key=");
    scanf("%d",&key);
    int result=linearSearch(n,a,key);
    if(result==-1)
    printf("Element not present in array");
    else
    printf("Element %d present at %d",key,result);
}