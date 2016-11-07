/*Some-Kid-In-Physics
  Falling Ball Simulation (through air)
  Made just for fun, I guess...*/

#include <stdio.h>
#include <stdlib.h>

int main() { /* Calling variables for calculation */
  char choice;
  long double pi=3.14159263;
  float x;
  long double dx;
  long double v;
  float C=0.47;
  long double a;
  float g=9.81;
  double p=1.225;
  double m;
  double r;
  double t;
  long double Fg;
  long double Fd;
  long double A;
  long double dt;
  
  system("clear"); /* Make it system("cls") for Windows/DOS */
  printf("What's the mass of the ball? (in kilograms)\n");
  scanf(" %lf",&m); /* User input for mass */
  printf("What's the radius of the ball? (in meters)\n");
  scanf(" %lf",&r); /* User input for radius */
  A=pi*(r*r); /* Attempt to make cross-sectional area, needs review */
  printf("Finally, how long to run the simulation?(in seconds)\n");
  scanf(" %lf",&t);

  v=0;
  x=0;
  for(dt=0.01;dt<t;dt=dt+0.01) { /* Running Calculation */
    Fd=0.5*p*(v*v)*C*A;
    Fg=m*g;
    a=(Fg-Fd)/m;
    v=v+(a*.01);
    x=x+(v*.01);
  }

  printf("The ball has fallen an estimated %.3f meters.\nThe ball's velocity is esitmated as %.3lf meters per second",x,v); /*Output result*/
}
