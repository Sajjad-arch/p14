/*Write a program in C that takes a character input from the user and identifies whether it is a vowel or a
consonant.*/


#include <stdio.h>

int main (void)

{
    char f,v;

    v='a,e,i,o,u';
    printf("ENTER THE c:");
    scanf("%c",&f);


    if (f==v)
        printf("C is the vowel");
    else
        printf("c is the consonant");





    return 0;
}
