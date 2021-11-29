/*
*Author: Kaniel
*Maths Section
*/


#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <float.h>
#include <conio.h>

//defining values
#define PI 3.142

//global variable definitions
float val[100];
int i;
int k=0, l=0, m=0;
char z;
char polyop;
int deg1;
int deg2;
int choice;
char redo;
int mensop;

void perc();
void logs();
void poly();
void mensuration();
void matrices();
void lcmhcf();
void roots();


//variable definitions for matrices section

int i, j;
char op;

void readarr1(int x[2][2]);
void printarr1(int x[2][2]);
void readarr2(int y[2][2]);
void printarr2(int y[2][2]);

int arr1[2][2];
int arr2[2][2];
int arr3[2][2];

void add_matrix(int x[i][j], int y[i][j], int z[i][j]);
void sub_matrix(int x[i][j], int y[i][j], int z[i][j]);
void mul_matrix(int x[i][j], int y[i][j], int z[i][j]);

//variable and structure definitions for polynomial section

void add_poly();
void sub_poly();
void mul_poly();
void div_poly();
struct poly
{
    float coeff;
    int expo;
};

struct poly p[50], q[50], r[50];

//main function

int main_mathematics()
{
    //displaying maths section menu and accepting user input
    int exec_complete, repeat;
    char op;
    printf("WELCOME TO THE STUDY BUDDY MATHS SECTION!\n\n");
    printf("\nPercentage Calculator       (1)\n");
    printf("Log and Antilog Calculator  (2)\n");
    printf("Mensuration                 (3)\n");
    printf("Polynomial Calculation      (4)\n");
    printf("Matrices Solver             (5)\n");
    printf("LCM & HCF                   (6)\n");
    printf("Quadratic Roots Calculator  (7)\n");
    scanf(" %c", &op);

    //switch case to trigger other functions for selected section 
    switch (op)
    {
    case '1':
        perc();
        exec_complete = 1;
        break;

    case '2':
        logs();
        exec_complete = 1;
        break;

    case '3':
        mensuration();
        exec_complete = 1;
        break;

    case '4':
        poly();
        exec_complete = 1;
        break;

    case '5':
        matrices();
        exec_complete = 1;
        break;

    case '6':
        lcmhcf();
        exec_complete = 1;
        break;

    case '7':
        roots();
        exec_complete = 1;
        break;

    default:
        printf("Invalid Input");
        exec_complete = 0;
        break;
    }

    //check if execution completed
    if (exec_complete == 1)
    {    
        printf("\nWould you like to calculate another value? (0 = No, 1 = Yes)\n");
        scanf("%d", &repeat);

        //Ask user if he wants to perform more calculations
        if (repeat == 1)
        {
                main_mathematics(); //recall main function to perform calculations again
        }
        else {
                printf("Thank you for using this calculator. Hope to see you soon!");
        }
    }
    return 0;
}


//function to perform percentage calculations
void perc()
{   
    float partval, totalval, percent;

    printf("Find percentage from given values (1):\n");
    printf("Find part value from given percentage(2):\n");
    scanf("%d", &choice);
    
    if (choice==1)
    {
        printf("Enter part value (for eg. marks obtained):\n");
        scanf("%f", &partval);
        printf("Enter total value (for eg. total marks):\n");
        scanf("%f", &totalval);

        percent = partval / totalval * 100;

        printf("Answer = %.2f%%\n\n", percent);
    }
    else
    {
        printf("Enter percentage:\n");
        scanf("%f", &percent);
        printf("Enter total value (for eg. total marks):\n");
        scanf("%f", &totalval);

        partval = percent * totalval / 100;

        printf("Answer = %f\n\n", partval);
    }
}

//function to perform log calculations
void logs()
{   
    double x, lg, antilg;
    
    printf("Natural Logarithm Calculator    (1)\n");
    printf("Natural Antilogarithm Calculator(2)\n");
    scanf("%d", &choice);
    if (choice == 1)
    {
        printf("Enter a value to calculate its natural logarithm (i.e base = e):\n");
        scanf("%lf", &x);
    
        lg = log(x);

        printf("Answer = Log of %lf is %lf\n\n", x,lg);
    }

    else
    {
        printf("Enter a value to calculate its natural logarithm (i.e base = e):\n");
        scanf("%lf", &x);
    
        antilg = pow(2.718281828,x);

        printf("Answer = Antilog of %lf is %lf\n\n", x, antilg);
    }
}

//function to mensuration calculations
void mensuration()
{   
    float area, perimeter, volume, sheight, length, breadth, height, radius, side, circumference, base, csa;
    printf("Select the desired shape:\n\n");
    printf("Square                   (1):\n\n");
    printf("Rectagle                 (2):\n\n");
    printf("Triangle                 (3):\n\n");
    printf("Circle                   (4):\n\n");
    printf("Cone                     (5):\n\n");
    printf("Cylinder                 (6):\n\n");
    scanf("%d", &mensop);

    switch (mensop)
    {
    case '1':
        printf("Enter value of side (in m):\n");
        scanf("%f", &side);
        area = side*side;
        perimeter = 4*side;
        printf("Area: %f sq.m \n",area);
        printf("Perimeter: %f m \n",perimeter);
        break;

    case '2':
        printf("Enter value of length and breadth respectively(in m):\n");
        scanf("%f %f", &length, &breadth);
        area = length*breadth;
        perimeter = 2 * (length+breadth);
        printf("Area: %f sq.m \n",area);
        printf("Perimeter: %f m\n",perimeter);
        break;

    case '3':
        printf("Enter value of height and base respectively(in m):\n");
        scanf("%f %f", &height, &base);
        area = (base*height)/2;
        printf("Area: %f sq.m \n",area);
        break;

    case '4':
        printf("Enter value of radius (in m):\n");
        scanf("%f", &radius);
        area = PI*radius*radius;
        circumference = 2 * PI * radius;
        printf("Area: %f sq.m \n",area);
        printf("Circumference: %f m\n",circumference);
        break;

    case '5':
        printf("Enter value of radius and height respectively(in m):\n");
        scanf("%f %f", &radius, &height);
        sheight = sqrt(radius * radius + height * height);
        volume = PI * radius * radius * height / 3;
        csa = PI*radius*sheight;
        printf("Volume: %f sq.m \n",volume);
        printf("CSA: %f m\n",csa);
        break;

    case '6':
        printf("Enter value of radius and height respectively(in m):\n");
        scanf("%f %f", &radius, &height);
        volume = PI * radius * radius * height;
        csa = 2*PI*radius*height;
        printf("Volume: %f sq.m \n",volume);
        printf("CSA: %f m\n",csa);
        break;


    default:
        printf("Invalid Input");
        break;
    }
}

//function to trigger polynomial calculations functions
void poly()
{

    printf("Enter the highest degree of Polynomial 1:");
    scanf("%d", &deg1);

    //taking polynomial terms from the user
    for (i = 0; i <= deg1; i++)
    {
        //entering values in coefficient of the polynomial terms
        printf("\nEnter the coefficient of x^%d :", i);
        scanf("%f", &p[i].coeff);

        //entering values in exponent of the polynomial terms
        p[k++].expo = i;
    }

    //taking second polynomial from the user
    printf("\nEnter the highest degree of Polynomial 2:");
    scanf("%d", &deg2);

    for (i = 0; i <= deg2; i++)
    {
        printf("\nEnter the coefficient of x^%d :", i);
        scanf("%f", &q[i].coeff);

        q[l++].expo = i;
    }

    //printing first polynomial
    printf("\nPolynomial 1 = %.1f", p[0].coeff);
    for (i = 1; i <= deg1; i++)
    {
        printf("+ %.1fx^%d", p[i].coeff, p[i].expo);
    }

    //printing second polynomial
    printf("\nPolynomial 2 = %.1f", q[0].coeff);
    for (i = 1; i <= deg2; i++)
    {
        printf("+ %.1fx^%d", q[i].coeff, q[i].expo);
    }


   printf("\n\nEnter operator:");
    scanf("%s",&polyop);

    switch(polyop)
    {
        case'+':
        add_poly();
        break;

        case'-':
        sub_poly();
        break;

        default:
        printf("Invalid Input");
        break;
    }

}
//function to add polynomial
void add_poly()
{
    //Adding the polynomials
    if (deg1 > deg2)
    {
        for (i = 0; i <= deg2; i++)
        {
            r[m].coeff = p[i].coeff + q[i].coeff;
            r[m].expo = p[i].expo;
            m++;
        }

        for (i = deg2 + 1; i <= deg1; i++)
        {
            r[m].coeff = p[i].coeff;
            r[m].expo = p[i].expo;
            m++;
        }
    }
    else
    {
        for (i = 0; i <= deg1; i++)
        {
            r[m].coeff = p[i].coeff + q[i].coeff;
            r[m].expo = p[i].expo;
            m++;
        }

        for (i = deg1 + 1; i <= deg2; i++)
        {
            r[m].coeff = q[i].coeff;
            r[m].expo = q[i].expo;
            m++;
        }
    }

    //printing the sum of the two polynomials
    printf("\nAnswer  = %.1f", r[0].coeff);
    for (i = 1; i < m; i++)
    {
        printf("+ %.1fx^%d", r[i].coeff, r[i].expo);
    }
}
//function to subtract polynomials
void sub_poly()
{
    if (deg1 > deg2)
    {
        for (i = 0; i <= deg2; i++)
        {
            r[m].coeff = p[i].coeff - q[i].coeff;
            r[m].expo = p[i].expo;
            m++;
        }

        for (i = deg2 + 1; i <= deg1; i++)
        {
            r[m].coeff = p[i].coeff;
            r[m].expo = p[i].expo;
            m++;
        }
    }
    else
    {
        for (i = 0; i <= deg1; i++)
        {
            r[m].coeff = p[i].coeff - q[i].coeff;
            r[m].expo = p[i].expo;
            m++;
        }

        for (i = deg1 + 1; i <= deg2; i++)
        {
            r[m].coeff = q[i].coeff;
            r[m].expo = q[i].expo;
            m++;
        }
    }

    //printing the sum of the two polynomials
    printf("\nAnswer  = %.1f", r[0].coeff);
    for (i = 1; i < m; i++)
    {
        printf("+ %.1fx^%d", r[i].coeff, r[i].expo);
    }
}


//function to trigger operations for matrices
void matrices()
{   
    printf("Enter the values for the first array:\n");
    readarr1(arr1);
    printarr1(arr1);

    printf("Enter the values for the second array:\n");
    readarr2(arr2);
    printarr2(arr2);

    //User input to decide which function to implement
    printf("Enter operator:");
    scanf("%s",&op);

    switch(op)
    {
        case'+':
        add_matrix(arr1, arr2, arr3);
        break;

        case'-':
        sub_matrix(arr1, arr2, arr3);
        break;

        case'*':
        mul_matrix(arr1, arr2, arr3);
        break;

        default:
        printf("Invalid Input");
        break;
    }
}

//functions to read and display the inputted matrices
void readarr1(int x[2][2])
{
for(i=0; i<2; i++)
    {
      for(j=0;j<2;j++) 
      {
         printf("x[%d][%d]:",i, j);
         scanf("%d", &x[i][j]);
      }
   }
}   

void printarr1(int x[2][2])
{
for(i=0; i<2; i++)
    {
      for(j=0;j<2;j++) 
      {
         printf("\tx[%d][%d]:%d", i, j, x[i][j]);
      }
      printf("\n");
   }
   printf ("\n");
}   

void readarr2(int y[2][2])
{
for(i=0; i<2; i++)
    {
      for(j=0;j<2;j++) 
      {
         printf("y[%d][%d]:",i, j);
         scanf("%d", &y[i][j]);
      }
   }
}   

void printarr2(int y[2][2])
{
for(i=0; i<2; i++)
    {
      for(j=0;j<2;j++) 
      {
         printf("\ty[%d][%d]:%d", i, j, y[i][j]);
      }
      printf("\n");
   }
   printf ("\n");
}   

//Functions to perform arithmetic operations on the matrices
void add_matrix(int x[i][j], int y[i][j], int z[i][j])
{   
    for(i=0; i<2; i++)
    {
      for(j=0;j<2;j++) 
      {
          z[i][j] = x[i][j] + y[i][j]; 
          printf("\t z[%d][%d]:%d", i, j, z[i][j]);
      }
      printf("\n");
    }
}

void sub_matrix(int x[i][j], int y[i][j], int z[i][j])
{   
    for(i=0; i<2; i++)
    {
      for(j=0;j<2;j++) 
      {
          z[i][j] = x[i][j] - y[i][j]; 
          printf("\t z[%d][%d]:%d", i, j, z[i][j]);
      }
      printf("\n");
    }
}

void mul_matrix(int x[i][j], int y[i][j], int z[i][j])
{   
    for(i=0; i<2; i++)
    {
      for(j=0;j<2;j++) 
      {
          z[i][j] = x[i][j] * y[i][j]; 
          printf("\t z[%d][%d]:%d", i, j, z[i][j]);
      }
      printf("\n");
    }
}

//function to find lcm and hcf
void lcmhcf()
{   

    int x, y, hcf, lcm, i;

	 printf("Enter first number: ");
	 scanf("%d", &x);
	 printf("Enter second number: ");
	 scanf("%d", &y);

	 /* Finding HCF */
	 
	 for(i=1; i<=x; i++)
	 {
		  if(x%i==0 && y%i==0)
		  {
		   	hcf = i;
		  }
	 }

	 /* Finding LCM */
	 lcm = (x * y)/hcf;
	 printf("HCF = %d and LCM = %d", hcf, lcm);
	 getch();
  
}

//function to find roots of quadratic equations
void roots()
{

    float a, b, c, d, x1, x2;
    
   
    printf("Enter the coefficients: \n\n");
    scanf("%f, %f, %f", &a, &b, &c);

    d = (b*b - 4*a*c);

    if (d < 0)
    {
        printf("Roots are not real"); 
    }

    else if(d == 0)
    {
        x1 = x2 = (-b)/ 2*a;
        printf("Answer = Roots are %f and %f", x1, x2);
    }
    
    else 
    {
        x1 = (-b + sqrt(d))/ 2*a;
        x2 = (-b - sqrt(d))/ 2*a;
        printf("Answer = Roots are %f and %f", x1, x2);
    }
}