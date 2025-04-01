#include<stdio.h>
#include<conio.h>

int main(){
    double x1,y1,x2,y2,x3,y3;
    printf("enter six number =");
    scanf("%lf %lf %lf %lf %lf %lf",&x1,&y1,&x2,&y2,&x3,&y3);
    double m1 = (y2-y1)/(x2-x1);
    printf("m1 =%lf",&m1);
    double m2 =(y3-y2)/(x3-x2);
    printf("m2 =%lf",&m2);
    if(m1==m2)
    printf("three point fall on a stright line");
    else
    printf("three point not fall on a stright line");
    getch();
}