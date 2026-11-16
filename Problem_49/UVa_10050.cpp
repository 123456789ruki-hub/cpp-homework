#include <stdio.h>

int main() {
    int cases;
    scanf("%d",&cases);
    for(int i=1;i<=cases;i++){
        int days;
        int partynum;
        int day[3651]={0};
        int roop;
        int count=0;
        scanf("%d %d",&days,&partynum);
        for(int j=1;j<=partynum;j++){
            scanf("%d",&roop);
            for(int k=1;k<=days;k++){
                if(k%roop==0&&k%7!=6&&k%7!=0){day[k]++;}
                else if(k>days){break;}}
            }
            for(int l=1;l<=days;l++){if(day[l]>0){count++;}}
            printf("%d\n",count);
        }
        
    
    return 0;
}