//                            { chapter 7 }

//                            ~~ ARRAYS ~~


// [Qus-1] Write a program to enter price of 3 items and print final cost with GST ?
/*#include<stdio.h>
int main()
{
    float price[3];
    printf("Enter 3 price :");
    scanf("%f", &price[0]);
    scanf("%f",&price[1]);
    scanf("%f",&price[2]);

    printf("Total price 1 =%f\n",price[0]+(0.18*price[0]));
    printf("Total price 2 =%f\n",price[1]+(0.18*price[1]));
    printf("Total price 3 =%f\n",price[2]+(0.18*price[2]));

    return 0;
}*/



//   [Example] of Travers an arry OF adhar vauues 
/*#include<stdio.h>
int main()
{
    int adhar[6];
//input
    int *ptr =&adhar;
         for(int i=1; i<=6 ; i++)
         {
            printf("%d index :",i);
            scanf("%d",&adhar[i]);   
         }
//output
    for(int i=1 ; i<=6; i++)
    {
        printf("%d Index = %d \n ",i,adhar[i]);
    }
return 0;
}*/



//  [Que 2] Write a function to count the odd no in an arry ?
/*#include<stdio.h>
int countOdd(int arr[], int n);

int main()
{
    int arr[] = {1,2,3,4,5,6,7,8};
    printf("%d",countOdd(arr,8));
    return 0;
}

int countOdd(int arr[], int n)
{
    int count=0;
    for(int i=0; i<n ;i++)
    {
        if(arr[i]%2 != 0)
        {
            count++;
        }
    }
    return count;
}*/



// [Que 3] Write a program int arr[]={1,2,3,4,5} for the given array and (a) *(arr+2)--> 3 , (b) *(arr+5)-->no define
/*#include<stdio.h>
int main()
{
    int arr[] ={1,2,3,4,5};
    printf("%d \n", *(arr+2));
    printf("%d \n", *(arr+5));
    return 0;
}*/



// [Que 4] Write a function to reverse an array ?
/*#include<stdio.h>
void reverse(int arr[], int n);
void printarr(int arr[], int n);

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    reverse(arr, 5);
    printarr(arr ,5);
    return 0;
}

void printarr(int arr[], int n)
{
    for(int i=0; i<n ; i++)
    {
        printf("%d \t", arr[i]);
    }
}

void reverse(int arr[], int n )
{
    for( int i=0; i<n/2 ; i++)
    {
        int firstvalue = arr[i];
        int secondvalue = arr[n-i-1];
        arr[i] = secondvalue;
        arr[n-i-1] = firstvalue;
    }
}*/



//[Que 5] Write a program to store the first n fibonacci number ?
/*#include<stdio.h>
int main()
{
    int n;
    printf("Enter n : ");
    scanf("%d", &n);

    int fib[n];
    fib[0] =0;
    fib[1] =1;
    printf("0\t");
    printf("1\t");

    for(int i=2; i<n ; i++)
    {
        
        fib[i] = fib[i-1] + fib[i-2];
        printf("%d \t", fib[i]);
    }
    return 0;
}*/



// [Que 6] Create a 2D array , store the table of 2 & 3 ?
#include<stdio.h>
void storetable( int arr[][10],int n ,int m ,int number );

int main()
{
    int table [2][10];
    storetable(table, 0, 10, 2);
    storetable(table, 1, 10, 3);

    for(int i =0; i<10; i++)
    {
        printf("%d\t", table[0][i] );
    }
    printf("\n");
     for(int i =0; i<10; i++)
     {
        printf("%d\t", table[1][i] );
     }
    return 0;
}

void storetable( int arr[][10],int n ,int m ,int number )
{
    for(int i=0; i<m ; i++)
    {
        arr[n][i] = number * (i + 1);
    }
}