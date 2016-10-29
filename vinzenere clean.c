#include <stdio.h> 
#include <cs50.h> 
#include <string.h> 
#include <ctype.h> 


int main(int argc, string argv[])
{
if (argc != 2){printf("Try again\n");
return 1;
}
string key  = argv[1];
for (int k = 0, n = strlen(key); k < n; k++) 
{
if (!isalpha(key[k])) {
printf("Try again\n");
return 1;
}
}
string txt = GetString();
if (txt == NULL) //review if text is empty
{ printf("Try again");
return 1;
}
for (int i = 0,j=0; i < strlen(txt); i++)
{

if (isalpha(txt[i]))
{


if (islower(txt[i]))  //if letter is small
printf("%c", ((((txt[i] - 'a') + ((tolower(key[j++%strlen(key)])) - 'a') % 26) % 26) + 'a'));


if (isupper(txt[i]))  //if letter is big
printf("%c", ((((txt[i] - 'A') + ((toupper(key[j++%strlen(key)])) - 'A') % 26) % 26) + 'A'));
}
else
printf("%c", txt[i]);
}
printf("\n");
return 0;
}