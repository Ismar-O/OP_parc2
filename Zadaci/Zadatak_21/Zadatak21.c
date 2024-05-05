// Osnovi Programiranja , Parcijala 2 Vjezba2/Zadatak21 Mirsad Masic
#include<stdio.h>

void outputFib(int);
int recursiveFunction(int);

int main(){
  int n;
  printf("Broj clanova Fibonacijevog niza: ");
  scanf("%d", &n);
  outputFib(n);
  return 0;
}

void outputFib(int n){
  int i;
  for(i = 0; i < n; i++){
  	printf("%d. clan Fibonacijevog niza je: %d\n", i+1, recursiveFunction(i+1));
  }
}

int recursiveFunction(int x){
  if(x==1 || x==2)
    return 1;
  else
    return recursiveFunction(x-1) + recursiveFunction(x-2);
}
