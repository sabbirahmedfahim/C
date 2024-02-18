/*r = expected revenue if you do not advertise
  e = expected revenue if you do advertise
  c = cost of advertising
  */


#include <stdio.h>

int main()
{
   int T;
   scanf("%d", &T);
   for (int i = 0; i < T; i++)
   {
    int r, e, c;
    scanf("%d %d %d", &r, &e, &c);
    if (e>(r+c))
    {
        printf("advertise\n");
    } else if (e<(r+c))
    {
        printf("do not advertise\n");
    } else if (e==(r+c))
    {
        printf("does not matter\n");
    }
     }

   return 0;
}


