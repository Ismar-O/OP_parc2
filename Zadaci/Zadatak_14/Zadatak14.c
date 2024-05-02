// Osnovi Programiranja , Parcijala 2 Vjezba2/Zadatak14 Mirsad Masic
#include<stdio.h>

int check(int, int, int);

int main(){
  int x, y, n;
  puts("Unesite dva broja, zatim gornju granicu:");
  scanf("%d %d %d", &x, &y, &n);
  int result = check(x, y, n);
  if(result)
    puts("Brojevi se nalaze u odgovarajucim granicama.");
  else
    puts("Brojevi se ne nalaze u odgovarajucim granicama.");
}

int check(int x, int y, int n){
  return x >= 0 && x <= n-1 && y >= 0 && y <= n-1;
}
