/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main(void)
{
   char sentence[100] = {'\0'};
   
   printf("Enter any string: " );
   scanf("%99[^\n]s", sentence);
   
   char *last = sentence;
   
   while (*last) ++ last;
   
   if (sentence != last)
   {
       for (char *first = sentence; first <--last; ++first)
   {
    char c = *first;
    *first = *last;
    *last = c;
   }
}
printf( "Reversed string = %s\n", sentence);

return 0;
}