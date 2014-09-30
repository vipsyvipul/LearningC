#include <stdio.h>
#include <stdlib.h>
long int power(long int x,long int m){
	if(m!=1){
		return x*power(x,(m-1));
	}
}

int main(void){
	int t,i;
	long int x,m,n,sum=0;
	scanf("%d",&t);
	while(t){
		t--;
		scanf("%ld %ld %ld",&x,&m,&n);
		for(i=1; i<=m; i++){
			sum += power(x,i);
		}
		sum++;
		sum = sum%n;
		printf("%ld\n",sum);
	}
	return 0;
}

