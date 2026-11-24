#include <stdio.h>
#include <string.h>

int calculate(int a){
    int b=0;
    while(a>0){b=b+a%10;a=a/10;}
      return b;}
    

int main() {
   
    char a[1001];
    while(1){
         int sum=0;
         int degree=1;
     scanf("%s",a);
    if(strcmp(a,"0")==0){break;}
     int length=strlen(a);
    for(int i=0;i<length;i++){sum=sum+a[i]-'0';}
    if(sum%9!=0){printf("%s is not a multiple of 9.\n",a);}
    else{while(sum!=9){sum=calculate(sum);degree++;}}
    if(sum%9==0)printf("%s is a multiple of 9 and has 9-degree %d.\n",a,degree);
    }
    
    return 0;
}