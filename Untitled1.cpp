#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){

  int i;
  char arr[50];

  printf("given string : ");
  gets(arr);

  int length = strlen(arr);
  int length2 = length;

  for(i = 0; arr[i] != '\0'; i++){
    if(arr[i] == arr[length - 1]){
        length--;
        if(i == (length2)/2){
            printf("palindrom");
            break;
        }
    }
    else{
        printf("not palindrom");
        break;
    }
  }

return 0;
}



