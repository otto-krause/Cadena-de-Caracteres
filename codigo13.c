#include <stdio.h>
#include <string.h>
int main(){
  char v[5] = "aeiou";
  char texto[100] = "";
  int cantidad = 0;
  gets(texto);
  int len = strlen(texto) - 1;
  for(int i = 0; i < 5; i++){
    cantidad = 0;
    for(int f = 0; f <= len; f++){
      if(texto[f] == v[i])
	cantidad++;
    }
    printf("cantidad de %c: %d\n", v[i], cantidad);
  }
}
