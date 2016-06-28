#include <stdio.h>

/* my new Feature ! */

/* a new patch */

/* a new func ! */

/* my modif here too :O */

size_t my_strlen(const char *s)
{
  char *p = s;

  while (*p)
    ++p;

  return (p - s);
}

int main(void)
{
  int i;
   char *s[] = 
     {
       "Git tutorials",
      "Tutorials Point"
     };

   for (i = 0; i < 2; ++i)
      
     printf("string lenght of %s = %d\n", s[i], my_strlen(s[i]));

   return 0;
}
