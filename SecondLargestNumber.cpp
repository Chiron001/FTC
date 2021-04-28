#include <stdio.h>

int main(void){
  int x=0,y,max=0, sec_max=0,a=0;

  printf("enter 5 random numbers you wanna enter: ");
  
  while(x<5){
    scanf("%d", &y);
    ++x;
    if(max < y){
      sec_max = y;
      a = max;
      max = sec_max; 
    }else if(a < y){
      a=y;
    }
  }

  printf("largest nbumber is %d\n", max);

  printf("second largest number is %d", a);
}
