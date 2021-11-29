#include <stdio.h>
#include <math.h>
#define SPEED_OF_LIGHT 299792.0
#define WIEN_CONSTANT 2.8977719

//Function to calculate missing variable in Newton's First law
void n_f_law() {
    int to_find;
    float init, final, time, acc;
    printf("Choose variable to find \n 1.Intial Speed\n 2.Final speed\n 3.Time\n 4.Acceleration\n");
    scanf("%d", &to_find);

    switch (to_find)
    {
    case 1: printf("Enter final speed, time and acceleration\n");
            scanf("%f %f %f", &final, &time, &acc);
            init = final - (acc*time);
            printf("Intial speed = %.2f m/s", init);
            break;
    case 2: printf("Enter intial speed, time and acceleration\n");
            scanf("%f %f %f", &init, &time, &acc);
            final = init + (acc*time);
            printf("Final speed = %.2f m/s", final);
            break;
    case 3: printf("Enter intial speed, final speed and acceleration\n");
            scanf("%f %f %f", &init, &final, &acc);
            time = (final - init) / acc;
            printf("Time = %.2f s", time);
            break;
    case 4: printf("Enter intial speed, final speed and time\n");
            scanf("%f %f %f", &init, &final, &time);
            acc = (final - init) / time;
            printf("Acceleration = %.2f m/s^2", acc);
            break;
    }

}

//Function to calculate missing variable in Newton's Second law
void n_s_law(){
    int to_find;
    float init, dist, time, acc;
    printf("Choose variable to find \n 1.Intial Speed\n 2.Distance Travelled\n 3.Acceleration\n");
    scanf("%d", &to_find);

    switch (to_find)
    {
    case 1: printf("Enter distance, time and acceleration\n");
            scanf("%f %f %f", &dist, &time, &acc);
            init = (dist - (acc*time*time/2))/time;
            printf("Intial speed = %.2f m/s", init);
            break;
    case 2: printf("Enter intial speed, time and acceleration\n");
            scanf("%f %f %f", &init, &time, &acc);
            dist = init*time + (acc*time*time/2);
            printf("Distance = %.2f m", dist);
            break;
    case 3: printf("Enter intial speed, distance and time\n");
            scanf("%f %f %f", &init, &dist, &time);
            acc = 2 * (dist - init * time) / (time*time);
            printf("Acceleration = %.2f m/s^2", acc);
            break;
    }
}

//Function to calculate missing variable in Newton's Third law
void n_t_law(){
    int to_find;
    float force, mass, acc;
    printf("Choose variable to find \n 1.Force\n 2.Mass\n 3.Acceleration\n");
    scanf("%d", &to_find);

    switch (to_find)
    {
    case 1: printf("Enter mass and acceleration\n");
            scanf("%f %f", &mass, &acc);
            force = mass * acc;
            printf("Force = %.2f N", force);
            break;
    case 2: printf("Enter force and acceleration\n");
            scanf("%f %f", &force, &acc);
            mass = force / acc;
            printf("Mass = %.2f kg", mass);
            break;
    case 3: printf("Enter force and mass\n");
            scanf("%f %f", &force, &mass);
            acc = force / mass;
            printf("Acceleration = %.2f m/s^2", acc);
            break;
    }
}

//Function to calculate missing variable in Relativity equation
void relativity() {
    int to_find;
    float c, energy, mass;
    c = SPEED_OF_LIGHT*SPEED_OF_LIGHT; //speed of light squared
    printf("Choose variable to find \n 1.Energy \n 2.Mass\n");
    scanf("%d", &to_find);

    switch (to_find)
    {
    case 1: printf("Enter mass in kg\n");
            scanf("%f", &mass);
            energy = mass * c;
            printf("Energy = %.2f MJ", energy);
            break;
    case 2: printf("Enter energy in mega joules\n");
            scanf("%f", &energy);
            mass = energy/c;
            printf("Mass = %.2f kg", mass);
            break;
    }
}

//Function to calculate missing variable in wavelength formula
void wavelength() {
    int to_find;
    float wavelength, velocity, freq;
    printf("Choose variable to find \n 1.Wavelength \n 2.Velocity\n 3.Frequency\n");
    scanf("%d", &to_find);

    switch (to_find)
    {
    case 1: printf("Enter velocity and frequency\n");
            scanf("%f %f", &velocity, &freq);
            wavelength = velocity/freq;
            printf("Wavelength = %.2f m", wavelength);
            break;
    case 2: printf("Enter wavelength and frequency\n");
            scanf("%f %f", &wavelength, &freq);
            velocity = wavelength * freq;
            printf("Velocity = %.2f m/s", velocity);
            break;
    case 3: printf("Enter wavelength and velocity\n");
            scanf("%f %f", &wavelength, &velocity);
            freq = velocity/wavelength;
            printf("Frequency = %.2f m/s", freq);
            break;
    }
}

//Function to calculate missing variable in velocity formula
void velocity() {
    int to_find;
    float velocity, distance, time;
    printf("Choose variable to find \n 1.Velocity \n 2.Distance\n 3.Time\n");
    scanf("%d", &to_find);

    switch (to_find)
    {
    case 1: printf("Enter time and distance\n");
            scanf("%f %f", &time, &distance);
            velocity = distance/time;
            printf("Velocity = %.2f m/s", velocity);
            break;
    case 2: printf("Enter velocity and distance\n");
            scanf("%f %f", &velocity, &distance);
            time = distance/velocity;
            printf("Distance = %.2f s", time);
            break;
    case 3: printf("Enter velocity and time\n");
            scanf("%f %f", &velocity, &time);
            distance = velocity * time;
            printf("Time = %.2f m", distance);
            break;
    }
}

//Function to calculate missing variable in Brewster's angle formula
void brew() {
    int to_find;
    float brew, n1, n2;
    printf("Choose variable to find \n 1.Brewster's angle \n 2.Refractive index of second medium\n 3.Refractive index of first medium\n");
    scanf("%d", &to_find);

    switch (to_find)
    {
    case 1: printf("Enter Refractive index of first medium and second medium\n");
            scanf("%f %f", &n2, &n1);
            brew = atan(n1/n2);
            printf("Brewster's angle = %.4f radians", brew);
            break;
    case 2: printf("Enter brew and n1\n");
            scanf("%f %f", &brew, &n1);
            n2 = n1/tan(brew);
            printf("Refractive index of second medium = %.2f ", n2);
            break;
    case 3: printf("Enter brew and n2\n");
            scanf("%f %f", &brew, &n2);
            n1 = n2 * tan(brew);
            printf("Refractive index of first medium  = %.2f ", n1);
            break;
    }
}

//Function to calculate missing variable in Work formula
void work() {
    int to_find;
    float work, force, disp;
    printf("Choose variable to find \n 1.Work \n 2.Force\n 3.Displacement\n");
    scanf("%d", &to_find);

    switch (to_find)
    {
    case 1: printf("Enter force and displacement\n");
            scanf("%f %f", &force, &disp);
            work = force * disp;
            printf("Work = %.2f J", work);
            break;
    case 2: printf("Enter force and work\n");
            scanf("%f %f", &force, &work);
            disp = work / force;
            printf("Displacement = %.2f m", disp);
            break;
    case 3: printf("Enter work and displacement\n");
            scanf("%f %f", &work, &disp);
            force = work/disp;
            printf("Force = %.2f N", force);
            break;
    }   
}

//Function to calculate missing variable in Dipole formula
void dipole() {
    float freq, L, l, wavelength, haf_wav, qtr_wav;
    printf("Enter frequency in Mhz\n");
    scanf("%f", &freq);
    L = 468/freq; 
    l = L/2;
    wavelength = SPEED_OF_LIGHT/freq;
    haf_wav = wavelength/2;
    qtr_wav = wavelength/4;
    printf("Antenna Length = %.2f ft\n", L);
    printf("Dipole leg Length = %.2f ft\n", l);
    printf("Wavelength = %.2f mm\n", wavelength);
    printf("Half Wavelength = %.2f mm\n", haf_wav);
    printf("Quarter Wavelength = %.2f mm\n", qtr_wav);
}

//Function to calculate missing variable in Wien's law formula
void wien() {
    int to_find;
    float temp, wavelength;
    printf("Choose variable to find \n 1.Peak Wavelength \n 2.Absolute temperature of black body\n");
    scanf("%d", &to_find);

    switch (to_find)
    {
    case 1: printf("Enter temperature of black body in Kelvin\n");
            scanf("%f",&temp);
            wavelength = WIEN_CONSTANT/temp * 1000000;
            printf("Peak Wavelength = %.2f nm", wavelength);
            break;
    case 2: printf("Enter wavelength in nm\n");
            scanf("%f",&wavelength);
            temp = WIEN_CONSTANT/wavelength * 1000000;
            printf("Temperature of black body = %.2f K", temp);
            break;
    }
}

void main () {
    int form_no, exec_complete;
    int repeat;
    printf("Physics Calculator\n Choose a formula (Use SI unit during all inputs unless specified)\n 1. Newton's first law\n 2. Newton's second law\n 3. Newton's third law\n 4. Einstein's Relativity equation\n 5. Wavelength\n 6. Simple Velocity\n 7. Brewster's Angle\n 8. Work\n 9. Dipole antenna length and wavelength calculator\n 10. Wien's law\n");
    scanf("%d", &form_no);

    switch (form_no)
    {
    case 1:
        n_f_law();
        exec_complete = 1;
        break;
    case 2:
        n_s_law();
        exec_complete = 1;
        break;
    case 3:
        n_t_law();
        exec_complete = 1;
        break;
    case 4:
        relativity();
        exec_complete = 1;
        break;
    case 5:
        wavelength();
        exec_complete = 1;
        break;
    case 6:
        velocity();
        exec_complete = 1;
        break;
    case 7:
        brew();
        exec_complete = 1;
        break;
    case 8:
        work();
        exec_complete = 1;
        break;
    case 9:
        dipole();
        exec_complete = 1;
        break;
    case 10:
        wien();
        exec_complete = 1;
        break;
    default:
        exec_complete = 0;
        break;
    }
    
    if (exec_complete == 1)
    {    
        printf("\nWould you like to calculate another value?\n");
        scanf("%d", &repeat);

        if (repeat == 1)
        {
                main();
        }
        else {
                printf("Thank you for using this calculator. Hope to see you soon!");
        }
    }
}