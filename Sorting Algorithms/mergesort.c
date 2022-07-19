#include <stdio.h>

void dac(int a[], int l, int m, int r)
{
	int i, j, k;
	int n1 = m - l + 1;
	int n2 = r - m;

	int L[n1], R[n2];

	for (i = 0; i < n1; i++)
		L[i] = a[l + i];

	for (j = 0; j < n2; j++)
		R[j] = a[m + 1 + j];

	i = 0; 
	j = 0; 
	k = l; 
	while (i < n1 && j < n2) {
		if (L[i] <= R[j]) {
			a[k] = L[i];
			i++;
		}
		else {
			a[k] = R[j];
			j++;
		}
		k++;
	}

	while (i < n1) {
		a[k] = L[i];
		i++;
		k++;
	}


	while (j < n2) {
		a[k] = R[j];
		j++;
		k++;
	}
}

void mergeSort(int a[], int l, int r)
{
	if (l < r) {
		int m = l + (r - l) / 2;
		mergeSort(a, l, m);
		mergeSort(a, m + 1, r);

		dac(a, l, m, r);
	}
}

void printArray(int a[], int n)
{
	int i;
	for (i = 0; i < n; i++)
		printf("%d ", a[i]);
	printf("\n");
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
	printArray(a, n);

	mergeSort(a, 0, n - 1);
    printf("\nArray after sorting:\n");
	printArray(a, n);
	return 0;
}
