//                                     Chapter 9

//                                  ~ STRUCTURES ~


// [Que 1] Write a program to store the data of 3 student.
/*#include<stdio.h>
#include<string.h>

// user defined
struct student 
{
    int roll;
    float cgpa;
    char name[100];
};
int main()
{
    struct student s1; 
    s1.roll = 20230136; 
    s1.cgpa = 9.0;
    strcpy(s1.name ,"Yashraj");
    printf("(1) Student information : \n");
    printf("Name = %s\n",s1.name);
    printf("roll no. = %d\n",s1.roll);
    printf("cgpa = %f\n ",s1.cgpa);
    
    struct student s2 = {20230128, 9.0, "Shubham"};
    printf("(2) Student information : \n");
    printf("Name = %s\n",s2.name);
    printf("roll no. = %d\n",s2.roll);
    printf("cgpa = %f\n ",s2.cgpa);

    struct student s3 = {20230132, 9.0, "Vinay"};
    printf("(3) Student information : \n");
    printf("Name = %s\n",s3.name);
    printf("roll no. = %d\n",s3.roll);
    printf("cgpa = %f\n ",s3.cgpa);
return 0;
}*/



// [Que 2] Examples -
/*#include<stdio.h>
struct student 
{
    int roll;
    float cgpa;
    char name[100];
};

//                              [1] Array of structure.
/*int main()
{
    struct student ECE[20];
    ECE[0].roll = 20230078;
    ECE[0].cgpa = 9.2;
    
    printf("roll no. : %d",ECE[0].roll);
    return 0;
}*/

//                           [2] Initializing Structure 
/*int main()
{
    struct student s1 = {20230075, 8.5, "shyamu"};
    printf("Student all detail :> \n%d \n%f \n%s", s1.roll, s1.cgpa, s1.name);
    return 0;
}*/

//                           [3] Pointer to structure
/*int main()
{
    struct student s1 = {1202, 25.0, "Yash"};
    struct student *ptr = &s1;
    printf("Student all detail :> \n%d \n%f \n%s\n", (*ptr).roll, (*ptr).cgpa, (*ptr).name);
    
//                       [4] Arrow operator [ -> ]

    printf("Student all detail :> \n%d \n%f \n%s", ptr->roll, ptr->cgpa, ptr->name);
}*/



// [Que 3] Enter address (houe no, block , city, state) of 5 people.
/*#include<stdio.h>
struct address{
    int houseNo;
    int block;
    char city[100];
    char state[100];
};
void prinAddress(struct address add);

int main()
{
    struct address add[5];
    printf("Enter information for person 1 :\n ");
    scanf("%s",add[0].state);
    scanf("%s",add[0].city);
    scanf("%d",&add[0].block);
    scanf("%d",&add[0].houseNo);
    
    printf("Enter information for person 2 : \n");
    scanf("%s",add[1].state);
    scanf("%s",add[1].city);
    scanf("%d",&add[1].block);
    scanf("%d",&add[1].houseNo);

    printf("Enter information for person 3 : \n");
    scanf("%s",add[2].state);
    scanf("%s",add[2].city);
    scanf("%d",&add[2].block);
    scanf("%d",&add[2].houseNo);

    printf("Enter information for person 4 : \n");
    scanf("%s",add[3].state);
    scanf("%s",add[3].city);
    scanf("%d",&add[3].block);
    scanf("%d",&add[3].houseNo);

    printf("Enter information for person 5 : \n");
    scanf("%s",add[4].state);
    scanf("%s",add[4].city);
    scanf("%d",&add[4].block);
    scanf("%d",&add[4].houseNo);

    prinAddress(add[0]);
    prinAddress(add[1]);
    prinAddress(add[2]);
    prinAddress(add[3]);
    prinAddress(add[4]);
return 0;
}

void prinAddress(struct address add)
{
    printf("Address is : %s %s %d %d \n" ,add.state, add.city, add.block ,add.houseNo);
}*/



// [Que 4] Create a structure to store VECTORS. then make a function to return sum of 2 vectors.
/*#include<stdio.h>
#include<math.h>
struct vector{
    int x;
    int y;
};
void calsum(struct vector v1, struct vector v2, struct vector sum);

int main()
{
    struct vector v1 = {5, 10};
    struct vector v2 = {3, 7};
    struct vector sum = {0};
    calsum(v1, v2, sum);
    return 0;
}

void calsum(struct vector v1, struct vector v2, struct vector sum)
{
    sum.x = v1.x + v2.x;
    sum.y = v1.y+ v2.y;
    printf("Sum of x is : %d\n", sum.x);
    printf("Sum of y is : %d\n", sum.y);
    float V1 =((v1.x * v1.x) + (v1.y * v1.y));
    float V2 =((v2.x * v2.x) + (v2.y * v2.y)); 
    printf("Magnitude of vector |v1| = %f\n", pow(V1,0.5));
    printf("Magnitude of vector |v2| = %f\n", pow(V2,0.5));
}*/



// [Que 5] Create a structure to store complex numbers. (use arrow operator i.e.[ ->] )
/*#include<stdio.h>
struct complex {
    int real;
    int img;
};
int main()
{
    struct complex number = {5, 8};
    struct complex *ptr = &number;
    printf("Real part = %d\n", ptr->real);
    printf("Img part = %d\n", ptr->img);
    return 0;
}*/


// [Que 6] Make a struct to store bank account information of a costumer of ABC any bank.make an alian for it.
#include<stdio.h>
typedef struct BankAccount{
    char name[100];
    int AccNo;
    char IFSC[100];
    int money;
}BOI;

int main()
{
    BOI acc1 = {"YASHRAJ", 9784984105, "QW123BOI326",100000000};
    BOI acc2 = {"Vinay", 5498841510, "QW215BOI481",10230};
    BOI acc3 = {"Shubam", 9785348412, "QW893BOI256",1000};
    printf("ACCOUNT DETAILS :\n NAME = %s\n AccNo. =%d\n IfSC CODE = %s\n MONEY = %d Rs\n ",acc1.name, acc1.AccNo, acc1.IFSC, acc1.money);
    printf("\n");
    printf("ACCOUNT DETAILS :\n NAME = %s\n AccNo. =%d\n IfSC CODE = %s\n MONEY = %d Rs\n ",acc2.name, acc2.AccNo, acc2.IFSC, acc2.money);
    printf("\n");
    printf("ACCOUNT DETAILS :\n NAME = %s\n AccNo. =%d\n IfSC CODE = %s\n MONEY = %d Rs\n ",acc3.name, acc3.AccNo, acc3.IFSC, acc3.money);
}