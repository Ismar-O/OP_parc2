#include<stdio.h>

int main(){
  int input, average, biggest = 0, sum = 0, i = 0;
  do{
    printf("Unesite broj: ");
    scanf("%d", &input);
    if(input % 2 != 0){
      sum += input;
      if(input > biggest)
        biggest = input;
      i++;    
    }
  } while(input != 0);
  if(sum > 0){
    average = sum / i;
    printf("Srednja vrijednost unesenih neparnih brojeva je: %d\n", average);
    printf("Najveci uneseni neparni broj je %d\n", biggest);
  }
  else
    puts("Nije unesen nijedan neparan broj");
  return 0;
}
