
#include <stdio.h>
#include <stdlib.h>

struct Node {
	int data;
	struct Node* next;
};

void reverseList(struct Node** headref);
void _delLesserNodes(struct Node* head);


void delLesserNodes(struct Node** head_ref)
{
	reverseList(head_ref);

	_delLesserNodes(*head_ref);

	reverseList(head_ref);
}

void _delLesserNodes(struct Node* head)
{
	struct Node* current = head;

	/* Initialize max */
	struct Node* maxnode = head;
	struct Node* temp;

	while (current != NULL && current->next != NULL) {
		if (current->next->data < maxnode->data) {
			temp = current->next;
			current->next = temp->next;
			free(temp);
		}


		else {
			current = current->next;
			maxnode = current;
		}
	}
}

void push(struct Node** head_ref, int new_data)
{
	struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
	new_node->data = new_data;
	new_node->next = *head_ref;
	*head_ref = new_node;
}

void reverseList(struct Node** headref)
{
	struct Node* current = *headref;
	struct Node* prev = NULL;
	struct Node* next;
	while (current != NULL) {
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}
	*headref = prev;
}

void printList(struct Node* head)
{
	while (head != NULL) {
		printf("%d ", head->data);
		head = head->next;
	}
	printf("\n");
}

int main()
{
	struct Node* head = NULL;
	int n,a;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
	scanf("%d",&a);
	push(&head,a);
	}

	printf("Given Linked List \n");
	printList(head);

	delLesserNodes(&head);

	printf("Modified Linked List \n");
	printList(head);

	return 0;
}
