// Osnovi Programiranja , Parcijala 2 Vjezba2/Zadatak23 Mirsad Masic
#include<stdio.h>

void swapValue(int*, int*);

int main(){
  int a, b;
  printf("Unesite broj a, zatim broj b: ");
  scanf("%d %d", &a, &b);
  printf("Vrijednost broja a prije zamjene je: %d\nVrijednost broja b prije zamjene je: %d\n", a, b);
  swapValue(&a, &b);
  printf("Vrijednost broja a nakon zamjene je: %d\nVrijednost broja b nakon zamjene je: %d\n", a, b);
  return 0;
}

void swapValue(int *x, int *y){
  int temp = *x;
  *x = *y;
  *y = temp;
}
