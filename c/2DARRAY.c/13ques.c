//wap to print the multipication of two matrices given by the user
#include<stdio.h>
#include<conio.h>

int main(){
    int a,b;
    printf("enter frist matric of row and coulmn :");
    scanf("%d %d",&a,&b);
    int arr[a][b];
    printf("enter the frist matrix of element : \n");
    for(int i=0;i<a;i++){
       for(int j=0;j<b;j++){
        scanf("%d",&arr[i][j]);
       } 
    }

    printf("the frist matrix is : \n");
    for(int i=0;i<a;i++){
       for(int j=0;j<b;j++){
           printf("%d ",arr[i][j]);
       }
       printf("\n"); 
    }

    int r,c;
    printf("enter second matric of row and coulmn :");
    scanf("%d %d",&r,&c);
    int brr[r][c];
    printf("enter the second matrix of element : \n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
           scanf("%d",&brr[i][j]);
        } 
    }
    printf("the second matrix is : \n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
           printf("%d ",brr[i][j]);
        }
        printf("\n"); 
    }

    int res[a][c];
    int cr =(b==r);
    printf("resultant of matrices is :\n");
    for(int i=0;i<a;i++){
        for(int j=0;j<c;j++){
            //i row of arr[][] and j coulmn of brr[][]
            //(arr[i][0],arr[i][1],arr[i][2].....)*(brr[0][j],brr[1][j],brr[2][j]....)

            res[i][j]=0;
            for(int k=0;k<cr;k++){
                res[i][j]+=arr[i][k]*brr[k][j];
            }  
        }
        
    }
    for(int i=0;i<a;i++){
        for(int j=0;j<c;j++){
            printf("%d  ",res[i][j]);
        }
        printf("\n");

    }


    getch();
}