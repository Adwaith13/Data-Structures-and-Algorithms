#include <stdio.h>

void bubbleSort(int a[],int n)
{
    int i,j,temp;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
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
    printf("Enter the elements in array=");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Array before Sorting:\n");
    arr(a,n);
    bubbleSort(a,n);
    printf("\nArray after Sorting:\n");
    arr(a,n);
}

