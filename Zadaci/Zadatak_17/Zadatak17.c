// Osnovi Programiranja , Parcijala 2 Vjezba2 / Zadatak17 Mirsad Masic
#include<stdio.h>

void outputNumber(double, char);

int main(){
  double num;
  char c;
  puts("Unesite realan broj i karakter:");
  scanf("%lf %c", &num, &c);
  outputNumber(num, c);
  return 0;
}

void outputNumber(double num, char c){
  if(c >= 'a' && c <= 'z' || c >= 'A'  && 3c <= 'Z')
    printf("%.2lf", num);
  else
    printf("%.1lf", num);
}
