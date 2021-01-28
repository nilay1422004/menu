#include <stdio.h>
int main ()
{
int ch;
printf("1.pizza-rs239\n 2.burger-rs129\n 3.pasta-rs179\n 4.french fries-rs99\n 5.sandwich-rs149");

printf("\n Enter your choice number from the  follwing : ");

scanf("%d", &ch);

switch (ch)
{
case 1:printf("\n food item-pizza \n price-rs239", ch);

break;
case 2:printf("\n food item-burger \n price-rs129", ch);

break;
case 3:printf("\n food item-pasta \n price-rs179", ch);

break;
case 4:printf("\n food item-french fries \n price-rs99", ch);

break;
case 5:printf("\n food item-sandwich \n price-rs149", ch);

break;
default: printf("%d invalid input", ch);
}
return 0;
}
