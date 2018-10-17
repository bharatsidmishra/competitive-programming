#include<stdio.h>
#include<stdlib.h>
struct node {
	int data;
	struct node *next;
};

void insertAtBegin( struct node **head, int data ) {
	struct node *temp = (struct node*)malloc(sizeof(struct node));
	temp->data = data;
	temp->next = (*head);
	*head = temp;
}
void findMid(struct node *head) {
	struct node * mid = head, *temp;
	int count =0;
	for( temp = head; temp; temp = temp->next) {
		if(count & 1) {
			mid = mid->next;
		}
		count += 1;
	}
	if(mid)
		printf("the middle node is %d",mid->data);
}


int main() {
	struct node *head = NULL;
	insertAtBegin(&head,10);
	insertAtBegin(&head,20);
	insertAtBegin(&head,30);
	insertAtBegin(&head,40);
	insertAtBegin(&head,50);
	insertAtBegin(&head,60);
	insertAtBegin(&head,70);
	insertAtBegin(&head,80);
        insertAtBegin(&head,90);
        insertAtBegin(&head,100);

	findMid(head);

	return 1;
}
