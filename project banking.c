#include<stdio.h>
//#include<string.h>

void create_ac();
void withdraw();
void deposit();
void bal_check();


char fn[20], ln[20], add[60], mn[10];

float amount, balance;

create_ac()
{

    printf("Please enter the following details\n");

    printf("First name: ");
    scanf("%s", &fn);

    printf("Last name: ");
    scanf("%s", &ln);

    printf("Mobile number: ");
    scanf("%s", &mn);

    printf("Address: ");
    scanf("%s", &add);
    printf("\nYour account has been created successfully with the details below.\nName: %s %s\nMobile number: %s\nAddress: %s\n\n", fn, ln, mn, add);

}

withdraw()
{
    printf("Please enter amount to be withdrawn\n");
    scanf("%f", &amount);
    if(amount <= balance)
    {
        printf("You have successfully withdrawn INR %f rupee(s) from your account\n", amount);
        balance = balance - amount;
        printf("You have INR %f rupee(s) balance in your account\n", balance);
    }
    else
    {
        printf("Insufficient balance in your account : %f Rupee(s)\n\n", balance);
    }
}

deposit()
{
    printf("Please enter amount you want to deposit in your account\n");
    scanf("%f", &amount);
    printf("You have successfully credited INR %f Rupee(s) in your account\n", amount);
    balance = balance + amount;
    printf("Your current account balanace is INR %f Rupee(s)\n\n", balance);
}

bal_check()
{
    printf("INR %f Rupee(s) available in your account\n\n", balance);
}

void main()
{
    int customer, choice, answer;
    do
{

    printf("\t\tWELCOME TO IBS BANK\n\n");

    printf("Existing customer?\nEnter 0\n\nNew customer?\nEnter 1\n\n");
    scanf("%d", &customer);

    if(customer == 1)
    {
        create_ac();
       // printf("\nYour account has been created successfully with the details below.\nName: %s %s\nMobile number: %s\nAddress: %s\n\n", fn, ln, mn, add);

    }
    else if(customer == 0)
    {
        printf("\n\nPlease enter your service number\n1) Withdraw Cash\n2) Deposit Cash\n3) Check Available Balance\n\n");
        scanf("%d", &choice);

        switch(choice)
        {
        case 1 :
            withdraw();
        break;

        case 2 :
            deposit();
        break;

        case 3 :
            bal_check();
        break;

        default :("Please enter the correct choice from 1 to 3\n\n");
        }
    }
        printf("\nDo you want to continue or Exit?\n1)To continue enter 1\n2)To exit enter 0\n\n");
        scanf("%d", &answer);
}
    while(answer != 0);
    printf("\n\n\n");
}
