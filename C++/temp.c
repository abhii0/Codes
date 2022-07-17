#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

struct library
{
    char bk_name[60];
    char author[60];
    int pages;
    float price;

};

int main()
{
	FILE *fptr;
    system("color B4");
    struct library l[100];
    //predefining the value//
    char ar_nm[30], bk_nm[30];
    int i, j, keepcount;
    j = keepcount = 0;
    int x;
        printf("\n\t\t\t  ##########################################################");
        printf("\n\t\t\t        *********************************************");
        printf("\n\t\t\t        =                 WELCOME                   =");
        printf("\n\t\t\t        =                   TO                      =");
        printf("\n\t\t\t        =                 LIBRARY                   =");
        printf("\n\t\t\t        =               MANAGEMENT                  =");
        printf("\n\t\t\t        =                 SYSTEM                    =");
        printf("\n\t\t\t        *********************************************");
        printf("\n\t\t\t   ##########################################################\n");
        //\t is to escape sequences//


    while (j != 7)
    {
        printf("\n\t\t\t\t\t**********MAIN MENU**********\n");
        printf("\n\n1. Enter book information you want to add!\n");
        printf("2. Display book information!\n");
        printf("3. List of all books by author!\n");
        printf("4. List the title of specified books!\n");
        printf("5. List the count of books in the library!\n");
        printf("6. Out of the box!\n");
        printf("7. Exit!");

        getch();
        printf("\n\nSelect the option from the above : ");
        scanf("%d", &j);
        switch (j)
        {

        case 1:
       fptr = fopen("data.txt","w");

            printf("Enter book name = ");
            scanf("%s",l[i].bk_name);

            printf("Enter author name = ");
            scanf("%s",l[i].author);

            printf("Enter pages = ");
            scanf("%d",&l[i].pages);

            printf("Enter price = ");
            scanf("%f",&l[i].price);
            fwrite(&l[i], sizeof(struct library), 1, fptr);
            keepcount++;
            i++;

            break;
        case 2:
        	fptr = fopen("data.txt","w");
            printf("you have entered the following information\n");
            printf("*************A room without books is like a body without a soul************* ");
            for (i = 0; i < keepcount; i++)
            {
            	fwrite(&l[i], sizeof(struct library), 1, fptr);
                printf("\n Book name = %s", l[i].bk_name);

                printf("\t Author name = %s", l[i].author);

                printf("\t Pages = %d", l[i].pages);

                printf("\t Price = %f", l[i].price);
            }
            break;

        case 3:
        	fptr = fopen("data.txt","r");
            printf("Enter author name : ");
            scanf("%s", ar_nm);
            for (i = 0; i < keepcount; i++)
            {
            	fread(&l[i], sizeof(struct library), 1, fptr);
                if (strcmp(ar_nm, l[i].author) == 0)
                    //comparing the string//
                    printf("%s %s %d %f", l[i].bk_name, l[i].author, l[i].pages, l[i].price);
            }
            break;

        case 4:
        	fptr = fopen("data.txt","r");
            printf("Enter book name : ");
            scanf("%s", bk_nm);
            for (i = 0; i < keepcount; i++)
            {
           	fread(&l[i], sizeof(struct library), 1, fptr);
                if (strcmp(bk_nm, l[i].bk_name) == 0)
                    printf("%s \t %s \t %d \t %f", l[i].bk_name, l[i].author, l[i].pages, l[i].price);
            }

            break;

        case 5:
            printf("\n No of books in library : %d", keepcount);
            break;
        case 6:

            srand(time(0));
            x = rand() % 12;

                switch (x)
                {
                case 0:
                    printf("I love the gentle kind of Sadness that reminds me I can feel.\n\n");
                    break;
                case 1:
                    printf("When dealing with people, let us remember we are not dealing with creatures of logic. We are dealing with creatures of emotion, creatures bristling with prejudices and motivated by pride and vanity.\n\n");
                    break;
                case 2:
                    printf("I will speak ill of no man, and speak all the good I know of everybody.\n\n");
                    break;
                case 3:
                    printf("God himself, sir, does not propose to judge man until the end of his days. Why should you and I?\n\n");
                    break;
                case 4:
                    printf("Smiles are Contagious.\n\n");
                    break;
                case 5:
                    printf("Mental Pain is less dramatic than physical pain, but it is more common and also more hard to bear. The frequent attempt to conceal mental pain increases the burden. It is easier to say “My tooth is Aching” than to say “My Heart is Broken”.\n\n");
                    break;
                case 6:
                    printf("Pain Demands to be felt\n\n");
                    break;
                case 7:
                    printf("Most people deal with only the black and white aspects of life; but real living happens in the Gray area.\n\n");
                    break;
                case 8:
                    printf("When we strive to become better than we are, everything around us becomes better too.\n\n");
                    break;
                case 9:
                    printf("I, a Universe of Atoms, is only an Atom in the Universe.\n\n");
                    break;
                case 10:
                    printf("Happiness is When you stop thinking about the “What-ifs”.\n\n");
                    break;
                case 11:
                    printf("Breathe. Just breathe. You’ll never live this moment again.\n\n");
                    break;
                case 12:
                    printf("Kindness today is an act of rebellion.\n\n");
                    break;
                }
                break;

            case 7:
            {
                exit(0);
            }
            default:
            {
                printf("Test");
            }
        }
fclose(fptr);
    }

        return 0;

}
