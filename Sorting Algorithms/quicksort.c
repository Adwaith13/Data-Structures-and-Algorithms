#include <stdio.h>

int dac(int a[],int start,int end)
{
    int i,j,temp;
    int pivot=a[end];
    i=(start-1);
    for(j=start;j<=end-1;j++)
    {
        if(a[j]<pivot)
        {
            i++;
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }
    temp=a[i+1];
    a[i+1]=a[j];
    a[j]=temp;
    return (i+1);
}

void quicksort(int a[],int start,int end)
{
    if(start<end)
    {
        int p=dac(a,start,end);
        quicksort(a,start,p-1);
        quicksort(a,p+1,end);
    }   
}

void printarray(int a[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}

int main()
{
    int i,n;
    printf("Enter the number of elements in array:");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements in array:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("Array before sorting:\n");
    printarray(a,n);
    quicksort(a,0,n-1);
    printf("\nArray after sorting:\n");
    printarray(a,n);

    return 0;
}