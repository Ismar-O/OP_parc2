// Osnovi Programiranja , Parcijala 2 Vjezba2/Zadatak11 Mirsad Masic
#include<stdio.h>

int main(){
  auto int x, y=5;
  for(x = 1, y = 7; y > x; x+=2, y--){
    static int z;
    printf("%d\t%d\n", y++, ++z);
  }
}
