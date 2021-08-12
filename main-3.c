#include <stdio.h>
#include <stdlib.h>

int main()
{
    int wish;
    int newpin;
    char userName;
    int errand;

    int day;
    int month;
    int year;
    int id;
    begin:
    printf("Good day !\n What do you wish to do today?\n ");
    printf("1.Access account\n 2.Create a new account \n 3.Leave bank ");
    scanf("%d", &errand);
    system("cls");

    if(errand == 1){
        goto start;}
        /*creating new account*/
        else if(errand == 2){

            printf("Enter a username of your choice : ");
            scanf("%s",&userName);
            system("cls");
            printf("Now enter a 4 number pin : ");
            scanf("%d", &newpin);
            system("cls");
            printf("Enter the card number for any of your valid national id : ");
            scanf("%d",&id);
           printf("Congratulations, you have just created a new account\n What do you wish to do now?\n 1.Carry out a transaction\n 2.Leave\n");
           scanf("%d",&wish);
           system("cls");
           }
           else if(errand == 3){
            goto ending;
           }
     if(wish == 1){
        goto start1;}
        else if(wish == 2){
            printf("Thank you for using our services\n");
goto ending;
        }



/*account in the system*/
   char user_1="Joshua";





int userpin;
if(errand == 1){
        start:
printf("Please enter your pin : ");
scanf("%d", &userpin);}




if(userpin=1234){
    printf("Welcome Joshua\n");
}



/*transactions*/
float withdraw;
float transfer;
float withdrawalamount;
float checkbalance;
int input;
start1:
printf("Press 1 to check balance.\n Press 2 to deposit cash.\n Press 3 to withdraw money.\n Press 4 to transfer money\n Press 5 to return to main menu\n");

scanf("%d", &input);
system("cls");
/*accountbalance*/
static float accountbalance_1=3000;

float accountbalance_2=500;

int answer;
if(userpin=1234){
switch(input){
case 1:printf("Your balance is %f", accountbalance_1);
break;

case 3:printf("How much do you wish to withdraw?\n");
        scanf("%f", &withdrawalamount);
        system("cls");
        if(withdrawalamount>accountbalance_1){
            printf("You do not have sufficient funds.");
        }
````````````````````````````````````````````````
 float ammountleft=accountbalance_1-withdrawalamount;
         if(withdrawalamount<accountbalance_1){
        printf("You have %f left \n", ammountleft);}
break;

case 2:printf("Enter the amount you wish to deposit. \n");
float deposit1;
scanf("%f",&deposit1);
system("cls");
float accountbalance_3=deposit1+accountbalance_1;
 printf("Your new balance is %f", accountbalance_3);
break;

float transferamount;
case 4:printf("Enter the amount you wish to transfer : ");
scanf("%f", &transferamount);
 if(transferamount>accountbalance_1){
            printf("You do not have sufficient funds.");}

  float amountaftertransaction=accountbalance_1-transferamount;
   printf("You have %f left \n", amountaftertransaction );

break;

case 5:goto begin;
system("cls");
break;

}}




        printf("\n Do you want to initialize another transaction?\n");
        scanf("%d", &answer);
        system("cls");
        if(answer == 1){
            goto start1;
        }else if(answer == 2){
        printf("Thank you for using our services");
        }
        else{printf("You did not enter a valid answer");}

if (userpin != 1234) {

switch(input){
case 1:printf("Your balance is %f", accountbalance_2);
break;

case 3:
    printf("You must deposit some money first");


case 2:

    printf("Enter the amount you wish to deposit. \n");
    float deposit2;
scanf("%f",&deposit2);
float accountbalance_4=accountbalance_2 + deposit2;
printf("Your balance is now %f",accountbalance_4);

break;

float transferamount;
case 4:printf("Enter the amount you wish to transfer : ");
scanf("%f", &transferamount);
system("cls");
float amountleft=accountbalance_2-withdrawalamount;
            if(transferamount>accountbalance_2){
            printf("You do not have sufficient funds.");}
  float amountaftertransaction=accountbalance_2-transferamount;
   printf("You have %f left \n", amountaftertransaction );

break;
case 5:goto begin;
system("cls");
break;

}
}
        printf("\n Do you want to initialize another transaction?\n");
        scanf("%d", &answer);
        system("cls");
        if(answer == 1){
            goto start1;
        }else if(answer == 2){
        printf("Thank you for using our services");

        }
        else{printf("You did not enter a valid answer");}

ending:
    printf("\nGoodbye");


}
