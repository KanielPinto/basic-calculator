/*
*Author: Kaniel
*Basic calculation
*/


#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <float.h>

float val[100];
int i;
char z;
void add();
void subtract();
void multiply();
void divide();
void modulus();
void square();
void squarert();
void mean();
void reset();

int main()
{

    char op;

    printf("\nPress +  to add values\n");
    printf("Press -  to subtract values\n");
    printf("Press *  to multiply values\n");
    printf("Press /  to divide values\n");
    printf("Press M  to find modulus\n");
    printf("Press S  to square a value\n");
    printf("Press R  to get the square root of a value\n");
    printf("Press A  to get the mean of given values\n");
    scanf("%c", &op);

    switch (op)
    {
    case '+':
        add();
        break;

    case '-':
        subtract();
        break;

    case '*':
        multiply();
        break;

    case '/':
        divide();
        break;

    case 'M':
        modulus();
        break;

    case 'S':
        square();
        break;

    case 'R':
        squarert();
        break;

    case 'A':
        mean();
        break;

    default:
        printf("Invalid Input");
        break;
    }

    reset();

    return 0;
}

void add()
{   
    float sum = 0;

    int valno;

    printf("Enter number of values to be added:\n");
    scanf("%d", &valno);
    printf("Enter the values to be added:\n");
    
    for (i=0; i < valno; i++)
    {
        scanf("%f", &val[i]);
    }

    for (i=0; i<50; i++)
    {
        sum += val[i];
    }

    printf("Answer = %.4f\n\n", sum);
}

void subtract()
{   
    float diff;
    float x, y;
    
    printf("Enter the value to be subtracted from:\n");
    scanf("%f", &x);
    printf("Enter the value to be subtracted:\n");
    scanf("%f", &y);

    diff = x - y;

    printf("Answer = %f\n\n", diff);
}

void multiply()
{   
    float pro = 0;
    int a = 1;
    int valno;

    printf("Enter number of values to be multiplied:\n");
    scanf("%d", &valno);
    printf("Enter the values to be multiplied:\n");
    
    for (i=0; i < valno; i++)
    {
        scanf("%f", &val[i]);
    }

    for (i=0; i<50; i++)
    {
        pro = a * val[i];
    }

    printf("Answer = %f\n\n", pro);
}

void divide()
{   
    float quotient;
    float x, y;
    
    printf("Enter the numerator:\n");
    scanf("%f", &x);
    printf("Enter the denominator:\n");
    scanf("%f", &y);


    quotient = x / y;

    printf("Answer = %f\n\n", quotient);

}

void modulus()
{   
    int mod;
    int x, y;
    
    printf("Enter the numerator:\n");
    scanf("%d", &x);
    printf("Enter the denominator:\n");
    scanf("%d", &y);

    mod = x % y;

    printf("Answer = %d\n\n", mod);

}

void square()
{   
    float sq;
    float x;
    
    printf("Enter the value to be squared:\n");
    scanf("%f", &x);

    sq = x*x;

    printf("Answer = %f\n\n", sq);
}

void squarert()
{   
    float root;
    float x;
    
    printf("Enter the value that you want the square root of:\n");
    scanf("%f", &x);

    root = sqrt(x);

    printf("Answer = %f\n\n", root);
}

void mean()
{   
    float sum = 0;
    float avg;
    int valno;

    printf("Enter number of values:\n");
    scanf("%d", &valno);

    printf("Enter the values:\n");
    
    for (i=0; i < valno; i++)
    {
        scanf("%f", &val[i]);
    }

    for (i=0; i<50; i++)
    {
        sum += val[i];
    }

    avg = sum / valno;

    printf("Answer = %.4f\n\n", avg);
}

void reset()
{
    int z;
    printf("Press 1 to perform another calculation.\n");
    printf("Press 0 to exit to menu.\n");
    scanf("%d", &z);
    
    if (z == 1)
    main();
}