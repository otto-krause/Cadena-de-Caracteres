#include<stdio.h>
#include <string.h>
int main(){
  char a[100] = "";
  gets(a);
  int s = strlen(a);
  for(int i = 1; i <= s; i++){
    printf("%c", a[s-i]);
  }
  printf("\n");
}
