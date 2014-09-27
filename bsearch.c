#include <stdio.h>
#include <stdlib.h>

int main(){
	int a[] = {1,2,3,4,5,6,7,8,9};
	int low = 0;
	int high = ((sizeof(a))/(sizeof(int)))-1;
	int mid,num,flag = 1;
	scanf("%d",&num);
	while(flag){
		mid = (low+high)/2;
		if(a[mid] < num){
			low = mid + 1;
		}
		else if(a[mid] > num){
			high = mid - 1;
		}
		else if(a[mid] == num){
			printf("Number %d found at position %d\n", num,mid);
			flag = 0;
		}
		else{
			printf("Number %d does not exist in the array\n");
		}
	}
}
