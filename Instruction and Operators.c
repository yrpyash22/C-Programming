//                         Chapter 2
//                   Instruction and Operators

// Instruction
/*
1 Type Declearation 
2 Arithmetic 
    (a) +,-,*,/,%,^
    (b) Type Conversion [Implicit/Explicit]
    (c) operator precedence
    (d) Associativity
3 Control (next chapter)
*/

// Operators
/*
1 Arithematic operators
2 Relation operators
3 Logical operators
4 Bitwise operators
5 Assignment operators
6 Ternary operators
*/


// [Que 1] write a P. to check if a no. is divisible by 2 or not.
// [Que 2] write a P. to check even no or odd. 
/*#include<stdio.h>
int main()
{
    int x;
    printf("Enter a n. :");
    scanf("%d",&x);
    printf("%d\n", x % 2 == 0);    // if ans is 1 thne even
    return 0;                      // if ans is 0 thne odd
}*/



// [Que 3] write a P. to print the average of 3 no.
/*#include<stdio.h>
int main()
{
    float x,y,z;
    printf("Enter x = ");
    scanf("%f",&x);
    printf("Enter y = ");
    scanf("%f",&y);
    printf("Enter z = ");
    scanf("%f",&z);
    float average = (x+y+z)/3;
    printf("anerage of three value is : %f",average);
    return 0;
}*/



// [Que 4] Write a P> to check if given character is digits or not.
/*#include<stdio.h>
int main()
{
    char ch;
    printf("Enter a character : ");
    scanf("%c", &ch);
    if(ch >= '0' && ch <= '9' )
    {
        printf("The character is a Digit.\n");
    }
    else
    {
        printf("The character is not a digit.\n");

    }
    return 0;
}*/



// [Que 5] Write a P. to print the smallest no. of two.
#include<stdio.h>
int main()
{
    int No1, No2;
    printf("Enter no. 1 :");
    scanf("%d",&No1);
    printf("Enter no. 2 :");
    scanf("%d",&No2);
    if(No1 < No2)
    {
        printf("Smallest no is : %d",No1);
    }
    else{
        printf("Smallest no is : %d",No2);
    }
    return 0;
}
//                       END