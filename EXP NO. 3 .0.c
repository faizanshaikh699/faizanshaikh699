

  /* Expt no: 3
Title  : WAP to design a menu driven calculator using switch and goto.
NAME : SHAIKH FAIZAN
UIN : 241P114
ROLL NO. 45
DIV : D         */

#include <stdio.h>
int main(){
      //variables-two floats and one char
             float numl , num2 , result;
      char operation;
       //Title
     printf("\t***My Calculator***\n\n");

     //Displaying the operations info
     printf("+  : Addition\n");
      printf(" —  :  Subtraction\n");
      printf("* : multiplication\n");
       printf("/  : Divison\n");
     printf("%%  : Modulus\n");
     printf("@    Exit\n\n\n");
       //Asking input from the user
       start:
       printf("Enter Your 1st Number:");
       scanf("%f",&numl);
       printf("Enter Your 2nd Number:"),
        scanf ("%f" ,&num2);
       printf("Enter The Operation:");
       scanf(" %c", &operation);

      //conditions using switch operation
       switch(operation){
       case '+': result= numl + num2;
       printf("%.1f + %.1f   %.lf\n\n", numl, num2,result);
     break;

      case '—' : result= numl - num2;
      printf("%.lf — %.1f = %.1f\n\n",   numl, num2, result);
      break;

       case '*': result= numl * num2;
       printf("%.lf * %.lf = %.lf\n\n", numl, num2, result);
       break;

      case '/' : result= numl / num2;
       printf("%.lf / %.1f = %.1f\n\n", numl, num2, result);
       break;

      case '%' :
          printf("%d mod %d = %d\n\n", (int)num2, (int)num2, (int)num2 % (int)result);
      break;

      case '@' :
    printf("Thank you for using\n");
       return 0;
            default: printf("Please Enter Valid Operation\n");
       }
         printf("Do You Want To Continue y/n\n");
                    scanf("%c", &operation);
       if (operation == 'n'){
         printf("Thank you for using\n");
       }
       else {
        goto start ;
       }

       return 0;
       }

        /* ***My Calculator***

+  : Addition
 ù  :  Subtraction
* : multiplication
/  : Divison
%  : Modulus
@    Exit


Enter Your 1st Number:23
Enter Your 2nd Number:45
Enter The Operation:+
23.0 + 45.0   68

Do You Want To Continue y/n
Enter Your 1st Number:56
Enter Your 2nd Number:98
Enter The Operation:/
56 / 98.0 = 0.6

Do You Want To Continue y/n
Enter Your 1st Number:45
Enter Your 2nd Number:56
Enter The Operation:*
45 * 56 = 2520

Do You Want To Continue y/n
Enter Your 1st Number:45
Enter Your 2nd Number:98
Enter The Operation:@
Thank you for using

Process returned 0 (0x0)   execution time : 45.192 s
Press any key to continue. */

