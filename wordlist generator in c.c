#include<stdio.h>
#include<string.h>

void main(){
    char characters[100];                           //the character set generated
    char word[13];                                  //the word generated
    int limit = 8, count = 0;                       //initial limit of the word generated and a counting variable for knowing the last index of character array

    for(int i = 32; i < 127; i++){                  //for getting whole characters into the word array
        char ch = i;
        characters[count] = ch;
        count++;
    }
    printf("\n\n%s\n\n",characters);

    for(int i = 0; i < limit; i++){                 //initialize the word array with the first character in character array.
        word[i] = characters[0];
    }

    while((limit == 8)){ //&& (limit < 13)){
        int last = limit, i, j, k;
        label:
        for(i = 0; i < count; i++){

            word[limit] = characters[i];
            printf("%s\n", word);
            for(j = limit; j >= 0; j--){
                if(word[j] != characters[count - 1]){
                    for(k = 0; k < count; k++){
                        if(word[j] == characters[k]){
                            word[j] = characters[k + 1];
                            break;
                        }
                    }
                    break;
                }
            }
        }
        if(word[0] != characters[count - 1]){
            goto label;
        }else{
            limit++;
        }
        break;
    }
}