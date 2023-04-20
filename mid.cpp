#include <stdio.h>  
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
void middle()
    {
        struct node* temp=head;
        int c=0;
        while(temp!=NULL)
        {
            c++;
            temp=temp->next;
        }

        temp=head;
        int p=1;
        if(c%2==0)
        {
            int mid=c/2;
            while(temp!=NULL)
            {
                if(p==mid)
                    break;
                p++;
                temp=temp->next;
            }
            printf("%d %d",temp->data,temp->next->data);
           // cout<<temp->data<<" "<<temp->next->data<<endl;
        }
        else
        {
            int mid=(c+1)/2;
            while(temp!=NULL)
            {
                if(p==mid)
                    break;
                p++;
                temp=temp->next;
            }
            printf("%d",temp->data);
            //cout<<temp->data<<endl;
        }
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
    int i,n,ele;
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        scanf("%d",&ele);
        addNode(ele);
    }
    display();
    middle();
    
    return 0;  
}  