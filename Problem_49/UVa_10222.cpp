#include <stdio.h>

int main() {
    int a;
    char keyboard[]="`1234567890-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,./";
    while((a=getchar())!=EOF){
        int i=0;
       if(a>='A' && a<='Z'){a=a-'A'+'a';} 
      while(keyboard[i]!='\0'){
          if(keyboard[i]==a){if(i>=2){printf("%c",keyboard[i-2]);}break;}
          i++;}
          if(keyboard[i]=='\0'){putchar(a);}
          
    }
    
    return 0;
}