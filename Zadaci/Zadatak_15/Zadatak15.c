#include<stdio.h>

void float_to_round(float *);

int main(){
  float f;
  printf("Unesite broj: ");
  scanf("%f", &f);
  float_to_round(&f);
  return 0;
}

void float_to_round(float *num){
  float temp = *num;
  while(*num >= 1)
  	--*num;
  float remainder = *num;
  if(remainder >= 0.5)
    temp += remainder;
  else
    temp -= remainder;
  printf("%.1f", temp);
}
