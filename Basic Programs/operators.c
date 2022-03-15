#include<stdio.h>

// Main Function
void main()
{
    /*
    Types of Operators
    ------------------
    - Arithmetic Operators
    - Relational Operators
    - Logical Operators
    - Assignment Operators

    */
//  Arithmetic Operator
    // +,-,*,/,%
    int a=10,b=20;

    printf("Addition:%d\n",a+b); // Output 30
    printf("Subtraction:%d\n",a-b); // -10
    printf("Multiplication:%d\n",a*b); // 200
    printf("Division:%d\n",a/b); // 0 as 0.5 is not considered as an integer
    printf("Modulo Division:%d\n",a%b); // 10

//  Relational Operators
    // ==,!=,<=,>=,>,<
    int n1=10,n2=20;

    printf("n1 == n2: %d\n",n1==n2); // 0
    printf("n1 != n2: %d\n",n1!=n2); // 1
    printf("n1 <= n2: %d\n",n1<=n2); // 1
    printf("n2 >= n2: %d\n",n1>=n2); // 0
    printf("n1 < n2: %d\n",n1<n2); // 1
    printf("n1 > n2: %d\n",n1>n2); // 0


//  Logical Operators
    // &&, ||, !
    int n3=1,n4=0;

    printf("n3 && n4: %d\n",n3&&n4); // 0
    printf("n3 && n3: %d\n",n3&&n3); // 1
    printf("n4 && n4: %d\n",n4&&n4); // 0

    printf("n3 || n4: %d\n",n3||n4); // 1
    printf("n3 || n3: %d\n",n3||n3); // 1
    printf("n4 || n4: %d\n",n4||n4); // 0
    printf("n4 || n3: %d\n",n4||n3); // 1

    printf("! n3: %d\n",!n3); // 0
    printf("! n4: %d\n",!n4); // 1

//  Assignment Operators
    // =,+=,-=,*=,/=,%=
    int num1=10,num2=20;

    printf("num1 = %d and num2 = %d\n",num1,num2); // 10 and 20
    printf("num1+=num2 :%d\n",num1+=num2); // 30 -> num1=num1+num2
    printf("num1-=num2 :%d\n",num1-=num2); // 10 -> num1=num1-num2
    printf("num1*=num2 :%d\n",num1*=num2); // 200 -> num1=num1*num2
    printf("num1/=num2 :%d\n",num1/=num2); // 10 -> num1=num1/num2
    printf("num1%%=num2 :%d\n",num1%=num2); //10 -> num1=num1%num2

}