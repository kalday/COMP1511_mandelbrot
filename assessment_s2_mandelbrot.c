// Assessment: Mandelbrot Series 
// Due Date: 9 September 2018, Semester 2
// Kyra Alday (z5208628)
// Tutor: Emily Chen (Wednesday 10:00 - 12:00)

#include <stdio.h>
#include <mandelbrot.h>
#include <pixelColor.h>

#include <mandelbrot.c>
#include <pixelColor.c>
#include <server.c>
#include <drawTile.c>

// VERSION 1
// declare and initialise variables    
int steps, real, imaginary;
struct complex w;
int w_value;

// while loop for calculating the Mandelbrot set 

// intialise variables
w_value = w_modulus(w_value);
steps = 0;


if (w_value > 0) {

    w = w_modulus(w_value);

    while (w_value < 2 && steps <= 255) {                                  
            // pass through the testing
            w = (w_value*w_value) + c;         
               
            // call function to calculate modulus
            printf("W modulus is: %d\n", w_value);
                        
        steps++;                 
                         
        // REMOVE PRINTF STATEMENT EVENTUALLY
        printf("Steps: %d\n", steps);
            
        return steps;
        
    } 

} 

// part of the Mandelbrot series 
else if (w_value >= 2 || steps > 255) {
    
    printf("I'M PART OF MANDELBROT :D.\n");
        
    return 0;
    
}
    
    
// not part of the Mandelbrot series
else if (steps > 255) {
    // REMOVE PRINTF STATEMENT EVENTUALLY 
    steps = 0;

    printf("The steps count was greater than 255.\n");
    printf("I reset the steps.\n");
        
    return steps;
    
}

// Add your own functions here.
// Remember to make them static.

/* int w_modulus(int w_value) {

    // initialise and declare variables
    struct complex w;
    int real, imaginary;
    int w_value;
    
    // calculate absolute value of w
    real = w.real*w.real;    
    imaginary = w.imaginary*w.imaginary;
    
    w_value = sqrt(real + imaginary);

    return w_value;

} */

re 
im


int mandel[MAX_STEPS];
int i = 0;
int w_real[MAX_STEPS], w_imaginary[MAX_STEPS];


w_real[0] = 0;
w_imaginary[0] = 0;

// calculate the modulus of c
mod_c = sqrt(c.re*c.re+c.im*c.im);


while (steps < MAX_STEPS && i < MAX_STEPS) {
           
    // changing the modulus of w
    mandel[i] = sqrt(w_real[i]*w_real[i] + w_imaginary[i]*w_imaginary[i]);

    if (mandel[i]*mandel[i] + mod_c < 2) {
        
        mandel[i+1] = mandel[i]*mandel[i] + mod_c;
        
        w_real[i+1] = w_real[i]+c.re;
        w_imaginary[i+1] = w_imaginary[i]+c.im;
    
        steps++;
        i++;
    
    } 
    
    else {
    
        steps = NO_ESCAPE;
    
    }        

	return steps;

}
    
