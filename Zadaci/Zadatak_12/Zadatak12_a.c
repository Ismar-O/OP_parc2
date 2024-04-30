// Osnovi Programiranja , Parcijala 2 Vjezba2/Zadatak12_a Mirsad Masic
#include <stdio.h>

int a = 13;
int b = 7;
void main() {
  int a = 15;
  for (; b < a; ++b, --a) {
    static int a = 3;
    a--;
    printf("%d\n", a);
  }
  printf("%d", a);
}
