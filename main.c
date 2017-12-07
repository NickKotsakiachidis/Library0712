#include <stdio.h>
#include <string.h>

int main()
{
   char string[100];
   int c = 0, count[26] = {0}, x,sum;

   printf("Enter a word\n");
   gets(string);

   while (string[c] != '\0')
   {
      if (string[c] >= 'a' && string[c] <= 'z') {
         x = string[c] - 'a';
         count[x]++;
      }

      c++;
   }
    sum=0;
   for (c = 0; c < 26; c++)
         sum+=count[c];
    printf("To sunolo xaraktirwn einai %d",sum);
   return 0;
}
