#include "main.h"
#include <stdlib.h>
#include <string.h>
char *strcpy(char *dest, const char *src);

char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest,src,n);
}
