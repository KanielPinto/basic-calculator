/*
Purpose: To facilitate unit conversions
Author: Valeron Toscano
Date: 28/11/21
*/
#include <stdio.h>
#include <math.h>

//function to get user input, process input as directed and ask user if he wants to use the function again
void main_unit(){
    int conv_no, exec_complete;
    int repeat;
    float km, miles, meter, yard, inch, cm, arm, kg, lbs, K, C, cal, J, eV, atm, bar, kPa, L, mL, mol, particles;
    printf("Unit Converter\n Choose a conersion\n 1.Km to miles\n 2.Miles to Km\n 3.Meter to yard\n 4.Yard to meter\n 5.Inches to cm\n 6.Cm to inches\n 7.Meters to armstrong unit\n 8.Armstrong unit to meters\n 9.Kg to Lbs\n 10.Lbs to kg\n 11.Celsius to Kelvin\n 12.Kelvin to Celsius\n 13.Joules to calories\n 14.Calories to joules\n 15.Electron volt (eV) to joules\n 16.Atm to kPa\n 17.kPa to atm\n 18.bar to kPa\n 19.kPa to bar\n 20.mL to L\n 21.L to mL\n 22.mol to particles\n" );
    scanf("%d", &conv_no);

    switch (conv_no)
    {
    case 1:
        printf("Enter value in km\n");
        scanf("%f", &km );
        miles = 0.62137 * km;
        printf("Result: %.2f miles", miles);
        break;
    case 2:
        printf("Enter value in miles\n");
        scanf("%f", &miles );
        km = 1.6093 * miles;
        printf("Result: %.2f kilometers", km);
        break;
    case 3:
        printf("Enter value in meters\n");
        scanf("%f", &meter );
        yard = 1.0936 * meter;
        printf("Result: %.2f yards", yard);
        break;
    case 4:
        printf("Enter value in yards\n");
        scanf("%f", &yard );
        meter = 0.9144 * yard;
        printf("Result: %.2f meters", meter);
        break;
    case 5:
        printf("Enter value in inches\n");
        scanf("%f", &inch );
        cm = 2.54 * inch;
        printf("Result: %.2f centimeters", cm);
        break;
    case 6:
        printf("Enter value in centimeters\n");
        scanf("%f", &cm );
        inch = 0.3937 * cm;
        printf("Result: %.2f inches", inch);
        break;
    case 7:
        printf("Enter value in meters\n");
        scanf("%f", &meter);
        printf("Result: %.2f * 10^10 Armstrong unit", meter);
        break;
    case 8:
        printf("Enter value in AU\n");
        scanf("%f", &arm);
        printf("Result: %.2f * 10^-10 Armstrong unit", arm);
        break;
    case 9:
        printf("Enter value in kg\n");
        scanf("%f", &kg );
        lbs = 2.2046 * kg;
        printf("Result: %.2f lbs", lbs);
        break;
    case 10:
        printf("Enter value in lbs\n");
        scanf("%f", &lbs );
        kg = 0.454 * lbs;
        printf("Result: %.2f kg", kg);
        break;
    case 11:
        printf("Enter value in C\n");
        scanf("%f", &C );
        K = C - 273.15;
        printf("Result: %.2f K", K);
        break;
    case 12:
        printf("Enter value in K\n");
        scanf("%f", &K );
        C = K + 273.15;
        printf("Result: %.2f C", C);
        break;
    case 13:
        printf("Enter value in Joules\n");
        scanf("%f", &J );
        cal = J * 0.239;
        printf("Result: %.2f Calories", cal);
        break;
    case 14:
        printf("Enter value in Calories\n");
        scanf("%f", &cal );
        J = cal * 4.184;
        printf("Result: %.2f joules", J);
        break;
    case 15:
        printf("Enter value in eV\n");
        scanf("%f", &eV );
        J = eV * 1.602;
        printf("Result: %.2f * 10^-19 joules", J);
        break;
    case 16:
        printf("Enter value in atm\n");
        scanf("%f", &atm );
        kPa = atm * 101.325;
        printf("Result: %.2f kPa", kPa);
        break;
    case 17:
        printf("Enter value in kPa\n");
        scanf("%f", &kPa );
        atm = kPa * 0.00986923;
        printf("Result: %.2f atm", atm);
        break;
    case 18:
        printf("Enter value in bar\n");
        scanf("%f", &bar );
        kPa = bar * 100;
        printf("Result: %.2f kPa", kPa);
        break;
    case 19:
        printf("Enter value in kPa\n");
        scanf("%f", &kPa );
        bar = kPa / 100;
        printf("Result: %.2f bar", bar);
        break;
    case 20:
        printf("Enter value in mL\n");
        scanf("%f", &mL );
        L = mL * 1000;
        printf("Result: %.2f L", L);
        break;
    case 21:
        printf("Enter value in L\n");
        scanf("%f", &L );
        mL = L / 1000;
        printf("Result: %.2f mL", mL);
        break;
    case 22:
        printf("Enter value in mol\n");
        scanf("%f", &mol );
        particles = mol * 6.022;
        printf("Result: %.2f ^ 10^23 particles", particles);
        break;   
    default:
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
                main_unit(); //recall main function to perform calculations again
        }
        else {
                printf("Thank you for using this calculator. Hope to see you soon!");
        }
    }

}