#include <stdio.h>

int binarySearch(int a[],int n,int l,int h,int key)
{
    int mid;
        if(l<=h)
        {
            mid=(l+h)/2;

            if(key==a[mid])
            {
                return mid;
            }

            else if(key<a[mid])
            {
                return binarySearch(a,n,l,mid-1,key);
            }

            else
            {
                return binarySearch(a,n,mid+1,h,key);
            }
        }

    return -1;
    
}

int main()
{
    int i,n,key;
    printf("Enter the number of elements in array=");
    scanf("%d",&n);

    int a[n];
    printf("Enter the elements in array=");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("Enter the element you want to search= ");
    scanf("%d",&key);

    int result;
    result=binarySearch(a,n,0,n-1,key);
    if(result==-1)
    printf("Element not present in array");
    else
    printf("Element %d present at %d",key,result);

}
