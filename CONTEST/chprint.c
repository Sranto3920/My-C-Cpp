#include<stdio.h>
#include<string.h>
int main(){
    char ch;
    char s[100];
    char sen[100];

    scanf("%c",&ch);
    scanf("%s",s);
    getchar();

    //scanf("%[^\n]s",sen);
    fgets(sen, sizeof(sen), stdin);


    printf("%c\n",ch);
    puts(s);

    puts(sen);
    

    return 0;
}