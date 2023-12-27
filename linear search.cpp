#include<stdio.h>

int main() {
    int list[100], size, i, search;
    
    printf("Enter the size of the list: ");
    scanf("%d", &size);
    
    printf("Enter any %d values: ", size);
    for(i = 0; i < size; i++) {
        scanf("%d", &list[i]);
    }
    
    printf("Enter the element to be searched: ");
    scanf("%d", &search);
    
    for(i = 0; i < size; i++) {
        if(search == list[i]) {
            printf("The search element is found at index position %d", i);
            return 0;    
        }
    }
    
    printf("Entered element is not found");
    
    return 0;
}

