#include<stdio.h>
#include<stdlib.h>

int main(){
  int *V = malloc(sizeof(int)*10);
  for(int i=0; i<10; i++){
    V[i] = 0;
  }
  V = calloc(10, sizeof(int));
  return 0;
}