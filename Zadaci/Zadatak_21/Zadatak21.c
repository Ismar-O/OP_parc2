// Osnovi Programiranja , Parcijala 2 Vjezba2/Zadatak21 Mirsad Masic
#include<stdio.h>

int recursiveFunction(int);

int main(){
  int n;
  printf("Unesite sumu n clanova Fibonacijevog niza: ");
  scanf("%d", &n);
  int result = recursiveFunction(n);
  printf("Suma %d clanova Fibonacijevog niza je: %d", n, result);
  return 0;
}

int recursiveFunction(int n){
  if(n==1 || n==2)
    return 1;
  else
    return recursiveFunction(n-1) + recursiveFunction(n-2);
}
