//reverse a string character
#include<stdio.h>
#include<string.h>

int main(){
    char str[100];
    puts("enter a string :");
    gets(str);
    int count=0;
    int i=0;
    while(str[i]!='\0'){
        count++;
        i++;
    }
    for(int j=0,k = count-1;j<=k;j++,k--){
        char temp = str[j];
        str[j]=str[k];
        str[k]=temp;
    }
    
    puts("the reverse chracter is :\n");
    puts(str);
    
    int flag =0;
    for(int j=0,k = count-1;j<=k;j++,k--){
        if(str[j]!=str[k]){
            flag =1;
            break;
    }   }
    if(flag == 0){
        printf("\n palindrome string");
    }
    else
    printf("\n not palindrome string");

    return 0;
}