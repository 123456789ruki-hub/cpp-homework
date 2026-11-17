#include <stdio.h>
int main() {
    int c;
    int check=1;
    while((c=getchar())!=EOF){
        if(check==1&&c=='"'){printf("``");check=check*-1;}
        else if (check==-1&&c=='"'){printf("''");check=check*-1;}
        else{putchar(c);}
        
    }
    return 0;
}