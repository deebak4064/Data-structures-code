#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

void deleteAtBeginning(struct Node** head) {
    if (*head == NULL) {
        printf("Linked list is empty. Unable to delete.\n");
        return;
    }

    struct Node* temp = *head;
    *head = (*head)->next;
    free(temp);

    printf("Node deleted successfully from the beginning.\n");
}

void printLinkedList(struct Node* head) {
    if (head == NULL) {
        printf("Linked list is empty.\n");
        return;
    }

    struct Node* current = head;
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}

int main() {
   
    struct Node* head = NULL;
    struct Node* second = NULL;
    struct Node* third = NULL;

    head = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));

    head->data = 1;
    head->next = second;

    second->data = 2;
    second->next = third;

    third->data = 3;
    third->next = NULL;

    printf("Linked list before deletion: ");
    printLinkedList(head);

    deleteAtBeginning(&head);

    printf("Linked list after deletion: ");
    printLinkedList(head);

    return 0;
}

