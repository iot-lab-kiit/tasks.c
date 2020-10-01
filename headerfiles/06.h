#include <stdio.h>
void rev(char *g, int begin, int end)
{
   char h;
   if (begin >= end)
      return;

   h = *(g+begin);
   *(g+begin) = *(g+end);
   *(g+end)   = h;
   rev(g, ++begin, --end);
}
