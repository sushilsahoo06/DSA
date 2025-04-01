#include<stdio.h>
#include<conio.h>

int main(){
    int cp;
    printf("cost prise =");
    scanf("%d",&cp);
    int sp;
    printf("selling prise = ");
    scanf("%d",&sp);
    if(cp<sp){
        printf("profit= %d",sp-cp);
        
    }
    else if(sp<cp){
        printf("loss = %d",cp-sp);
    }
    else
        printf("no loss no perfit");
    

    getch();
}