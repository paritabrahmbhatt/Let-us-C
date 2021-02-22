/* Program to Check Vowel or consonant */

#include <stdio.h>

void main()
{
    char a;
    printf("Enter a character: ");
    scanf("%c",&a);
    char upc_vowel,loc_vowel;
    upc_vowel = (a == 'A' || a == 'E' || a == 'I' || a == 'O' || a == 'U' );
    loc_vowel = (a == 'a' || a == 'e'|| a == 'i' || a == 'o' || a == 'u');
    if(a == upc_vowel || a == loc_vowel)
        printf("%c is a vowel",a);
    else
        printf("%c is a consonant",a);
}
