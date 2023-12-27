#include <stdio.h>
#include <stdlib.h>

struct Node {
	int data;
	struct Node* next;
};

void push(struct Node** head_ref, int new_data)
{
	
	struct Node* new_node
		= (struct Node*)malloc(sizeof(struct Node));
	new_node->data = new_data;

	
	new_node->next = (*head_ref);
 
	(*head_ref) = new_node;
}

void append(struct Node** head_ref, int new_data)
{
	struct Node* new_node
		= (struct Node*)malloc(sizeof(struct Node));
	new_node->data = new_data;

	struct Node* last = *head_ref;

	new_node->next = NULL;

	if (*head_ref == NULL) {
		*head_ref = new_node;
		return;
	}

	while (last->next != NULL) {
		last = last->next;
	}

	last->next = new_node;
}

void printList(struct Node* node)
{
	while (node != NULL) {
		printf(" %d", node->data);
		node = node->next;
	}
}

int main()
{
	struct Node* head = NULL;

	push(&head, 6);
	push(&head, 5);
	push(&head, 4);
	push(&head, 3);
	push(&head, 2);

	printf("Created Linked list is: ");
	printList(head);

	append(&head, 1);

	printf("\nAfter inserting 1 at the end: ");
	printList(head);

	return 0;
}

