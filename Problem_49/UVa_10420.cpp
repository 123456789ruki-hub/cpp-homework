#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d",&n);
    char store[2000][100];
    char a[76];
    int number[2000]={0};
    int count=0;
    int c;
    
    for(int k=1;k<=n;k++){
    scanf("%s",a);
          while((c=getchar())!='\n'&&c!=EOF);
          int found=0;
        for(int i=0;i<count;i++){if(strcmp(store[i],a)==0){found=1; number[i]++;break;}}
        if(found==0){strcpy(store[count],a);number[count]=1;count++;}
        }
        
    for(int j=0;j<count-1;j++){
    for(int l=0;l<count-1-j;l++){
        if(strcmp(store[l],store[l+1])>0){

            char temper[100];
            strcpy(temper,store[l]);
            strcpy(store[l],store[l+1]);
            strcpy(store[l+1],temper);

            int temp=number[l];
            number[l]=number[l+1];
            number[l+1]=temp;
        }
        }
        }
    
    for(int m=0;m<count;m++){
    printf("%s %d\n",store[m],number[m]);
    }
    
        
    return 0;
}