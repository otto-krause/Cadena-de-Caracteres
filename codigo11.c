#include <stdio.h>
#include <string.h>
int main(){
  char s[100];
  gets(s);
  int len = strlen(s) - 1;
  for(int i = 0; i <= len; i++){
    if(s[i] >= 65 && s[i] <= 90){
      s[i] = s[i] + 32;
    }
    else if(s[i] >= 97 && s[i]<= 122){
      s[i] = s[i] - 32;
    }
  }
  puts(s);
}
