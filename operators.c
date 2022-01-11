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
    - Increment and Decrement Operators
    - Conditional Operators
    - Bitwise Operators
    - Special Operators

    */
//  Arithmetic Operator
    // +,-,*,/,%
    int a=10,b=20;

    printf("Addition:%d\n",a+b);
    printf("Subtraction:%d\n",a-b);
    printf("Multiplication:%d\n",a*b);
    printf("Division:%d\n",a/b);
    printf("Modulo Division:%d\n",a%b);

//  Relational Operators
    // ==,!=,<=,>=,>,<
    int n1=10,n2=20;

    printf("n1 == n2: %d\n",n1==n2);
    printf("n1 != n2: %d\n",n1!=n2);
    printf("n1 <= n2: %d\n",n1<=n2);
    printf("n2 >= n2: %d\n",n1>=n2);
    printf("n1 < n2: %d\n",n1<n2);
    printf("n1 > n2: %d\n",n1>n2);


//  Logical Operators
    // &&, ||, !
    int n3=1,n4=0;

    printf("n3 && n4: %d\n",n3&&n4);
    printf("n3 && n3: %d\n",n3&&n3);
    printf("n4 && n4: %d\n",n4&&n4);

    printf("n3 || n4: %d\n",n3||n4);
    printf("n3 || n3: %d\n",n3||n3);
    printf("n4 || n4: %d\n",n4||n4);
    printf("n4 || n3: %d\n",n4||n3);

    printf("! n3: %d\n",!n3);
    printf("! n4: %d\n",!n4);

//  Assignment Operators
    // =,+=,-=,*=,/=,%=
    int num1=10,num2=20;

    printf("num1 = %d and num2 = %d\n",num1,num2);
    printf("num1+=num2 :%d\n",num1+=num2);
    printf("num1-=num2 :%d\n",num1-=num2);
    printf("num1*=num2 :%d\n",num1*=num2);
    printf("num1/=num2 :%d\n",num1/=num2);
    printf("num1%%=num2 :%d\n",num1%=num2);

}