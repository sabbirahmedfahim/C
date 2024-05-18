#include<stdio.h>
#include<string.h>
int main()
{
   char ch;
   char stng[100];
   char sen_stng[100];
   scanf("%c", &ch);
   scanf("%s\n", &stng);
   fgets(sen_stng, 100, stdin);
   printf("%c\n", ch);
   printf("%s\n", stng);
   printf("%s", sen_stng);
   
   
   return 0;
}