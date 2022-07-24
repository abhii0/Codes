#include<stdio.h>
#include<stdlib.h>

struct info
{
	struct info *prev;
	int data;
	struct info *next;
};

typedef struct info node;

node *head;

node *create()
{
	int i,n;
	node *p,*q,*head;
	printf("Enter no of elements\n");
	scanf("%d",&n);
	printf("Enter elements\n");
	for(i = 0;i<n;i++)
	{
		if(i==0)
		{
			head = (node *)malloc(sizeof(node));
			p = head;
			p->prev = NULL;
		}
		else
		{
			p->next = (node *)malloc(sizeof(node));
			q = p;
			p = p->next;
			p->prev = q;
		}
		scanf("%d",&p->data);
	}
	p->next = NULL;
	return head;
}

void display(node *head)
{
	node *p;
	int count = 1;
	p = head;
	while(p!=NULL)
	{
		printf("Node : %d Data : %d\n",count,p->data);
		p = p->next;
		count++;
	}
}

void insert_at_beg(node **head)
{
	node *p,*q,*new;
	new = (node *)malloc(sizeof(node));
	printf("Enter value to be added\n");
	scanf("%d",&new->data);
	p = *head;
	new->next = p;
	*head = new;
	new->prev = NULL;
}

void insert_in_mid(node **head)
{
	node *p,*q,*new;
	new = (node *)malloc(sizeof(node));
	int pos;
	printf("Enter data to be added\n");
	scanf("%d",&new->data);
	printf("Add before\n");
	scanf("%d",&pos);
	p = *head;
	while(p->data!=pos)
	{
		q = p;
		p = p->next;
		p->prev = q;
	}
	if(p->data==pos)
	{
		q->next = new;
		new->next = p;
		new->prev = q;
		p->prev = new;
	}
}

void insert_at_end(node **head)
{
	node *p,*q,*new;
	new = (node *)malloc(sizeof(node));
	printf("Enter value to be added\n");
	scanf("%d",&new->data);
	p = *head;
	while(p->next!=NULL)
	{
		q = p;
		p = p->next;
		p->prev = q;
	}
	if(p->next==NULL)
	{
		p->next = new;
		new->prev = p;
		new->next = NULL;
	}
}

void del_at_beg(node **head)
{
	node *p;
	p = *head;
	*head = p->next;
	(*head)->prev = NULL;
	free(p);
}

void del_in_mid(node **head)
{
	node *p,*q,*r;
	int val;
	printf("Enter value to be deleted\n");
	scanf("%d",&val);
	p = *head;
	while(p->data!=val)
	{
		q = p;
		p = p->next;
		r = p->next;
		p->prev = q;
	}
	if(p->data==val)
	{
		q->next = r;
		r->prev = q;
		free(p);
	}
}

void del_at_end(node **head)
{
	node *p,*q;
	p = *head;
	while(p->next!=NULL)
	{
		q = p;
		p = p->next;
		p->prev = q;
	}
	if(p->next==NULL)
	{
		q->next = NULL;
		p->prev = NULL;
	}
}

int main()
{
	int a;
	while(1)
	{
		printf("1.Create 2.Display 3.Insert at beginning 4.Insert in middle 5.Insert at end 6.Delete at beginning 7.Delete in middle 8.Delete at end 9.Quit\n");
		scanf("%d",&a);
		switch(a)
		{
			case 1:head = create();
			break;
			case 2:display(head);
			break;
			case 3:insert_at_beg(&head);
			break;
			case 4:insert_in_mid(&head);
			break;
			case 5:insert_at_end(&head);
			break;
			case 6:del_at_beg(&head);
			break;
			case 7:del_in_mid(&head);
			break;
			case 8:del_at_end(&head);
			break;
			case 9:printf("Exit");
			return 0;
		}
	}
}