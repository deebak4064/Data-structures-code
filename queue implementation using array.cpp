#include<stdio.h>
#define size 100

int queue[size];
int front = -1; 
int rear = -1;

void enqueue(int value)
 {
 	if(rear == size-1) {
 		printf("queue is full.. cannot enqueue\n");
 		return;
	 }
	 
	 if(front == -1) {
	 front = 0;
     }
     rear++;
     queue[rear] = value;
     printf("%d is enqueued \n",value);
      }
      
void dequeue() {
	if(front==-1 || front > rear) {
		printf("the queue is empty.. cannot dequeue\n");
		return;
	}
	printf("\n%d is dequeued \n",queue[front]);
	front++;
}

void display() {
	if(front==-1 || front>rear) {
		printf("The queue is empty.. nothing to display");
	}
	printf("\nqueue elements :");
	for(int i=front;i<=rear;i++) {
		printf("%d\t",queue[i]);
	}
	printf("\n");
}

int main() {
	
	enqueue(10);
	enqueue(20);
	enqueue(30);
	display();
	dequeue();
	display();
	return 0;
}
