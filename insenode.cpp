#include<stdio.h>  
#include<stdlib.h>  
  
struct node{  
    int data;  
    struct node *previous;  
    struct node *next;  
};      
   
int size = 0;  
struct node *head, *tail = NULL;  

void addNode(int data) {  
    struct node *newNode = (struct node*)malloc(sizeof(struct node));  
    newNode->data = data;  
    if(head == NULL) {  
        head = tail = newNode;  
        head->previous = NULL;  
        tail->next = NULL;  
    }  
    else {  
        tail->next = newNode;  
        newNode->previous = tail;  
        tail = newNode;  
        tail->next = NULL;  
    }  
    size++;  
}  

void addInMid(int data) {  
    struct node *newNode = (struct node*)malloc(sizeof(struct node));  
    newNode->data = data;  
    if(head == NULL) {  
        head = tail = newNode;  
        head->previous = NULL;  
        tail->next = NULL;  
    }  
    else {  
        struct node *current = head, *temp = NULL;  
          
        int mid = (size % 2 == 0) ? (size/2) : ((size+1)/2);      
          
        for(int i = 1; i < mid; i++){  
            current = current->next;  
        }  
        temp = current->next;  
        temp->previous = current;  
        current->next = newNode;  
        newNode->previous = current;  
        newNode->next = temp;  
        temp->previous = newNode;  
    }  
    size++;  
}  
void display() {  
    struct node *current = head;  
    if(head == NULL) {  
        printf("List is empty\n");  
        return;  
    }  
    while(current != NULL) {  
        printf("%d ", current->data);  
        current = current->next;  
    }  
    printf("\n");  
}  
      
int main()  
{  
    int i,n,ele,ele1;
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        scanf("%d",&ele);
        addNode(ele);
    }
    display();
    int n1;
    scanf("%d",&n1);
    for(i=0;i<n1;i++) {
        scanf("%d",&ele1);
        addInMid(ele1);
        display();
    }
    return 0;  
}  