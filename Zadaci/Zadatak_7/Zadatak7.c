// Osnovi Programiranja , Parcijala 2 Vjezba2/Zadatak7 Mirsad Masic
#include<stdio.h>

int main(){
  int input, sum = 0;
  puts("Unesite broj:");
  scanf("%d", &input);
  int i;
  for(i = 1; i < input; i++){
  	if(input % i == 0){
  	  sum += i;
	}
  }
  if(sum == input && sum != 0)
    puts("Broj je savrsen!");
  else
    puts("Broj nije savrsen");
  return 0;
}
