#include<stdio.h>
#include<string.h>
void main(){

    int flag[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    char flagloc[10];
    int red = 0;
    for(char loop = 'a'; loop < 'k'; loop++){
        flagloc[red] = loop;
        red++;
    }
    printf("%s\n\n",flagloc);

    red = 0;
    for (int num = 0; num < 10; num++)
    {
        int &flagloc[num];
        printf("%s",flag[flagloc[num]]);
        red++;
    }
    
}