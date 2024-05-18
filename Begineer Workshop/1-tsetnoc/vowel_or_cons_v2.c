#include <stdio.h>

int main()
{

   char VCI[100];
//    scanf("%s", &VCI); //taking single character input, read instruction
   scanf("%c", &VCI);
//    char A='A', Z='Z', a='a', z='z';
   if (VCI[0]=='a' || VCI[0]=='e' || VCI[0]=='i' || VCI[0]=='o' || VCI[0]=='u'
   || VCI[0]=='A'|| VCI[0]=='E'|| VCI[0]=='I'|| VCI[0]=='O'|| VCI[0]=='U')
   {
    printf("Vowel.");
   } else if (VCI[0]>='A' && VCI[0]<='Z' || VCI[0]>='a' &&VCI[0]<='z')
   {
    printf("Consonant.");
   } else
   {
    printf("Invalid Character.");
   }

   return 0;
}