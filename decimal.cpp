#include <stdio.h>
#include <stdlib.h>
void display();
struct node
{
 int data;
 struct node *next;
};
struct node *head=NULL,*c,*p,*r;
void push(int value)
{
 struct node * h = (struct node *)malloc(sizeof(struct node));
 h->data = value;
 h->next=NULL;
 if(head == NULL)
  head = h;
 else
 {
  c=head;
  while(c->next != NULL)
  {
   c=c->next;
  }
  c->next=h;
 }
}
void display()
{
 int dec=0;
 if(head == NULL)
  printf("list is empty");
 else
  {
   for(c=head;c!=NULL;c=c->next)
   {
    dec=dec*2+c->data;
   }
   printf("%d",dec);
  }
}
int main()
{
 int n,bit,i;
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
  scanf("%d",&bit);
  push(bit);
 }
 display();
 return 0;
}
