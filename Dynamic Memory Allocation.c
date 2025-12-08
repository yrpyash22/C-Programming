//                                     Chapter 11

//                           ~~   Dynamic Memory Allocation  ~~


// [Que 1] To check the size of variable function by {  sizeof( Var.. )  }
/*#include<stdio.h>
int main()
{
    printf("%d\n", sizeof(int));        //   4
    printf("%d\n", sizeof(float));     //    4
    printf("%d\n", sizeof(char));      //    1
    return 0;
}*/



// [Que 2] WAP to allocation to store 5 price. (1) -> (int type.. )
/*#include<stdio.h>                          //  (2) -> (Float type.. )
#include<stdlib.h>
int main()
{
    int *ptr;
    ptr = (int*) malloc(5 * sizeof(int));
    ptr[0] = 1;
    ptr[1] = 5;
    ptr[2] = 8;
    ptr[3] = 88;
    ptr[4] = 78;

    for(int i = 0; i<5; i++)
    {
        printf("%d\n", ptr[i]);
    }
    return 0;
}*/



// [Que 3] WAP to allocate memory of size n Where is entered by the user.
/*#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    printf("Enter n : ");
    scanf("%d", &n);
    int *ptr;
    ptr = (int*) calloc(n, sizeof(int));
    for(int i=0; i<n; i++)
    {
        printf("%d\n", ptr[i]);
    }
}*/



// [Que 4] WAP to free the memory allocation with calloc.
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    printf("Enter n : ");
    scanf("%d", &n);
    int *ptr;
    ptr = (int*) calloc(n, sizeof(int));
    for(int i=0; i<n; i++)
    {
        printf("%d\n", ptr[i]);
    }
    free(ptr);
    ptr = (int*) calloc(3, sizeof(int));
    for(int i=0; i<3; i++)
    {
        printf("%d\n", ptr[i]);
    }
}



// [Que 5] WAP Allocate memory to store first 5 odd no., then reaallocate it to store first 6 even no.
/*#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr;
    ptr = (int*) calloc(5, sizeof(int));
    ptr[0] = 1;
    ptr[1] = 3;
    ptr[2] = 5;
    ptr[3] = 7;
    ptr[4] = 9;
    for(int i=0; i<5; i++)
    {
        printf("%d\n", ptr[i]);
    }
    printf("\n");

    ptr = realloc(ptr, 6);
    ptr[0] = 2;
    ptr[1] = 4;
    ptr[2] = 6;
    ptr[3] = 8;
    ptr[4] = 10;
    ptr[5] = 12;
    for(int i=0; i<6; i++)
    {+
        printf("%d\n", ptr[i]);
    }
}*/