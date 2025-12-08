//                           Chapter 8

//                          ~~ STRINGS ~~

// [Que 1] What is creats a string firstName & last to store details of user & print all the char useing a loop ?
/*#include<stdio.h>
void printstring( char arr[]);

int main()
{
    char firstname[] = "YASHRAJ";
    char lastname[] = "PRAJAPATI";
    printstring(firstname);
    printstring(lastname);
    return 0;
}

void printstring( char arr[])
{
    for(int i=0; arr[i] != '\0' ; i++)
    {
        printf("%c", arr[i]);
    }
    printf("\n");
}*/



// [Example] String Formate specifier --%s
// [Que 2] Ask the user to enter their Firstname & print it back to them ?
/*#include<stdio.h>
int main()
{
    char firstname[3];
    scanf("%s",firstname);
    printf("Your name is : %s", firstname);
    return 0;
}*/



// [Que 3] Ask the user to enter their Fullname & print it back to them?
/*#include<stdio.h>
int main()
{
    char name[1];
    gets(name);     //  [gets] this is un safe for softwares so we use [fgets]
    puts(name);    //   [puts] this is automaticaly give the next line in ter..
    return 0;
}*/


// [Que 3(b)] string function ex of fgets
/*#include<stdio.h>
int main()
{
    char str[100];      // jitene value doge usse ak kam hi char print hoge n =? print is n-1=?
    fgets(str, 100, stdin);     
    puts(str);   
    return 0;
}*/



// [Que 4] Make a program that inputs user name & prints its length.
/*#include<stdio.h>
int countlength(char arr[]);

int main()
{
    char name[100];
    fgets(name, 100, stdin);
    int length = countlength(name);
    printf("Length is : %d",length);
    return 0;
}

int countlength(char arr[])
{
    int count =0;
    for(int i=0; arr[i]!= '\0' ; i++)
    {
        count++;
    }
    return count-1;
}*/



// [Que 5] Examples of <string.h> libarory functions.

//#include<stdio.h>
//#include<string.h>

// [1] { strlen(str) } count no in string.
/*int main()
{
    char name[] ="yashtaj";
    int length = strlen(name);
    printf("Length is : %d", length);
    return 0;
}*/

// [2] { strcpy(new ,old)} Copyies value of old string in new,
/*int main()
{
    char oldstr[] ="yash";
    char newstr[] ="raj";
    strcpy(newstr, oldstr );
    puts(newstr);
} */

// [3] { strcat(new, old)} added 1st str with 2nd str.
/*int main()
{
    char oldstr[] ="hello";
    char newstr[] ="world";
    strcat(oldstr , newstr);
    puts(oldstr);
}*/ 

// [4] { strcmp(fis, sec) } function is compare two string.
/*int main()
{
    char firststr[100] ="Apple";
    char secstr[] ="Banana";
    printf("%d",strcmp(firststr, secstr));
}*/



// [Que 6] Take a sting from the user %c.
/*#include<stdio.h>
int main()
{
    char str[100];
    char ch;
    int i=0;
    while(ch != '\n')
    {
        scanf("%c",&ch);
        str[i] = ch;
        i++;
    }
    str[i] = '\0';
    puts(str);
}*/



// [Que 7] Find the salted from of a password enter by user if the salt is "123"& adde at the end.
/*#include<stdio.h>
#include<string.h>
void salting(char password[]);

int main()
{
    char password[100];
    scanf("%s", password);
    salting(password);
}

void salting(char password[])
{
    char salt[] = "123";
    char newpasword[200];
    strcpy(newpasword, password);
    strcat(newpasword, salt); 
    puts(newpasword);
}*/



// [Que 8] Write a function named slice which takes a string & returns a slicd string from index n to m.
/*#include<stdio.h>
#include<string.h>
void slice(char str[], int n, int m);

int main()
{
    char str[100] = "Yashrajprajapati";
    slice(str, 3, 8); 
}

void slice(char str[], int n, int m)
{
    char newstr[100];
    int i=0;
    int j=0;
    for(i=n; j<=m; i++, j++)
    {
        newstr[j] = str[i]; 
    }
    newstr[j] = '\0';
    puts(newstr);
}*/



// [Que 9] Write a function to count the occurrence vowels in a string./
/*#include<stdio.h>
#include<string.h>
int countvowels(char str[]);

int main()
    {
        char str[100];
        scanf("%s",&str);
        printf("Vowels are : %d",countvowels(str));
    }

int countvowels(char str[])
{
    int count = 0;
    for(int i=0; str[i] != '\0'; i++)
    {
        if(str[i]== 'a'|| str[i] == 'e' || str[i] =='i' || str[i]=='o' || str[i] == 'u')
        {
            count++;
        }
    }
    return count;
}*/



// [Que 10] Check if a character is present in a string or not.
/*
#include<stdio.h>
#include<string.h>
void checkchar(char str[], char ch);

int main()
{
    printf("Enter word :");
    char str[100];
    scanf("%s",&str);
    char ch = 'e';
    checkchar(str, ch);
}

void checkchar(char str[], char ch)
{
    for(int i=0; str[i] != '\0'; i++)
    {
        if(str[i] == ch)
        {
            printf("character is present");
            return;
        }
    } 
    printf("character is  not present");
}
*/



// [Pq - 1 ] leanear search on array element
#include <stdio.h>
#include <string.h>
// Function to perform linear search on an array of strings
int linearSearch(char *arr[], int size, char *target) {
    for (int i = 0; i < size; i++) {
        // Compare each string with the target
        if (strcmp(arr[i], target) == 0) {
            return i; // Target found
        }
    }
    return -1; // Target not found
}

int main() {
    char *arr[] = {"apple", "banana", "cherry", "date", "elderberry"};
    int size = sizeof(arr) / sizeof(arr[0]);
    char *target = "cherry";

    int result = linearSearch(arr, size, target);

    if (result != -1) {
        printf("Element '%s' is present at index %d\n", target, result);
    } else {
        printf("Element '%s' is not present in array\n", target);
    }

    return 0;
}


