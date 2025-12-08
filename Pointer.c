//                      {   Chapter 6  }

//                        ~ Pointers ~


// [Example]  
/*#include <stdio.h>
int main()
{
    int age = 22;
    int *ptr = &age;   // -> Declared pointer 
    int _age = *ptr;

// -> Formal pointer specifier
    printf("Age is : %d\n", age);
    printf("Value of Age is %d\n",*ptr);
    printf("Address of Age is %d\n",ptr);
    printf("Address of Age is %d\n",&age);
    printf("Value of Age is %d\n",_age);
    return 0;
}*/



// [Ex -1] Print the value of 'i' from its pointer ;
/*#include <stdio.h>
int main()
{
    int i = 5;
    int *ptr = &i;
    int **pptr = &ptr;

    printf("Value of i : %d\n",i);
    printf("Address of i : %d\n",&i);
    printf("Value of *ptr : %d\n",*ptr);
    printf("Address  of *ptr : %d\n",&ptr);
    printf("Value of **pptr : %d\n",**pptr);
    printf("Address of **pptr : %d\n",&pptr);
}*/



// [Ex -2] Determine the value and referance in function code of c
/*
#include <stdio.h>
void square(int n);    // -> Value 
void _square(int *n);  // -> Referance 
int main()
{
    int num = 12;
    square(num);
    printf("Number is Value : %d\n",num);

    _square(&num);
    printf("Number is Referance : %d\n",num);

}
void square(int n)
{
    n = n * n;
    printf("The square of number by Normal is : %d\n",n); 
}
void _square(int *n)
{
    (*n) = (*n) * (*n);
    printf("The square of number by pointer is : %d\n",*n); 
}*/




//[E = 3] Swap 2 number a and b
/*
#include<stdio.h>
int swap(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
    printf("a = %d & b = %d \n", a,b);
}
int main()
{
    int x = 3, y = 5;
    swap(x, y);
    printf("x = %d & y = %d \n", x,y);
    return 0;
}
*/





// [E = 4] will the address output be same
/*
#include<stdio.h>
void printAddress(int n);
void printAddress2(int *n);
int main()
{
    int n = 4;
    printf("%p\n", &n);
    // printAddress(n);
    printAddress2(&n); 
    return 0;
}

// void printAddress(int n)    // Different address
// {
//     printf("%p\n", &n);
// }
void printAddress2(int *n)    // Same address
{
    printf("%p\n", &*n);
}*/





// [E = 5] WAP to calculate the Sum, Product and Average of two number and print that average in main function.
#include<stdio.h>
void doWork(int a, int b, int *sum, int *prod, int *avg)
{
    *sum = a+b;
    *prod = a*b;
    *avg = (a+b)/2; 
}
int main()
{
    int a = 3, b = 5;
    int sum , prod, avg;
    doWork(a, b, &sum, &prod, &avg);
    printf("Sum = %d, Product = %d, Average = %d",sum, prod, avg);
    return 0;
}