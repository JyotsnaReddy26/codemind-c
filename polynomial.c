#include<stdio.h>
#include<stdlib.h>
struct node{
	float coeff;
	int exp;
	struct node *next; 
};
typedef struct node Node;
Node *insert_term(Node *head,float co,int ex)
{
 Node *newNode=(Node *)malloc(sizeof(Node));
 newNode->coeff=co;
 newNode->exp=ex;
 newNode->next=NULL;
 if(head==NULL)
 {
 	head= newNode;
 }
 else
 {
 	Node *temp=head;
 	while(temp->next !=NULL)
 	{
 		temp=temp->next;
	 }
	 temp->next=newNode;
 }
 return head;
 
}
Node *create_polynomial()
{
	Node *head=NULL;
	int n,i;
	printf("enter number of terms in a polynomial:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		float co;
		int ex;
		printf("enter coefficient of term %d:",i);
		scanf("%f",&co);
		printf("enter exponent of term %d :",i);
		scanf("%d",&ex);
		head=insert_term(head,co,ex);
	}
	
	return head;
	
}
void display(Node *head)
{
	Node *temp= head;
	while(temp!=NULL)
	{
		printf("(%.1f)x^%d%c",temp->coeff, temp->exp, (temp->next==NULL)?'\n':'+');
		temp=temp->next;
	}
}
int main()
{
	Node *poly1=create_polynomial();
	display(poly1);
}

