#include <stdio.h>
 int main()
{
	int a[10] = {9,6,3,1,2,0,5,4,7,8};
	int i,j,key;
	for(i=1;i<10;i++){
		key = a[i]; // Storing the ith value
		j = i-1;
		while(j>=0 && a[j]>key){
			a[j+1] = a[j];
			j--;
		}
		a[j+1] = key;
	}
	for(i=0; i<10; i++){
		printf("%d\t",a[i]);
	}
	return 0;
}
