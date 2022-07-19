#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

#define RED "\x1b[31m"
#define GREEN "\x1b[32m"
#define YELLOW "\x1b[33m"
#define BLUE "\x1b[34m"
#define MAGENTA "\x1b[35m"
#define CYAN "\x1b[36m"
#define RESET "\x1b[0m"

struct library
{
char bk_name[60];
char author[60];
int pages;
float price;
};

int main()

{

struct library l[100];
//predefining the value//
char ar_nm[30],bk_nm[30];
int i,j, keepcount;
i=j=keepcount = 0;
 {
    
printf(RED "\n\t\t\t  ########################################################## "RED);
    printf(GREEN "\n\t\t\t        =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=" GREEN);
    printf(RESET);
    printf("\n\t\t\t        =                 WELCOME                   =");
    printf("\n\t\t\t        =                   TO                      =");
    printf("\n\t\t\t        =                 LIBRARY                   =");
    printf("\n\t\t\t        =               MANAGEMENT                  =");
    printf("\n\t\t\t        =                 SYSTEM                    =");
    printf("\n\t\t\t        =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
    printf("\n\t\t\t   ##########################################################\n");
    //\t is to escape sequences//

 }



while(j!=6)
{
    printf("\n**MAIN MENU**\n");
printf("\n\n1. Add book information!\n");
printf("2. Display book information!\n");
printf("3. List all books of given author!\n");
printf("4. List the title of specified book!\n");
printf("5. List the count of books in the library!\n");
printf("6. Lets call it a day!");
getch();
printf ("\n\nSelect the option from the above : ");
scanf("%d",&j);

switch (j)
{

case 1:

printf ("Enter book name = ");
scanf ("%s",l[i].bk_name);

printf ("Enter author name = ");
scanf ("%s",l[i].author);

printf ("Enter pages = ");
scanf ("%d",&l[i].pages);

printf ("Enter price = ");
scanf ("%f",&l[i].price);
keepcount++;
break;
case 2:
printf("you have entered the following information\n");
 printf("**A room without books is like a body without a soul** ");
for(i=0; i<keepcount; i++)
{
printf ("\n Book name = %s",l[i].bk_name);

printf ("\t Author name = %s",l[i].author);

printf ("\t Pages = %d",l[i].pages);

printf ("\t Price = %f",l[i].price);
}
break;

case 3:
printf ("Enter author name : ");
scanf ("%s",ar_nm);
for (i=0; i<keepcount; i++)
{
if (strcmp(ar_nm, l[i].author) == 0)
//compairing the string//
printf ("%s %s %d %f",l[i].bk_name,l[i].author,l[i].pages,l[i].price);
}
break;

case 4:
printf ("Enter book name : ");
scanf ("%s",bk_nm);
for (i=0; i<keepcount; i++)
{
if (strcmp(bk_nm, l[i].bk_name) == 0)
printf ("%s \t %s \t %d \t %f",l[i].bk_name,l[i].author,l[i].pages,l[i].price);
}
break;

case 5:
printf("\n No of books in library : %d", keepcount);
break;
case 6:
exit (0);

}
}
return 0;

}
