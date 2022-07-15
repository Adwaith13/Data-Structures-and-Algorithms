#include <stdio.h>

void insertionSort(int a[],int n)
{
    int i,j,key;
    for(i=1;i<n;i++)
    {
        key=a[i];
        j=i-1;
        while(j>=0 && a[j]>key)
        {
            a[j+1]=a[j];
            j=j-1;
        }
        a[j+1]=key;

    }
}

void print(int a[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}


void main()
{
    int n,i;
    printf("Enter the number of elements in array=");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements in array=");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Array Before Sorting:\n");
    print(a,n);
    insertionSort(a,n);
    printf("\nArray after sorting:\n");
    print(a,n);
}