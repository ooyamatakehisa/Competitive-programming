#include<stdio.h>
int maxf(int a, int b);

main(){
    int a, b, max;
    scanf("%d%d",&a,&b);
    max = maxf(a, b);
    if (max > 8) printf(":(");
    else printf("Yay!");
}

int maxf(int a, int b){
    return a > b ? a : b ;
}