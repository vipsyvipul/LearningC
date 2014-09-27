#include <stdlib.h>
#include <stdio.h>

struct Node{
	double data;
	struct Node *next;
};

struct Node *head;

void Insert(int);
void Print();

int main(){
	head = NULL;
	const int q = 12;
	int i,n;
	double x;
	printf("Enter the limit\n");
	scanf("%d",&n);
	for(i=0; i<n; i++){
		printf("Enter a value\n");
		scanf("%d",&x);
		Insert(x);
		Print();
	}
}
void Insert(int x){
	printf("%d",sizeof(struct Node));
	struct Node *temp = (struct Node*)malloc(sizeof(struct Node));
	temp -> data = x;
	temp -> next = head;
	head = temp;
}
void Print(){
	struct Node *temp = head;
	while(temp != NULL){
		printf("Head = %d\n", head);
		printf("%lf(%lf)\t", temp -> data, temp -> next);
		temp = temp -> next;
	}
	printf("\n");
}
