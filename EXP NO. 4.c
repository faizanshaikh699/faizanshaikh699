#include<stdio.h>

 //Declare a function to check if a number is prime...

 int isprime(int x)
 {
 for (int i = 2; i < x; i++)
 {
 if (x % i == 0)
 {
     return 0;
   }
 }
     return 1;

 }

 int main ()
 {
     //Declaring the variable..

     int num1, num2;

   //Taking inpur from user ..

 printf("Enter Two Number : ");
 scanf("%d %d", &num1, &num2);
 printf("The Prime Number between %d and %d are : ", num1, num2);


 //Calling function

 for (int i = num1; i <= num2; i++)
 {
 if (isprime(i) == 1)
 {
        printf("%d ", i);
     }
 }

    return 0;
 }
