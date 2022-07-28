#include <stdio.h>

#include "entete.h"

int main(void) 
{
  char *str, *strChaine;

  str = "Salam";
  printf("Hello World\n");
  /*reversestring(str);*/

  strChaine = reversestringtwo(str);

  printf("%s %lu\n", strChaine, strlen(strChaine));

  
  return (0);
  
}