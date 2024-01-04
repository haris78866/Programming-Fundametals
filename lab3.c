#include<stdio.h>
int main()
{
float account_balance,depositamount,withdrawamount;
printf("Enter account balance in $");
scanf("%f",&accountbalance);
printf("Enter deposit  amount in $");
scanf("%f",&depositamount);

accountbalance += depositamount;
printf("curent balance is %f $\n",accountbalance );

printf("Enter withdraw amount in $");
scanf("%f",&withdrawamount);
accountbalance-= withdrawamount;

printf("account balance is %.1f $ ",accountbalance);
return 0;
}

