#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(){
    typedef struct cricketr{
        char name[20];
        int age;
        int testMatch;
        float avgRuns;
    }cricker;

    cricker arr[20];
    for(int i=0;i<3;i++){
        scanf("%s",&arr[i].name);
        scanf("%d",&arr[i].age);
        scanf("%d",&arr[i].testMatch);
        scanf("%f",&arr[i].avgRuns);
    }
    for(int i=0;i<1;i++){
        printf("Name of the cricketer :%s\n",arr[i].name);
        printf(" age :%d\n",arr[i].age);
        printf("No of match played :%d\n",arr[i].testMatch);
        printf("average runs :%f\n",arr[i].avgRuns);
    }
    return 0;


}