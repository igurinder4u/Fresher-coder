#include<stdio.h>
int welcome();
int menu();
int main();
int a;
int choice();

int welcome()
{
    int b;
    printf("\n\n\n");
    printf("\t\t\t\t\t\t\t          ***********************************\n");
    printf("\t\t\t\t\t\t\t          **    WelcomE                    **\n");
    printf("\t\t\t\t\t\t\t          **             To                **\n");
    printf("\t\t\t\t\t\t\t          **                 Pizza Hut     **\n");
    printf("\t\t\t\t\t\t\t          ***********************************\n");
    printf("\n\n\n\t\t\t\t\t\t\t\t Please press 1 for Menu or 2 to EXIT : ");
    scanf("%d",&b);
    if(b==1)
    {
        menu();
    }
    else if (b==2) {
        printf("Exiting.......\nBye-BYe...");
    }
    else{
        printf("Invalid choice\nPlease select orrect choice:\n");
        welcome();
     
    }
    }
int menu()
{
	system("cls");
    printf("\n\n\n");
    printf("\t\t\t\t\t\t\t        ***********************************\n");
    printf("\t\t\t\t\t\t\t        ** Code     Item       Price     **\n");
    printf("\t\t\t\t\t\t\t        **-------------------------------**\n");
    printf("\t\t\t\t\t\t\t        **  01      Pizza      120       **\n");
    printf("\t\t\t\t\t\t\t        **  02      Coffee     90        **\n");
    printf("\t\t\t\t\t\t\t        **  03      Burger     70        **\n");
    printf("\t\t\t\t\t\t\t        **  04      Sandvich   50        **\n");
    printf("\t\t\t\t\t\t\t        **  05      Coke       20        **\n");
    printf("\t\t\t\t\t\t\t        ***********************************\n");
    choice();
}
int choice()
{  
    int c,d;
    printf("\n\n\t\t\t\t\t\t\tPlease enter code of the food item you want to order :");
    printf("\n\n\n\t\t\t\t\t\t\tPlease enter your choice : ");
    scanf("%d",&c);
    if(c==01 || c==1)
    {
        a+=120;
        printf("\n\n\t\t\t\t\t\t\tYou Ordered Pizza which is of 120rs");
        printf("\n\n\t\t\t\t\t\t\tDo you want to order more or want bill ? \n\n\t\t\t\t\t\t\tPress 1 to order more or 2 to Bill : ");
        scanf("%d",&d);
        if(d==1)
        {
            menu();
        }
        else if (d==2){
            printf("\n\n\n\t\t\t\t\t\t\tYour total bill is %drs",a);
        }
        else {
            printf("\n\n\t\t\t\t\t\t\t X-X-X-invalid choice-X-X-X");
        }
    }
    else if (c==02 || c==2)
    {
        a+=90;
        printf("\n\n\t\t\t\t\t\t\tYou have selected Coffee which is of 90rs");
        printf("\n\n\t\t\t\t\t\t\tDo you want to order more or want bill ? \n\n\t\t\t\t\t\t\tPress 1 to order more or 2 to Bill : ");
        scanf("%d",&d);
        if(d==1)
        {
            menu();
        }
        else if (d==2){
            printf("\n\n\t\t\t\t\t\t\tYour total bill is %drs",a);
        }
        else {
            printf("\n\n\t\t\t\t\t\tX-X-X-invalid choice-X-X-X");
        }
    }
 else if (c==03 || c==3)
    {
        a+=70;
        printf("\n\n\t\t\t\t\t\t\t You have selected Burger which is of 70rs");
        printf("\n\n\t\t\t\t\t\t\tDo you want to order more or want bill ? \n\n\t\t\t\t\t\t\Press 1 to order more or 2 to Bill : ");
        scanf("%d",&d);
        if(d==1)
        {
            menu();
        }
        else if(d==2){
            printf("\n\n\t\t\t\t\t\t\Your total bill is %drs",a);
        }
        else {
            printf("\t\t\t\t\t\t\ X-X-X invalid choice-X-X-X");
        }
    }
     else if (c==04 || c==4)
    {
        a+=50;
        printf("\n\n\t\t\t\t\t\t\t You have ordered Sandvich which is of 50rs");
        printf("\n\n\t\t\t\t\t\t\tDo you want to order more or want bill ? \n\n\t\t\t\t\t\t\tPress 1 to order more or 2 to Bill : ");
        scanf("%d",&d);
        if(d==1)
        {
            menu();
        }
        else if(d==2){
            printf("\n\n\t\t\t\t\t\t\tYour total bill i %ds rs",a);
        }
        else {
            printf("\t\t\t\t\t\t\t X-X-X-Invalid choice-X-X-X");
        }
    }
    else if (c==05 || c==5)
    {
        a+=20;
        printf("\n\n\t\t\t\t\t\t\tYou have Ordered Coke which is of 20rs");
        printf("\n\n\t\t\t\t\t\t\tDo you want to order more or want bill ? \n\n\t\t\t\t\t\t\tPress 1 to order more or 2 to Bill :");
        scanf("%d",&d);
        if(d==1)
        {
            menu();
        }
        else if(d==2)
        {
            printf("\n\n\t\t\t\t\t\t\tYour total bill is %drs",a);
        }
        else {
            printf("\n\n\t\t\t\t\t\t\tX-X-X-invalid choice-X-X-X");
        }
    }
    else 
    {
        printf("\n\nInvalid choice\n Please enter proper code of the food item you want to order\n");
        //menu();
    }
    }

int main()
{
	system("color F5");
    welcome();
    
    return 0;
}


