#include <stdio.h>
void Increase(int* p){	//formal parameter p will store address
	*p = *p + 1;	// value changed at address stored in p by dereferencing
}
int main(){
	int p = 10;
	Increase(&p);	// sending the address value of p
	printf("%d\n",p);
}
