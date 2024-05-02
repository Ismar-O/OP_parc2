// Osnovi Programiranja , Parcijala 2 Vjezba2/Zadatak20 Mirsad Masic
#include<stdio.h>

int checkByRecursion(int, int);

int main(){
  int num;
  printf("Unesite broj: ");
  scanf("%d", &num);
  int result = checkByRecursion(num, num / 2);
  if(result)
    printf("Broj %d je prost", num);
  else
    printf("Broj %d nije prost", num);
  return 0;
}

int checkByRecursion(int a, int i){
  if(a < 2)
    return 0;
  if(i == 1)
    return 1;
  if(a % i == 0)
    return 0;
  return checkByRecursion(a, i-1);
}
