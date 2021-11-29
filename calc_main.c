#include <stdio.h>
#include "physics.c"
#include "chemistry.c"

void main() {

    int cat_selected;
    printf("-----------------------CALCULATOR BUDDY v1.0-----------------------\n");
    printf("From basic math to complex physics problems - calculating made easy\n");
    printf("Select a category to display subcategories\n 1.Basic Arithmetic\n 2.Mathematics\n 3.Physics\n 4.Chemistry\n");
    scanf("%d", &cat_selected);

    switch (cat_selected)
    {
    case 1:
        //insert main() of basic arithmetic
        break;
    case 2:
        //insert main() of mathematic
        break;
    case 3:
        main_physics();
        break;
    case 4:
        main_chemistry();
        break;
    default:
        printf("Invalid selection. Program terminating");
        break;
    }
}