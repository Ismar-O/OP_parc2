// Osnovi Programiranja , Parcijala 2 Vjezba2/Zadatak13 Mirsad Masic
#include<stdio.h>

int binaryConvert(int);

int main(){
  int decimalNumber;
  puts("Unesite broj za pretvorbu");
  scanf("%d", &decimalNumber);
  int binaryNumber = binaryConvert(decimalNumber);
  printf("%d", binaryNumber);
  return 0;
}

int binaryConvert(int dec){
  int position = 1, bin = 0;
  do{
  	bin += (dec % 2) * position;
  	dec /= 2;
  	position *= 10;
  } while(dec > 0);
  return bin;
}
