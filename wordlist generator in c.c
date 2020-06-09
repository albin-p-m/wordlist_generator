#include<stdio.h>
#include<string.h>


void main(){
    char characters[100];                           //the character set generated
    char word[13];                                  //the word generated
    int limit = 8;                                  //initial limit of the word generated
    int j = 0;                                      //used to iterate through character's indexes


    for(int i = 32; i < 127; i++){                  //for getting whole characters into the word array
        char ch = i;
        characters[j] = ch;
        j++;
    }

    while(limit > 7 && limit < 13){
        int i = 0;                                                 //variable to iterate through characater array
        for(characters[i] = ' '; characters[i] != '\0'; i++){
            strncat(word, character[i]);
            for(char j = 'a'; word.length != limit; j++){
                word += j;
            }
            printf("%s",word);
        }
        limit++;
    }
}