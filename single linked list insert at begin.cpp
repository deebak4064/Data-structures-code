#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct node {
	int data; 
	struct node *next;
};

struct node *head = NULL;
struct node *current = NULL;

void printlist() {
	struct node *p = head;
	printf("[");
	
	while(p!=NULL) {
		printf("%d\t",p->data);
		p = p->next;
	}
	printf("]");
}
void insertbegin(int data){
	struct node *nn = (struct node*)malloc(sizeof(struct node));
	
	nn->data = data;
	nn->next = head;
	head = nn;
} 
int main() {
	
	
	insertbegin(1);
	insertbegin(2);
	insertbegin(3);
	insertbegin(4);
	insertbegin(5);
	insertbegin(6);
	
	printf("Linked list : ");
	printlist();
	return 0;
}
