#include <stdio.h>
#include <stdlib.h>
void print(int a[], int size);
int gcd(int a, int b);
void rotate(int a[], int d, int n){
	int i,j,k,temp;
	int g = gcd(d,n);
	for(i=0; i<g; i++){
		temp = a[i];
		j = i;
		while(1){
			k = j+d;
			if(k >= n){
				k = k - n;
			}
			if (k == i){
				break;
			}
			a[j] = a[k];
			j = k;
		}
		a[j] = temp;
	}
}
void print(int a[], int size){
	int i;
	for(i=0; i<size; i++){
		printf("%d ",a[i]);
	}
	printf("\n");
}
int gcd(int a, int b){
	if(b == 0)
		return a;
	else
		return gcd(b, a%b);
}
int main(void){
	int a[] = {1,2,3,4,5,6,7,8,9};
	rotate(a,3,7);
	print(a,7);
	return 0;
}
