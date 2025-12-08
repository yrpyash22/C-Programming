//                                  Chapter 10 
//                           ~~  FILES INPUT & OUTPUT ~~

// Operation on Files
// 1 create a FILE
// 2 open a FILE
// 3 close a FILE
// 4 read a FILE
// 5 write a FILE



// [Que 1] Examples of files creating and opening.

//                 [1]  For read mode "r" 
/*#include<stdio.h>
int main()
{
    FILE *fptr;
    fptr = fopen("NewCH_10.txt", "r");    // open a file
    if(fptr == NULL)
    {
        printf("Fle not exist\n");
    }
    else
    {
        fclose(fptr);                       // close a file
    }
    return 0;
}*/

//             [2]  For write mode "w"  [Then creat a new file]
/*#include<stdio.h>
int main()
{
    FILE *fptr;
    fptr = fopen("NewCH_10.txt", "w");
    if(fptr == NULL)
    {
        printf("Fle not exist\n");
    }
    else
    {
    fclose(fptr);
    }
    return 0;
}*/

//        [3]  For reading a file [fscanf(fptr, "%_" , &_);].
/*#include<stdio.h>
int main()
{
    FILE *fptr;
    fptr = fopen("Text.txt", "r");

    char ch;
    fscanf(fptr, "%c", &ch);
    printf("char is =%c\n", ch);  // A
    fscanf(fptr, "%c", &ch);
    printf("char is =%c\n", ch);  // p
    fscanf(fptr, "%c", &ch);
    printf("char is =%c\n", ch);  // p
    fscanf(fptr, "%c", &ch);
    printf("char is =%c\n", ch);  // l
    fscanf(fptr, "%c", &ch);
    printf("char is =%c\n", ch);  // e
    fclose(fptr);
    return 0;
}*/

//         [4]  For Writing to a file [fprintf(fptr, "%_", &_);].
/*#include<stdio.h>
int main()
{
    FILE *fptr;
    fptr = fopen("Text.txt" , "a");

    fprintf(fptr, "%c", "y" );
    fprintf(fptr, "%c", "a" );
    fprintf(fptr, "%c", "s" );
    fprintf(fptr, "%c", "h" );
    fclose(fptr);
    return 0;
}*/

//  [5] Reading & Writen a char  [  "r" ->{ fgetc(fptr); }   &  "w" ->{ fputc('A' , fptr);  } ]
/*#include<stdio.h>
int main()
{
    FILE *fptr;
//                                 Reading  "r" ->{ fgetc(fptr);
    fptr = fopen("Text.txt" , "r");
    printf("%c\n", fgetc(fptr));
    printf("%c\n", fgetc(fptr));
    printf("%c\n", fgetc(fptr));
    printf("%c\n", fgetc(fptr));
    printf("%c\n", fgetc(fptr));
//                                 Writing  "w" ->{ fputc('A' , fptr); 
    fptr = fopen("Text.txt" , "w");
    fputc('Y', fptr);
    fputc('A', fptr);
    fputc('S', fptr);
    fputc('H', fptr);
    fclose(fptr);
    return 0;
}*/

//     [6]     EOF( End of Files)    Fgetc  return EOF  to show that the file has ended 
/*#include<stdio.h>
int main()
{
    FILE *fptr;
    fptr = fopen("Text.txt", "r");
    char ch;
    ch = fgetc(fptr);
    while(ch != EOF )
    {
        printf("%c" ,ch);
        ch = fgetc(fptr);
    }
    printf("\n");
    fclose(fptr);
    return 0;
}*/



// [Que 1] Make a program to reed 5 integer from a file.
/*#include<stdio.h>
int main()
{
    FILE *fptr;
    fptr = fopen("Text.txt", "r");

    int i;
    fscanf(fptr, "%d", &i);
    printf("int is =%d\n", i);  
    fscanf(fptr, "%d", &i);
    printf("int is =%d\n", i);  
    fscanf(fptr, "%d", &i);
    printf("int is =%d\n", i);  
    fscanf(fptr, "%d", &i);
    printf("int is =%d\n", i);  
    fscanf(fptr, "%d", &i);
    printf("int is =%d\n", i);  
    fclose(fptr);
    return 0;
}*/



// [Que 2] Write a program to input student information from a user & enter it to a file.
#include<stdio.h>
#include<string.h>
typedef struct student 
{
    char name[100];
    int age;
    float cgpa;
    double rollno;
    char clg[100];
}Inf;

int main()
{
    FILE *fptr;
    fptr = fopen("Text.txt", "w");
    Inf s1;
    Inf s2;
    printf("Enter name :");
    scanf("%s",&s1.name);
    printf("Enter age :");
    scanf("%d", &s1.age);
    printf("Enter cgpa :");
    scanf("%f", &s1.cgpa);
    printf("Enter Rollno. =");
    scanf("%d", &s1.rollno);
    printf("Enter College name :");
    scanf("%s",&s1.clg);

    printf("Enter name :");
    scanf("%s",&s2.name);
    printf("Enter age :");
    scanf("%d", &s2.age);
    printf("Enter cgpa :");
    scanf("%f", &s2.cgpa);
    printf("Enter Rollno. =");
    scanf("%d", &s2.rollno);
    printf("Enter College name :");
    scanf("%s",&s2.clg);

    fprintf(fptr,"\t\tFirst student Information \n");
    fprintf(fptr,"Student name :%s\n", s1.name);
    fprintf(fptr,"Student age :%d\n", s1.age);
    fprintf(fptr,"Student cgpa :%f\n", s1.cgpa );
    fprintf(fptr,"Student Rolln. =%d\n", s1.rollno );
    fprintf(fptr,"Student college :%s\n", s1.clg);

    fprintf(fptr,"\n\t\tSecond student Information \n");
    fprintf(fptr,"Student name :%s\n", s2.name);
    fprintf(fptr,"Student age :%d\n", s2.age);
    fprintf(fptr,"Student cgpa :%f\n", s2.cgpa );
    fprintf(fptr,"Student Rolln. =%d\n", s2.rollno );
    fprintf(fptr,"Student college :%s\n", s2.clg);
    fclose(fptr);

}



// [Que 3] Write a P. to write all the odd numbers from 1 to n in a file.
/*#include<stdio.h>
int main()
{
    FILE *fptr;
    fptr = fopen("Text.txt", "w");

    int n;
    printf("Enter n :");
    scanf("%d", &n);
    for(int i = 1; i<=n; i++)
    {
        if( i % 2 != 0)
        {
            fprintf(fptr, "%d\t\n", i);
        }
    }
    fclose(fptr);
     return 0;
}*/



// [Que 4] 2 number- a & b, are write in a file. Write a program to replace them with ther sum.
/*#include<stdio.h>
int main()
{
    FILE *fptr;
    fptr = fopen("Text.txt", "r");
    int a;
    fscanf(fptr, "%d", &a);
    int b;
    fscanf(fptr, "%d", &b);
    fclose(fptr);

    fptr = fopen("Text.txt", "w");
    fprintf(fptr, "%d", a+b);
    fclose(fptr);
    return 0;
}*/


 