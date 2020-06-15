#include<stdio.h>
#include<string.h>

void main(){
    char characters[100];                           //the character set generated
    char word[13];                                  //the word generated
    int limit = 8, count = 0;                       //initial limit of the word generated and a counting variable for charselectornowing the last index of character array

    for(int i = 32; i < 127; i++){                  //for getting whole characters into the word array
        char ch = i;
        characters[count] = ch;
        count++;
    }
    printf("\n\n%s\n\n",characters);

    for(int i = 0; i < limit; i++){                 //initialize the word array with the first character in character array.
        word[i] = characters[0];
    }

    while((limit > 7) && (limit < 13)){
        int i, wordselector, charselector;
        label:

        for(i = 0; i < count; i++){

            for(wordselector = limit; wordselector >= 0; wordselector--){

                if(word[wordselector] != characters[count - 1]){

                    for(charselector = 0; charselector < count; charselector++){

                        if(word[wordselector] == characters[charselector]){
                            word[wordselector] = characters[charselector + 1];
                            
                            if((wordselector != limit) && (wordselector != (limit - 1))){

                                for (int k = wordselector; k < limit; k++)
                                {
                                    word[k + 1] = characters[0];    
                                }
                                
                            }
                            break;
                        }
                    }
                    break;
                }
            }

            word[limit] = characters[i];
            printf("%s\n", word); 

            
        }
        if(word[0] != characters[count - 1]){
            goto label;
        }else{
            limit++;
        }
    }
}