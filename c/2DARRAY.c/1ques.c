#include<stdio.h>
#include<conio.h>

int main(){
    int n;
    printf("no of student :");
    scanf("%d",&n);
    int student[n][3];
    for(int i=0;i<n;i++){
       // printf("enter the roll number of student :\n",i+1);
        for(int j=0;j<3;j++){
            printf("enter the roll number of student :\n",i+1);
            scanf("%d",&student[i][j]);
        }
    }
    printf("\nrool no\t\tphy\tche\tmath\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<3;j++){
            printf("%d ",student[i][j]);
        }
        printf("\n");
    }
    getch();
}