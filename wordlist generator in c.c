#include<stdio.h>
#include<string.h>

void main(){
    char characters[100];                           //the character set generated
    char word[13];                                  //the word generated
    int limit = 8;                                  //initial limit of the word generated
    int j = 0, count, last;                         //used to iterate through character's indexes

    for(int i = 32; i < 127; i++){                  //for getting whole characters into the word array
        char ch = i;
        characters[count] = ch;
        count++;
        last = count - 1;
    }
    printf("%s",characters);

    for(int i = 0; i < limit; i++){                 //initialize the word array with the first character in character array.
        word[i] = characters[0];
    }

    for((limit > 7) && (limit < 13);){
        label;
        last = limit;
        for(int i = 0; i <= last; i++){
            word[limit] = characters[k];
            printf("%s", word);
        }

    }
}