#include<stdio.h>
#include<string.h>
void main(){
    char word[100];

    int j = 0;                                      //used to iterate though word's indexes
    for(int i = 32; i < 127; i++){                  //for getting whole characters into the word array
        char ch = i;
        word[j] = ch;
        j++;
    }
    int limit = 8;

    while(limit > 7 && limit < 13){
        for(char i = 'a'; i != '\0'; i++){
            word ='';
            word += i;
            for(char j = 'a'; word.length != limit; j++){
                word += j;
            }
            printf("%s",word);
        }
        limit++;
    }
}