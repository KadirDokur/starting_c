#include<stdio.h>
/*
1   2   3   4   5
6   7   8   9   10
11  12  13  14  15
+_________________
18  21  24  27  30
*/
int main(){
    int matris[3][5];
    int i,j,sum;
    for(i = 0;i < 3;i++){
        for(j=0;j<5;j++){
            printf("%d.satirin %d.degerini giriniz: ",i+1,j+1);
            scanf("%d",&matris[i][j]);
        }
    }
    for(j = 0;j < 5;j++){
        for(i=0;i<3;i++){
            sum += matris[i][j];
        }
        printf("%d\t",sum);
        sum = 0;
    }
    
    return 0;
}