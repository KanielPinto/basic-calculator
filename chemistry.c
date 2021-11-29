#include <stdio.h>
#include <math.h>
#define R 8.314
#define N 6.022140857
#define LN_2 0.69314718056
#define BCC_CONST 2.309401076758
#define FCC_CONST 2.828427124746

//Function to calculate missing variable in osmotic pressure formula
void osmotic() {
    int to_find;
    float press, coef, ions, T, conc;
    printf("Choose variable to find \n 1.Osmotic Pressure\n 2.Osmotic coefficeient of solute\n 3.No.of ions\n 4.Temperature\n 5.Concentraion\n");
    scanf("%d", &to_find);

    switch (to_find)
    {
    case 1: printf("Enter osmotic coefficeient, concentration, no.of ions and temperature\n");
            scanf("%f %f %f %f", &coef, &conc, &ions, &T);
            press = coef * ions * T * conc * R;
            printf("Osmotic pressure = %.2f kPa", press);
            break;
    case 2: printf("Enter osmotic pressure, concentration, no.of ions and temperature\n");
            scanf("%f %f %f %f", &press, &conc, &ions, &T);
            coef = press/(ions * T * R * conc);
            printf("Osmotic coefficient = %.2f", coef);
            break;
    case 3: printf("Enter osmotic pressure, concentration, osmotic coeffiecient and temperature\n");
            scanf("%f %f %f %f", &press, &conc, &coef, &T);
            ions = press/(coef * T * R * conc);
            printf("Number of ions = %.2f", ions);
            break;        
    case 4: printf("Enter osmotic pressure, concentration, osmotic coeffiecient and no.of ions\n");
            scanf("%f %f %f %f", &press, &conc, &coef, &ions);
            T = press/(coef * ions * R * conc);
            printf("Temperature = %.2f K", T);
            break;     
    case 5: printf("Enter osmotic pressure, temperature, osmotic coeffiecient and no.of ions\n");
            scanf("%f %f %f %f", &press, &T, &coef, &ions);
            conc = press/(coef * ions * R * T);
            printf("Concentration = %.2f mol/liter", conc);
            break;          
    }
}

//Function to calculate missing variable in molality formula
void molality() {
    int to_find;
    float molality, solute, solvent;
    printf("Choose variable to find \n 1.Molality \n 2.Mass of Solute\n 3.Moles of Solvent\n");
    scanf("%d", &to_find);

    switch (to_find)
    {
    case 1: printf("Enter moles of solvent and mass of solute\n");
            scanf("%f %f", &solvent, &solute);
            molality = solute/solvent;
            printf("molality = %.2f mol/kg", molality);
            break;
    case 2: printf("Enter molality and mass of solute\n");
            scanf("%f %f", &molality, &solute);
            solvent = solute/molality;
            printf("solute = %.2f kg", solvent);
            break;
    case 3: printf("Enter molality and moles of solvent\n");
            scanf("%f %f", &molality, &solvent);
            solute = molality * solvent;
            printf("solvent = %.2f mol", solute);
            break;
    }
}

//Function to calculate missing variable in half life formula
void half_life() {
    int to_find;
    float haf_life, decay_const;
    printf("Choose variable to find \n 1.Half life \n 2.Decay Constant\n");
    scanf("%d", &to_find);

    switch (to_find)
    {
    case 1: printf("Enter decay constant\n");
            scanf("%f", &decay_const);
            haf_life = LN_2/decay_const;
            printf("Half Life = %.6f s", haf_life);
            break;
    case 2: printf("Enter half life\n");
            scanf("%f", &haf_life);
            decay_const = LN_2/haf_life;
            printf("Decay Constant = %.6f ", decay_const);
            break;
    }
}

//Function to calculate missing variable in Boyle's law formula
void boyle() {
    int to_find;
    float p1,p2,v1,v2;
    printf("Choose variable to find \n 1.Intital Pressure (p1) \n 2.Final pressure (p2)\n 3.Initial Volume (v1)\n 4.Final volume (v2)\n");
    scanf("%d", &to_find);

    switch (to_find)
    {
    case 1: printf("Enter p2, v1, v2\n");
            scanf("%f %f %f", &p2, &v1, &v2);
            p1 = p2 * v2 / v1;
            printf("Initial pressure = %.2f Pa", p1);
            break;
    case 2: printf("Enter p1, v1, v2\n");
            scanf("%f %f %f", &p1, &v1, &v2);
            p2 = p1 * v1 / v2;
            printf("Final pressure = %.2f Pa", p2);
            break;
    case 3: printf("Enter p1, p2, v2\n");
            scanf("%f %f %f", &p1, &p2, &v2);
            v1 = p2 * v2 / p1;
            printf("Initial volume = %.2f m^3", v1);
            break;
    case 4: printf("Enter p1, p2, v1\n");
            scanf("%f %f %f", &p1, &p2, &v1);
            v2 = p1 * v1 / p2;
            printf("Final volume = %.2f m^3", v2);
            break;
    }
}

//Function to calculate missing variable in Charles law formula
void charles() {
    int to_find;
    float t1,t2,v1,v2;
    printf("Choose variable to find \n 1.Intital Temperature (t1) \n 2.Final Temperature (t2)\n 3.Initial Volume (v1)\n 4.Final volume (v2)\n");
    scanf("%d", &to_find);

    switch (to_find)
    {
    case 1: printf("Enter t2, v1, v2\n");
            scanf("%f %f %f", &t2, &v1, &v2);
            t1 = v1 * t2 /v2;
            printf("Initial Temperature = %.2f K", t1);
            break;
    case 2: printf("Enter t1, v1, v2\n");
            scanf("%f %f %f", &t1, &v1, &v2);
            t2 = v2 * t1/ v1;
            printf("Final Temperature = %.2f K", t2);
            break;
    case 3: printf("Enter t1, t2, v2\n");
            scanf("%f %f %f", &t1, &t2, &v2);
            v1 = v2 * t1 / t2;
            printf("Initial volume = %.2f m^3", v1);
            break;
    case 4: printf("Enter t1, t2, v1\n");
            scanf("%f %f %f", &t1, &t2, &v1);
            v2 = v1 * t2 /t1;
            printf("Final volume = %.2f m^3", v2);
            break;
    }
}

//Function to calculate missing variable in Gay Lussac's law formula
void lussac() {
    int to_find;
    float p1,p2,t1,t2;
    printf("Choose variable to find \n 1.Intital Pressure (p1) \n 2.Final pressure (p2)\n 3.Initial temperature (t1)\n 4.Final temperature (t2)\n");
    scanf("%d", &to_find);

    switch (to_find)
    {
    case 1: printf("Enter p2, t1, t2\n");
            scanf("%f %f %f", &p2, &t1, &t2);
            p1 = p2 * t1 / t2;
            printf("Initial pressure = %.2f Pa", p1);
            break;
    case 2: printf("Enter p1, t1, t2\n");
            scanf("%f %f %f", &p1, &t1, &t2);
            p2 = p1 * t2 / t1;
            printf("Final pressure = %.2f Pa", p2);
            break;
    case 3: printf("Enter p1, p2, t2\n");
            scanf("%f %f %f", &p1, &p2, &t2);
            t1 = p1 * t2 / p2;
            printf("Initial temperature = %.2f K", t1);
            break;
    case 4: printf("Enter p1, p2, t1\n");
            scanf("%f %f %f", &p1, &p2, &t1);
            t2 = p2 * t1 / p1;
            printf("Final temperature = %.2f K", t2);
            break;
    }
}

//Function to calculate missing variable in ideal gas equation
void ideal() {
    int to_find;
    float p, v, n ,T;
    printf("Choose variable to find \n 1.Pressure\n 2.Volume\n 3.Amount of substance\n 4.Temperature\n ");
    scanf("%d", &to_find);

    switch (to_find)
    {
    case 1: printf("Enter volume, Amount of substance and temperature\n");
            scanf("%f %f %f", &v, &n, &T);
            p =  n * T * R / v;
            printf("Pressure = %.2f Pa", p);
            break;
    case 2: printf("Enter pressure, Amount of substance and temperature\n");
            scanf("%f %f %f", &p, &n, &T);
            v =  n * T * R / p;
            printf("Volume = %.2f m^3", v);
            break;
    case 3: printf("Enter Pressure, volume and temperature\n");
            scanf("%f %f %f", &p, &v, &T);
            n = p * v / (R*T);
            printf("Amount of substance = %.2f mol", n);
            break;      
    case 4: printf("Enter Pressure, volume and amount of substance\n");
            scanf("%f %f %f", &p, &v, &n);
            T = p * v / (n * R);
            printf("Temperature = %.2f K", T);
            break;            
    }
}

//Function to calculate density of unit cell
void density() {
    int to_find;
    float M, Z, d, b, a;
    printf("Enter Rank, molar mass and edge length\n");
    scanf("%f %f %f", &Z, &M, &a);
    b = pow(a,3);
    d = M * Z / (N * b);
    printf("Density = %.8f * 10^-23 kg/m^3", d);
    
}

//Function to calculate missing variable in Edge Length - Radius for simple cubic unit cell
void scc() {
    int to_find;
    float a, r;
    printf("Choose variable to find \n 1.Edge length\n 2.Radius\n");
    scanf("%d", &to_find);

    switch (to_find)
    {
    case 1: printf("Enter radius\n");
            scanf("%f", &r);
            a = 2 * r;
            printf("Edge length = %.4f m", a);
            break;
    case 2: printf("Enter edge length\n");
            scanf("%f", &a);
            r = a/2;
            printf("Radius = %.4f m", r);
            break;
    }
}

//Function to calculate missing variable in Edge Length - Radius for body centered unit cell
void bcc() {
    int to_find;
    float a, r;
    printf("Choose variable to find \n 1.Edge length\n 2.Radius\n");
    scanf("%d", &to_find);

    switch (to_find)
    {
    case 1: printf("Enter radius\n");
            scanf("%f", &r);
            a = BCC_CONST * r;
            printf("Edge length = %.4f m", a);
            break;
    case 2: printf("Enter edge length\n");
            scanf("%f", &a);
            r = a/BCC_CONST;
            printf("Radius = %.4f m", r);
            break;
    }
}

//Function to calculate missing variable in Edge Length - Radius for face centered unit cell
void fcc() {
    int to_find;
    float a, r;
    printf("Choose variable to find \n 1.Edge length\n 2.Radius\n");
    scanf("%d", &to_find);

    switch (to_find)
    {
    case 1: printf("Enter radius\n");
            scanf("%f", &r);
            a = FCC_CONST * r;
            printf("Edge length = %.4f m", a);
            break;
    case 2: printf("Enter edge length\n");
            scanf("%f", &a);
            r = a/FCC_CONST;
            printf("Radius = %.4f m", r);
            break;
    }
}

void main () {
    int form_no, exec_complete;
    int repeat;
    printf("Chemistry Calculator\n Choose a formula (Use SI unit during all inputs unless specified)\n 1. Osmotic pressure equation\n 2. Molality\n 3. Half Life\n 4. Boyle's law\n 5. Charles Law\n 6. Gay Lussac's law\n 7. Ideal Gas equation\n 8. Density of unit cell\n 9. Edge Length - Radius for simple cubic unit cell \n 10. Edge Length - Radius for body centered unit cell\n 11. Edge Length - Radius for face centered unit cell\n");
    scanf("%d", &form_no);

    //execute function according to user input
    switch (form_no)
    {
    case 1:
        osmotic();
        exec_complete = 1;
        break;
    case 2:
        molality();
        exec_complete = 1;
        break;
    case 3:
        half_life();
        exec_complete = 1;
        break;
    case 4:
        boyle();
        exec_complete = 1;
        break;
    case 5:
        charles();
        exec_complete = 1;
        break;
    case 6:
        lussac();
        exec_complete = 1;
        break;
    case 7:
        ideal();
        exec_complete = 1;
        break;
    case 8:
        density();
        exec_complete = 1;
        break;
    case 9:
        scc();
        exec_complete = 1;
        break;
    case 10:
        bcc();
        exec_complete = 1;
        break;
    case 11:
        fcc();
        exec_complete = 1;
        break;
    default:
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
                main(); //recall main function to perform calculations again
        }
        else {
                printf("Thank you for using this calculator. Hope to see you soon!");
        }
    }
}