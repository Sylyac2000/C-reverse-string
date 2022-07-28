#include "entete.h"

/**
* reversestring - This function print the reverse of a string using pointer
* @chaine: the string to reverse
*/
void reversestring(char *chaine)
{
  char *str;
  int taille;

  taille = strlen(chaine);
  str = chaine;
  str += taille;
  /* move to last character of string*/
  --str;
  while(*str != '\0')
  {
    printf("%c\n", *str);
    str--;
  }
  
}