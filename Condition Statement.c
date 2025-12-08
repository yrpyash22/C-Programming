//                                    Chapter - 3
//                              ~~ CONDITION STATEMENT ~~

// [Que 1] EXample of conditions.

//                  [1]  if - else 
/*#include<stdio.h>
int main()
{
    int age;
    printf("Enter age : ");
    scanf("%d", &age);
    if(age >= 18)
    {
        printf("Valid for driving ");
    }
    else{
        printf("Invalid for driving");
    }
}*/



//                    [2]    if - else - if
/*#include<stdio.h>
int main()
{
    int marks;
    printf("Enter marks :");
    scanf("%d", &marks);
    if(marks == 100)
    {
        printf("Ultra Legend");
    }
    else if(marks >= 80 && marks < 100)
    {
        printf("Back Banchers");
    }
    else if(marks >= 33 && marks < 80)
    {
        printf("First Banchers ");
    }
    else
    {
        printf("fail");
    }
}*/



//                       [3]  Nested if - else
/*#include<stdio.h>
int main()
{
    int a = 10, b = 20, c =30;
    if (a>b)
    {
        if (a>c)
        {
            printf("%d", a);
        }
        else{
            printf("%d", c);
        }
    }
    else
    {
        if(b>c)
        {
            printf("%d", b);
        }
        else{
            printf("%d", c);
        }
    }
}*/



//                     [4]  Ternary operator  { ?  ,  :  }
/*#include<stdio.h>
int main()
{
    int n;
    printf("Enter value :");
    scanf("%d", &n);
    n % 2 == 0 ? printf("Even value") : printf("Odd value");
}*/



//                     [5]  Switch Operator   {  switch(),  case ci:pf(  )   break;    defalt: for End    }
/*#include<stdio.h>
int main()
{
    int day;
    printf("Enter day (1-7) : ");
    scanf("%d", &day);
    switch (day)
    {
        case 1: printf("Monday");
        break;
        case 2: printf("Tuesday");
        break;
        case 3: printf("Wednesday");
        break;
        case 4: printf("Thursday");
        break;
        case 5: printf("Friday");
        break;
        case 6: printf("Saturday");
        break;
        case 7: printf("Sunday");
        break;
        default: printf("Invalid value "); 
    }
}*/



// [Que 1] Write a given gread to a student marks.
/*#include<stdio.h>
int main()
{
    int marks;
    printf(" Enter Marks : ");
    scanf("%d", &marks);
    if(marks < 33)
    {
        printf("C\n");
    }
    else if(marks >=30 && marks <= 70)
    {
        printf("B");
    }
    else if(marks >= 70 && marks <= 90)
    {
        printf("A");
    }
    else {
        printf("A+");
    }
}*/



// [Que 2] W. R. P. to find if a character enter by user is upper case or not.
/*#include<stdio.h>
int main()
{
    char ch;
    printf("Enter character : ");
    scanf("%c", &ch);
    if( ch >= 'A'  &&  ch <= 'Z')
    {
        printf("Upper case characters ");
    }
    else if( ch >= 'a'  &&  ch <= 'z')
    {
        printf("Lawer case characters ");
    }
    else {
        printf("Maths characters ");
    }
}*/



// [Que 3] WAP to check if a given no. is ARMSTRONG No. or not.
//  Armstrong no.? ={ input 153 is a Armstrong no.}
//  Because in this no.= {1*1*1 + 5*5*5 + 3*3*3 = 153 } [valid]           
/*#include<stdio.h>
int main()
{
    int n, OrignalNo, remender, result = 0;
    printf("Enter a three Digit integer : ");            // n =  153
    scanf("%d", &n);
    OrignalNo = n;                                       // OrignalNo = n = 153
    while(n>0)                                           //  153  > 0 ,   15 > 0 ,   1 > 0
    {
        remender = n % 10;                                   //  remender = 153 % 10 = 3    // n = 15
        result = (remender*remender*remender) + result;      //  result = 3*3*3 = (27) + 0 = 27 
        n = n/10;                                            //  n = 15 , 1 , 0 
    }                                                       //   --> Now again this process. 
    if(OrignalNo == result)
    {
        printf("Armstrong No.");
    }
    else{
        printf("Not Armstrong no");
    }

}*/



// [Que 4] WAP to check if the given no. is a natural no. 
#include<stdio.h>
int main()
{
    int n;
    printf("Enter a no. :");
    scanf("%d", &n);
    if(n > 0)
    {
        printf("Natural no. ");
    }
    else{
        printf("NOt Natural no.");
    }
}





//                           ~~~~    END  ~~~