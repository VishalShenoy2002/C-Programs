#include<stdio.h>

// Main Function
void main()
{
    // Syntax for Declaring the Variable is
    // <DATATYPE><VARIABLE NAME>=VALUE ;
    // int number=10;
    // printf("Old Value:%d\n",number);

    // number=20;
    // printf("New Value:%d",number);

    // Syntax for Declaring Constants
    // #define or using the const keyword

    // const <DATATYPE><VARIABLE NAME>=VALUE ;
    // const int number=10;
    // printf("Old Value:%d\n",number);

    // number=20;
    // printf("New Value:%d",number);

    /*
    Types of Constants
    -------------------
    1.Numeric Constants
        - Integer Constants
        - Floating Point Constants
    2.Character Constants
        - Single Character Constants
        - String Constants
        - Backslashed Constants
    */

//    Numeric Constants - Integer and Floating Point
    int num_int=10;
    float num_float=10.576;
    double num_double=10;

    printf("Integer Value:%d\n",num_int);
    printf("Float Value:%f\n",num_float);
    printf("Double Value:%lf\n",num_double);

    // Character Constants Single Character, String and Backslashed Constant
    char alphabet='A';
    char name[10]="Vishal";
    char newline='\n';

    printf("Character:%c\n",alphabet);
    printf("String:%s\n",name);
    printf("Backslashed Character:%c\n",newline);


}