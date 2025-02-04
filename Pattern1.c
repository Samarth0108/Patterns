#include<stdio.h>
int main(){
    int i,j,n;
    printf("Enter the numbe of rows:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        // for loop for number of stars to print
        for(j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}