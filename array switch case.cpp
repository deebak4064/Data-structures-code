#include <stdio.h>

#define MAX_SIZE 100

void insertElement(int arr[], int size, int element, int position) {
    if (size >= MAX_SIZE) {
        printf("Array is full. Cannot insert element.\n");
        return;
    }

    if (position < 0 || position > size) {
        printf("Invalid position. Cannot insert element.\n");
        return;
    }

    for (int i = size - 1; i >= position; i--) {
        arr[i + 1] = arr[i];
    }

    arr[position] = element;
    size++;

    printf("Element inserted successfully.\n");
    for(int i=0;i<size;i++) {
    	printf("%d",arr[i]);
	}
}

void deleteElement(int arr[], int size, int position) {
    if (size <= 0) {
        printf("Array is empty. Cannot delete element.\n");
        return;
    }

    if (position < 0 || position >= size) {
        printf("Invalid position. Cannot delete element.\n");
        return;
    }

    for (int i = position; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }

    size--;

    printf("Element deleted successfully.\n");
    for(int i=0;i<size;i++) {
    	printf("%d",arr[i]);
	}
}

void updateElement(int arr[], int size, int element, int position) {
    if (position < 0 || position >= size) {
        printf("Invalid position. Cannot update element.\n");
        return;
    }

    arr[position] = element;

    printf("Element updated successfully.\n");
    for(int i=0;i<size;i++) {
    	printf("%d",arr[i]);
	}
}

void traverseArray(int arr[], int size) {
    if (size <= 0) {
        printf("Array is empty.\n");
        return;
    }

    printf("Array elements: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[5]={1,2,3,4,5};
    int size = 5;
    int choice, element, position;

    while (1) {
        printf("\nArray Operations:\n");
        printf("1. Insert Element\n");
        printf("2. Delete Element\n");
        printf("3. Update Element\n");
        printf("4. Traverse Array\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter the element to insert: ");
                scanf("%d", &element);
                printf("Enter the position to insert: ");
                scanf("%d", &position);
                insertElement(arr, size, element, position);
                break;
            case 2:
                printf("Enter the position to delete: ");
                scanf("%d", &position);
                deleteElement(arr, size, position);
                break;
            case 3:
                printf("Enter the element to update: ");
                scanf("%d", &element);
                printf("Enter the position to update: ");
                scanf("%d", &position);
                updateElement(arr, size, element, position);
                break;
            case 4:
                traverseArray(arr, size);
                break;
            case 5:
                printf("Exiting...\n");
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}

