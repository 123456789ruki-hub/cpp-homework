#include <stdio.h>
#include <string.h>
int main() {
    int lines;
    int count=0;
    scanf("%d",&lines);
    getchar();
    int a[26]={0};
    int c=0;
    while(1){
        c=getchar();
        if(c=='\n'){count++;}
        if(c>='a'&&c<='z'){a[c-'a']++;}
        if(c>='A'&&c<='Z'){a[c-'A']++;}
        if(count==lines){break;}}     
    for(int i=0;i<26;i++){
        int max=0;
        int d;
        for(int j=0;j<26;j++){if(max<a[j]){max=a[j];d=j;}}
        if(max>0){ a[d]=0;printf("%c %d\n",'A'+d,max); } 
        }
        
    return 0;
}