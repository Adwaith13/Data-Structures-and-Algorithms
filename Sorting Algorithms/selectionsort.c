#include <stdio.h>

void selectionSort(int a[],int n)
{
    int i,j,min,temp;
    for(i=0;i<n-1;i++)
    {
        min=i;
        for(j=i+1;j<n;j++)
        {
           if(a[j]<a[min])
           {
               min=j;
               temp=a[min];
               a[min]=a[i];
               a[i]=temp;
           }
        }
    }
}

void arr(int a[],int n)
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
    printf("Enter the number of elements in array:");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements in array:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Array before Sorting:\n");
    arr(a,n);
    selectionSort(a,n);
    printf("\nArray after Sorting:\n");
    arr(a,n);
}
