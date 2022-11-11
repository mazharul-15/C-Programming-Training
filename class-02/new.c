#include<stdio.h>
int  main()//determining vowel,consonant by using logical operator
{
    char ch ;
    printf("enter a letter  \n") ;
    scanf("%c",&ch);
    if (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch =='O' || ch=='U')
        printf(" the letter  is vowel ");
    else
        printf("consonant ");
    printf("\n%c", ch);
}
