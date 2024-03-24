//len of string,vowel,consonant
#include <stdio.h>
#include <string.h>
int main()
{
    int i,v=0,c=0,len;
    char str[100];
    printf("Enter the string: ");
    fgets(str,100,stdin);
    //In the case of fgets, the null terminator is added after the newline character, and thus, the newline character contributes to the reported length of the string.
    if (str[strlen(str) - 1] == '\n') 
        str[strlen(str) - 1] = '\0';
    len=strlen(str);
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'||str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
        {
            v=v+1;
        }
        else if(str[i]>'A'&& str[i]<='Z'|| str[i]>'a'&& str[i]<='z')
        {
            c=c+1;
        }
    }
    printf("len of string is: %d\n",len);
    printf("number of vowels are: %d\n",v);
    printf("number of consonants are: %d\n",c);
return 0;
}
