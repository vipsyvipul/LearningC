#include <stdio.h>
#include <stdlib.h>

int divide(int a[], int first, int last){
	int x = a[last];
	int i = first - 1;
	int j,tmp;
	for(j=first; j<=last-1; j++){
		if(a[j]<=x){
			i = i+1;
			tmp = a[j];
			a[j] = a[i];
			a[i] = tmp;
		}
	}
	tmp = a[last];
	a[last] = a[i+1];
	a[i+1] = tmp;
	return (i+1);
}

quicksort(int a[], int first, int last){
	int q;
	if(first<last){
		q = divide(a, first, last);
		quicksort(a,first,q-1);
		quicksort(a,q+1,last);
	}
}

int main(void){
	int a[] = {9,5,6,1,2,3,4,8,7,0};
	int first = 0;
	int last = ((sizeof(a))/sizeof(int))-1;
	quicksort(a,first,last);
	int i;
	for(i=0; i<=last; i++){
		printf("%d\t",a[i]);
	}
	printf("\n");
}

