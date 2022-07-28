#include "entete.h"

/**
* reversestringtwo - This function print the reverse of a string using pointer
* @chaine: the string to reverse
* Return: string representing the reverse of the string parameter of the function 
*/
char *reversestringtwo(char *chaine)
{
  char *str, *strReverse;
  int taille, i;

  taille = strlen(chaine);
  strReverse = (char*) malloc(20);
  strcpy(strReverse, chaine);
  str = chaine;
  str += taille - 1;
  i = 0;
  while(*str != '\0')
  {
    strReverse[i] = *str;
    str--;
    i++;
  }
  return strReverse;
}