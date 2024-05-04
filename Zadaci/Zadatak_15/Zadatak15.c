// Osnovi Programiranja , Parcijala 2 Vjezba2 / Zadatak15 Mirsad Masic
#include<stdio.h>

void float_to_round(float *);

int main(){
  float f;
  printf("Unesite broj: ");
  scanf("%f", &f);
  float_to_round(&f);
  printf("%.1f", f);
  return 0;
}

void float_to_round(float *num){
  float temp = *num;
  float remainder;
  if(temp > 0){
    while(temp >= 1)
  	  --temp;
    remainder = temp;
    if(remainder >= 0.5)
      *num += 1 - remainder;
    else
      *num -= remainder;
  } else{
  	while(temp <= -1)
  	  ++temp;
  	remainder = temp;
  	if(remainder <= -0.5)
      *num -= 1 + remainder;
    else
      *num -= remainder;
  }
}
