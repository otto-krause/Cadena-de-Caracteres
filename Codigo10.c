#include <stdio.h>
#include <string.h>
int main(){
  char a[100] = "";
  gets(a);
  int len = strlen(a) -1;
  if(len < 2){
    printf("por lo menos 3 letras");
    return -1;
  }
  for(int i = 0; i < len/2; i++){
    if (a[i] != a[len - i]){
      printf("no es palíndromo\n");
      return 1;
    }
  }
  printf("es palíndromo\n");
  return 0;
}
