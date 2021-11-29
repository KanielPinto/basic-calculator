/*
Purpose : To perform various calculations ranging from topics of basic arithmetic to sciences.
Authors: Kaniel Pinto and Valeron Toscano
Date: 28/11/21
*/

#include <stdio.h>
#include "physics.h"
#include "chemistry.h"
#include "unit.h"
#include "basiccalc.h"
#include "mathematics.h"

void main() {

    int cat_selected;
    printf("-------------------------------------------------------------------\n");
    printf("-----------------------CALCULATOR BUDDY v1.0-----------------------\n");
    printf("-------------------------------------------------------------------\n");
    printf("From basic math to complex physics problems - calculating made easy\n");
    printf("Select a category to display subcategories\n 1.Basic Arithmetic\n 2.Mathematics\n 3.Physics\n 4.Chemistry\n 5.Unit Converter\n");
    scanf("%d", &cat_selected);

    //switch statement to select corresponding category
    switch (cat_selected)
    {
    case 1:
        main_basic();
        break;
    case 2:
        main_mathematics();
        break;
    case 3:
        main_physics();
        break;
    case 4:
        main_chemistry();
        break;
    case 5:
        main_unit();
        break;
    default:
        printf("Invalid selection. Program terminating");
        break;
    }

}