// Osnovi Programiranja , Parcijala 2 Vjezba2/Zadatak12_b Mirsad Masic
#include<stdio.h>

int main(){
  int i;
  float c = 13.2;
  int x = c;
  for(i=1; i<x; i+=3){
    printf("%.1f\t", c);
    c-=0.9;
  }
}
