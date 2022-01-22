#include <stdio.h>

int main(){
    int a, pin;
    char z='y', y='n';
    printf("Enter your pin\n");
    scanf("%d", &pin);
    if (pin==2022){
    do{printf("Hello! Welcome to our ATM Service\n");
    printf("1. Balance Checking\n");
    printf("2. Cash Withdrawal\n");
    printf("3. Cash Deposition\n");
    printf("4. Exit\n"); 
    printf("Plese proceed with your choice : ");
     scanf("%d", &a);
      if (a==1){
        printf("The account balance is RS 10,000\n");
      }
      else if (a==2){
             int amount;
            printf("Enter amount to be withdrawal: ");
            scanf("%d", &amount);
            if(amount%100==0){
              printf("you can now collect the case\n");
              printf("The current balnce is %d\n", 10000-amount);
            }
            else {
              printf("You are requested to enter money in multiple of 100\n");
              scanf("%d", &amount);
            }

      }
      else if (a==3){
        int depo;
        printf("Enter the amount to be deposite\n");
        scanf("%d", &depo);
        printf("Current balance is %d\n", 10000+depo);
      }
       if (a==4){
         printf("Thanks for Using our Service");
         break;
       }

      printf("Would you like to have another transaction? (y/n)\n");
      scanf(" %c", &y);  
    }while(z==y);
    }
    else{
      printf("You entered wrong pin ");
    }
      return 0;
}
  