#include<stdio.h>
#include<string.h>
void main(){
    char alphabets[] = ascii.lowercase + ascii.uppercase + ascii.punctions;
    int limit = 8;

    while(limit > 7 && limit < 13){
        for(char i = 'a'; i != '\0'; i++){
            string word ='';
            word += i;
            for(char j = 'a'; word.length != limit; j++){
                word += j;
            }
            printf("%s",word);
        }
        limit++;
    }
}