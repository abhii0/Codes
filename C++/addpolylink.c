#include<stdio.h>
#include<stdlib.h>

struct info
{
	int coef;
	int pow;
	struct info *next;
};

typedef struct info node;

node *h1,*h2, *h3;

int deg;

node *create(node *head)
{
	int i,n;
	node *p;
	printf("Enter degree\n");
	scanf("%d",&n);
	deg = n;
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
		scanf("%d %d",&p->coef,&p->pow);
	}
	p->next = NULL;
	return head;
}

void display(node *head)
{
	node *p;
	int count = 1;
	p = head;
	printf("Expression : ");
	while(p!=NULL)
	{
		printf("%d x^%d ",p->coef,p->pow);
		p = p->next;
		if(p!=NULL)
		{
			printf("+ ");
		}
	}
	printf("\n");
}

void add(node **h1,node **h2)
{
	h3 = (node *)malloc(sizeof(node));
	int i;
	node *p,*q,*r,*prev;
	p = *h1;
	q = *h2;
	r = h3;
	while((p!=NULL)&&(q!=NULL))
	{
		if((p->pow)==(q->pow))
		{
			r->coef = p->coef + q->coef;
			r->pow = p->pow;
			p = p->next;
			q = q->next;
		}
		r->next = (node *)malloc(sizeof(node));
		prev = r;
		r = r->next;
	}
	prev->next = NULL;
	display(h3);
}

int main()
{
	int a;
	while(1)
	{
		printf("1.Create first polynomial 2.Create second polynomial 3.Display first polynomial 4.Display second polynomial 5.Add polynomials 6.Quit\n");
		scanf("%d",&a);
		switch(a)
		{
			case 1: h1 = create(h1);
			break;
			case 2: h2 = create(h2);
			break;
			case 3: display(h1);
			break;
			case 4: display(h2);
			break;
			case 5: add(&h1,&h2);
			break;
			case 6:printf("Bye");
			return 0;
		}
	}
	return 0;
}