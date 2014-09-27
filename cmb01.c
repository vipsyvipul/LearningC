#include <stdio.h>
#include <stdlib.h>
int main(){
	int i, n1, n2, sum;
	scanf("%d",&i);
	while(i>0){
		i--;
		scanf("%d %d",&n1,&n2);
		n1 = reverse(n1);
		n2 = reverse(n2);
		sum = n1+n2;
		sum = reverse(sum);
		printf("%d\n",sum);
	}
}

int reverse(int num){
	int rev = 0;
	while(num>0){
		rev = rev * 10;
		rev = rev + (num%10);
		num = num/10;
	}
	return rev;
}
