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
    printf("%s",characters);

    while(limit > 7 && limit < 13){
        int i = 0;                                                 //variable to iterate through characater array
        while(characters[i] != '\0'){
            char temp = characters[i];
            strcat(word, &temp);
            if(strlen(word) > 12){
                printf("\n%s",word);
                break;
            }
            i++;
            
        }
        limit++;
    }
}