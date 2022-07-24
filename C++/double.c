#include<stdio.h>
#include<stdlib.h>

struct info
{
	int data;
	struct info *next;
};

typedef struct info node;

node *head = NULL;

node *create()
{
	int i,n;
	node *p,*head;
	printf("Enter no of elements\n");
	scanf("%d",&n);
	printf("Enter elements\n");
	for(i = 0;i<n;i++)
	{
		if(i==0)
		{
			head = (node *)malloc(sizeof(node));
			p = head;
		}
		else
		{
			p->next = (node *)malloc(sizeof(node));
			p = p->next;
		}
		scanf("%d",&p->data);
	}
	p->next = head;
	return head;
}

void display(node *head)
{
	node *p;
	int count = 1;
	p = head;
	printf("Node : %d Data : %d\n",count,p->data);
	count++;
	p = p->next;
	while(p!=head)
	{
		printf("Node : %d Data : %d\n",count,p->data);
		count++;
		p = p->next;
	}
}

void insert_at_beg(node **head)
{
	node *p,*new,*q;
	new = (node *)malloc(sizeof(node));
	printf("Enter value to be added\n");
	scanf("%d",&new->data);
	new->next = NULL;
	p = *head;
	while(p->next!=*head)
	{
		p = p->next;
	}
	new->next = *head;
	p->next = new;
	*head = new;
}

void insert_in_mid(node **head)
{
	node *p,*q,*new;
	int pos;
	new = (node *)malloc(sizeof(node));
	printf("Enter value to be added\n");
	scanf("%d",&new->data);
	printf("Add before\n");
	scanf("%d",&pos);
	p = *head;
	p = p->next;
	while(p->data!=pos)
	{
		q = p;
		p = p->next;
	}
	if(p->data==pos)
	{
		q->next = new;
		new->next = p;
	}
}

void insert_at_end(node **head)
{
	node *p,*q,*new;
	new = (node *)malloc(sizeof(node));
	printf("Enter value to be added\n");
	scanf("%d",&new->data);
	p = *head;
	p = p->next;
	while(p!=*head)
	{
		q = p;
		p = p->next;
	}
	if(p==*head)
	{
		q->next = new;
		new->next = *head;
	}
}

void del_at_beg(node **head)
{
	node *p;
	p = *head;
	while(p->next!=*head)
	{
		p = p->next;
	}
	p->next = (*head)->next;
	free(*head);
	*head = p->next;
}

void del_in_mid(node **head)
{
	node *p,*q;
	int ele;
	printf("Enter value to be deleted\n");
	scanf("%d",&ele);
	p = *head;
	while(p->data!=ele)
	{
		q = p;
		p = p->next;
	}
	if(p->data==ele)
	{
		q->next = p->next;
		free(p);
	}
	else
	{
		printf("Element not in list\n");
	}
}

void del_at_end(node **head)
{
	node *p,*q;
	p = *head;
	p = p->next;
	while(p->next!=*head)
	{
		q = p;
		p = p->next;
	}
	if(p->next==*head)
	{
		q->next = *head;
		free(p);
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
			case 2: display(head);
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