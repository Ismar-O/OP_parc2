#include<stdio.h>

double polynomialCalc(double);

int main(){
  double x;
  printf("Unesite vrijednost x: ");
  scanf("%lf", &x);
  printf("Rezultat polinoma je: %lf", polynomialCalc(x));
  return 0;
}

double polynomialCalc(double x){
  return 3*x*x*x*x*x + 2*x*x*x*x - 5*x*x*x - x*x + 7*x - 6;
}
