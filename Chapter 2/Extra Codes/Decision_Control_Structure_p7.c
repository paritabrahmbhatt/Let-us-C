/*Program to Check Alphabet*/
void main()
{
    char a;
    printf("Enter a character: ");
    scanf("%c",&a);
    if((a >= 'A' && a <= 'Z')||(a >= 'a' && a <= 'z'))
        printf("%c is an alphabet",a);
    else
        printf("%c is not an alphabet",a);
}
