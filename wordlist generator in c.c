#include<stdio.h>
#include<string.h>
void main(){
    string alphabets = ascii.lowercase + ascii.uppercase + ascii.punctions + 'EOF';
    int limit = 8;

    while(limit > 7 && limit < 13){
        for(string i = 'a'; i != 'EOF'; i++){
            string word ='';
            word += i;
            for(string j = 'a'; word.length != limit; j++){
                word += j;
            }
            printf("%s",word);
        }
        limit++;
    }
}