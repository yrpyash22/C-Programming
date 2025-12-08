//                                Chapter 5

//                    ~~    FUNCTION AND RECURCTION  ~~

// [Example ]  Function writing steps.
/*#include<stdio.h>
void printhello();                 //  Declaration

int main()
{
    printhello();                 // Function call
    printhello();
    return 0;
}

void printhello()                //  Defination
{
    printf("Hello World\n");
}*/



// [Que 1] Write to function 1 is to print hello an 2 is print good bye.
/*#include<stdio.h>
void printhello();
void printgoodbye();

int main()
{
    printhello();
    printgoodbye();
    return 0;
}

void printhello()
{
    printf("Hello\n");
}
void printgoodbye()
{
    printf("Good Bye\n");
}*/



// [Que 2] Write a function that print Nameste if user is Indian and Banjour if the user is Franch.
/*#include<stdio.h>
void nameste();
void banjour();

int main()
{
    printf("Enter F for Franch & I for Indian : ");
    char ch;
    scanf("%c", &ch);
    if(ch == 'i'|| ch == 'I')
    {
        nameste();
    }
    else if(ch == 'f' || ch == 'F')
    {
        banjour();
    }
    else {
        printf("Not Exist language");
    }
    return 0;
}
void nameste()
{
    printf("Nameste");
}
void banjour()
{
    printf("Banjour");
}*/



// [Que 3]             PASSING ARGUMENT Example.

//                  [1] void helloworld();

                   //  Previous.......code.....

//                  [2]  void printtable(int n); 
/*#include<stdio.h>
void printtable(int n);

int main()
{
    int n;
    printf("Enter no. : ");
    scanf("%d", &n);

    printtable(n);
    return 0;
}

void printtable(int n)
{
    for(int i=1; i<=10; i++)
    {
        printf("%d\n", n*i);
    }
}*/

//                    [3]  int sum(int a, int b);
/*#include<stdio.h>
int sum(int a, int b);

int main()
{
    int a, b;
    printf("Enter value of a :");
    scanf("%d", &a);
    printf("Enter value of b :");
    scanf("%d", &b);
    
    sum(a, b);
    printf("Sum is :%d", sum(a, b));
    return 0;
}

int sum(int a, int b)
{
    return a+b;
}*/



// [Que 4] Use LIBRARY FUNCTION   < math.h >  to calculate the square of a number given by user.
/*#include<stdio.h>
#include<math.h>
int main()
{
    int x, n;
    printf("Enter value x :");
    scanf("%d", &x);
    printf("Enter power n :");
    scanf("%d", &n);
    printf("%f", pow(x , n));
    return 0;
}*/



// [Que 5] WAP to cal area of square a circle and rectangle.
/*#include<stdio.h>
#include<math.h>
int squarearea(int side);
int rectarea(int l, int b);
float circlearea(float rad);

int main()
{
    int side = 4;
    printf("Square area :%d\n", squarearea(side));
    squarearea(side);
    
    int l =10, b = 5;
    printf("Rectangle area :%d\n", rectarea(l, b));
    rectarea(l, b);

    float rad = 3;
    printf("Circle area :%f\n", circlearea(rad));
    circlearea(rad);
    return 0;
}
int squarearea(int side)
{
    return side*side;
}
int rectarea(int l, int b)
{
    return l * b;
}
float circlearea(float rad)
{
    return 3.14 * rad * rad;
}*/


//                                           {  RECURCATION  }  
// [Que 6] print Hello World 5 times.
/*#include<stdio.h>
void printhw(int count);

int main()
{
    printhw(5);
    return 0;
}
void printhw(int count)
{
    if (count == 0)
    {
        return;
    }
    printf("Hellow World\n");
    printhw(count-1);
}*/



// [Que 7] Sum of first n number .
/*#include<stdio.h>
int sum(int n);

int main()
{
    printf("Sum is : %d", sum(5));
    return 0;
}

int sum(int n)
{
    if(n == 1)
    {
        return 1;
    }
    int sumNm1 = sum(n-1);          // 5-1 = 4
    int sumN = sumNm1 + n;          // 4+5 = 9  now again with n-1= 4
}*/



// [Que 8] Factorial of n. 
/*#include<stdio.h>
int fact(int n);

int main()
{
    printf("Sum is : %d", fact(6));
    return 0;
}

int fact(int n)
{
    if(n == 0)
    {
        return 1;
    }
    int factNm1 = fact(n-1);          // 6-1 = 5
    int factN = factNm1 * n;          // 5 * 6 = 30  now again with n-1= 5
}*/



// [Que 9] Write a function to canvert CELSIUS to FAHRENHEIT.
/*#include<stdio.h>
float convertTemp(int celcius);

int main()
{
    int celcius;
    printf("Enter Celcius :");
    scanf("%d",&celcius);
    float far = convertTemp(celcius);
    printf("Fahrenheit : %f", far);
}

float convertTemp(int celcius)
{
    float far = (celcius * 1.8) + 32;
    return far;
}*/



// [Que 10] WAP to calculate percentage of a student from marks in Science, Maths and Physic.
/*#include<stdio.h>
float calcpercentage(int S, int M, int P);

int main()
{
    int S, M, P;
    printf("Enter Science number : ");
    scanf("%d",&S);
    printf("Enter Maths number : ");
    scanf("%d",&M);
    printf("Enter Physics number : ");
    scanf("%d",&P);
    printf("Percantage is : %f", calcpercentage(P,M,P));
    return 0;
}

float calcpercentage(int S, int M, int P)
{
    float percentage = (S + M + P) / 3;
    return percentage;
}*/



// [Que 11] WAF Of print n term of the FIBONACCI SEQUENCE.
#include<stdio.h>
int fib(int n);

int main()
{
    int n;
    printf("Term the value of n:");
    scanf("%d",&n);
    printf("The value of nth term is :%d", fib(n));
    return 0;
}

int fib(int n)
{
    if(n == 0)
    {
        return 0;
    }
    if(n == 1)
    {
        return 1;
    }
    int fibNm1 = fib(n-1);
    int fibNm2 = fib(n-2);
    int fibN = fibNm1 + fibNm2;
    return fibN;
}