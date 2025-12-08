//                                    Chapter 4
//                         ~~  LOOP CONTROL INSTRUCTIONS ~~


// [Que 1] print the number 0 to n If n is given by user 
/*#include<stdio.h>
int main()
{
    int n;
    printf("Enter number :");                          // {  While   }
    scanf("%d", &n); 
      //     {   For   }
    for(int i = 1; i <= n; i++ )               //  int i=0;
    {                                          //  while( i<= n)
        printf("Number is : %d\n",i);         //   {
    }                                         //      printf("Number is : %d\n",i);
} */                                            //    i++;  }



// [Que 2] Print the sum of First n Natural no .
//           ( For multiple condation. )
/*#include<stdio.h>
int main()
{
    int n;
    printf("Enter no. : ");
    scanf("%d", &n);
    int sum = 0;
    int j;
    int i=1;

    for( j=n ; i<=n && j>=1; i++, j--)
    {
        sum = sum + i;
        printf("%d\n", j);
    }
    printf("Sum is : %d\n", sum);
    return 0;
}*/



// [Que 3] Print the table of a number input by the user.
/*#include<stdio.h>
int main()
{
    int n;
    printf("Enter no. :");
    scanf("%d",&n);
    for(int i = 1 ;i <=10; i++ )
    {
        printf(" %d\n", i*n);
    }
}*/



// [Que 4]                    Break statement in loop. 
/*#include<stdio.h>
int main()
{
    for(int i = 1; i<= 10 ; i++ )
    {
        if(i == 5)
        {
            break;                //  stop loop 
        }
        printf("%d\n",i);
    }
    printf("End");
}*/



// [Que 5] Keep talking number as input from user until user enter an odd number.
//  { Do while loop is confortable for this que }
/*#include<stdio.h>
int main()
{
       int n;
    do{
        printf("Enter no :");
        scanf("%d ", &n);
        printf("%d\n",n);

        if(n % 2 != 0 )        // odd no the break statement.
        {
            break;
        }
    }
   while (1);
        printf(" Welcome "); 
}*/



// [Que 6] Keep talking no as input from user until user enter a no which is multiple of 7.
/*#include<stdio.h>
int main()
{
    int n;
    do{
        printf("Enter a no. :");
        scanf("%d", &n);
        printf("%d\n", n);
        if (n % 7 == 0)        // no is multiple of 7
        {
            break;
        }
    }
    while(1);
    printf(" Thank you");
}/*



// [Que 7] print all no. from 0 to 10 except 6.
//   (Ex )   continue; statement. 
/*#include<stdio.h>
int main()
{
    for(int i = 0; i<= 10; i++)
    {
        if( i == 6)
        {
            continue;
        }
        printf("%d\n", i);
    }
}*/



// [Que 8] Print all odd no. from 5 to 50.
/*#include<stdio.h>
int main()
{
    for(int i= 0; i<= 50 ; i++ )
    {
        if(i % 2 != 0 )                 
        {
            printf("%d \n", i);
        }
    }
}*/
                                 /*#include<stdio.h>
int main()
{
    for(int i= 0; i<= 50 ; i++ )
    {
        if(i % 2 == 0 )                 
        {
            continue;
        }
        printf("%d \n", i);
    }
}*/



// [Que 9] Print factariol of a number n.
/*#include<stdio.h>
int main()
{
    int n;
    printf("Enter no : ");
    scanf("%d", &n);
    int fact = 1;
    for( int i = 1; i<= n ; i++)
    {
        fact = fact * i;
    }
    printf("%d \n", fact);
}*/



// [Que 10] print reverce of table for a number.
/*#include<stdio.h>
int main()
{
    int n;
    printf(" Enter no :");
    scanf("%d ",&n);
    for(int i = 10 ; i>= 1 ; i--)
    {
        printf("%d \n", i * n);
    }
}*/



// [Que 11] Calculate the sum of all no b/w 5 to 50.
/*#include<stdio.h>
int main()
{
    int n;
    printf("Enter no. : ");
    scanf("%d", &n);
    int sum = 0;
    for(int i = 0; i<= n ; i++)
    {
        sum = sum + i;
    }
    printf("Sum of all value is : %d\n", sum);
}*/



// [Que 12] 
//               [a]
/*#include<stdio.h>
int main()
{
    int raws = 4;
    int columns = 5;
    
    for(int i = 0; i < raws ; i++)
    {
        for(int j = 0; j < columns; j++)
        {
            printf("*");
        }
        printf("\n");          //  Move to next line after printing each row
    }
    return 0;
}*/



//                 [b]
/*#include<stdio.h>
int main()
{
    int raws = 10;

    for(int i = 1; i<= raws; ++i)
    {
        for( int space = 1; space <= raws-i ; ++space)
        {
            printf("   ");
        }

        for(int j =0; j<2*i-1; ++j)
        {
            printf("[*]");
        }
        printf("\n");
    }
    return 0;
}*/



// [Que H2] Write a program to cheak if a number is prime or not.
/*#include<stdio.h>
int primeno(int n);
int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    if(primeno(n))
    {
        printf("%d is a prime number .\n", n);
    }
    else{
        printf("%d is not prime number \n", n);
    }

}
int primeno(int n)
{
    if(n <= 1)
    {
        return 0;  // 0 and 1 are not prime number
    }
    for(int i = 2 ; i * 1 <= n; i++)
    {
        if(n % i == 0)
        {
            return 0;  // if divisible by any number other then 1 and itself its not prime.
        }
        return 1;   //  if no factor found its prime  isn prime number.
    }
}*/




// [Que H3] Write a program to print prime number in a range.
#include<stdio.h>
int primeno(int n);
void primenoInrange(int start, int end);
int main()
{
    int start, end;
    printf("Enter the Range (Start - End) : ");
    scanf("%d %d", &start, &end);
    primenoInrange(start , end);
    return 0; 
}

int primeno(int n)
{
    if(n <= 1)
    {
        return 0;  // 0 and 1 are not prime number
    }
    for(int i = 2 ; i * 1 <= n; i++)
    {
        if(n % i == 0)
        {
            return 0;  // if divisible by any number other then 1 and itself its not prime.
        }
        return 1;   //  if no factor found its prime  isn prime number.
    }
}
void primenoInrange(int start, int end)
{
    printf("Prime Number between %d and %d are \n", start, end);
    for(int i = start; i <= end ; i++)
    {
        if(primeno(i))
        {
            printf("%d \n", i);
        }
    }
}