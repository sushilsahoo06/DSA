#include<stdio.h>
#include<conio.h>

int main(){
    int n;
    printf ("enter a number :");
    scanf("%d",&n);
    for(int i=0;i<=n;i++){
        int frist =1;
        for(int j=0;j<=i;j++){
            printf("%d ",frist);
            frist = frist *(i-j)/(j+1);

        }
        printf("\n");
    }
    getch();
}