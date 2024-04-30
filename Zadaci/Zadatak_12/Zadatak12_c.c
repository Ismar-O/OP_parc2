// Osnovi Programiranja , Parcijala 2 Vjezba2/Zadatak12_c Mirsad Masic
#include<stdio.h>

int main(){
  float c = 10.0;
  do{
    c -= 1.8;
    printf("%3.2f\n", c);
    c += 0.2;
  } while(c > 5.2);
}
