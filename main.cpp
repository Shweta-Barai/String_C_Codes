#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int giveSum(int num1, int num2){

    return num1 + num2;
}

int palindrom(char arr[]){

      int flag = 0;
      int length = strlen(arr);
      int length2 = length;

      for(int i = 0; arr[i] != '\0'; i++){
        if(arr[i] == arr[length - 1]){
            length--;
            if(i == (length2)/2){
                flag = 1;
                break;
            }
        }
        else{
            flag = 0;
            break;
        }
      }

return flag;
}

int main(){
/*
    int i;
    char arr[50],SearchWord[20];

    printf("input string : ");
    gets(arr);
    printf("input word to search : ");
    gets(SearchWord);

    for(i = 0;arr[i] != '\0';i++){
        if(arr[i] == SearchWord[0]){
            printf("input index is %d\n",i);
        }
    }
    */
    int result =  30 - giveSum(12,13);
    printf("%d\n",result);

    //printf("%d",giveSum(20,40));

    char arr[50],arr2[50];

    printf("string is : ");
    gets(arr);

    printf("string2 is : ");
    gets(arr2);

    palindrom(arr);
    if(palindrom(arr2) == 1){
        printf("palindrom");
    }
    else{
        printf("not palindrom");
    }

    return 0;
}
