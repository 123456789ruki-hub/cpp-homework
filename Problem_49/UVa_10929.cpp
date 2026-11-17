#include <stdio.h>
#include <string.h>
int main() {
    char a[1005];
    while(scanf("%s",a)!=EOF){
        if(strlen(a)==1&&a[0]=='0'){break;}
        int length=strlen(a);
        int sum_even=0;
        int sum_odd=0;
        for(int i=0;i<length;i++){
            int number=a[i]-'0';
            if(i%2==0){sum_even=sum_even+number;}
            else{sum_odd=sum_odd+number;}
        }
        
        if((sum_even-sum_odd)%11==0){printf("%s is a multiple of 11.\n",a);}
        else{printf("%s is not a multiple of 11.\n",a);}
    }
    return 0;
}