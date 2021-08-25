#include <stdio.h>
const char* verificar(char a[]){
  if(a[0] >= 97 && a[0] <= 122)
      a[0] = a[0] - 32;
  return a;
}
int main(){
  char nombre[20] = "";
  int input, promedio, total;
  for(int i = 1; i <= 3; i++){
    printf("ingrese el nombre del alumno %d: ", i);
    promedio = 0;
    scanf("%s", nombre);
    for(int f = 1; f <= 5; f++){
      printf("ingrese la nota %d del alumno %s: ", f, verificar(nombre));
      scanf("%d", &input);
      promedio += input;
    }
    total += promedio/5;
    printf("el promedio del alumno %s es: %d\n", verificar(nombre), promedio/5);
  }
  printf("el promedio total de la clase es %d\n", total/3);
}
