#include <stdio.h>
#include <math.h>


int main() {
  double A = sqrt(9);
  double B = pow(3, 2);
  int C = round(3.45);
  int D = ceil(3.14);
  int E = floor(3.14);
  double F = fabs(-100);
  double G = log(3);
  double H = sin(45);
  double I = cos(90);
  double J = tan(60);

  printf("%.0lf", A);
  printf("\n%.0lf", B);
  printf("\n%d", C);
  printf("\n%d", D);
  printf("\n%d", E);
  printf("\n%lf", F);
  printf("\n%lf", G);
  printf("\n%lf", H);
  printf("\n%lf", I);
  printf("\n%lf", J);

  return 0;
}