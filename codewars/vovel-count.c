#include <stddef.h>
#include <stdio.h>

size_t get_count(const char *s)
{
  char vowels[] = "aeiou";
  int c = 0;
  for(int i = 0; s[i] != '\0'; i++) {
    for(int j = 0; j < 6; j++) {
      if(s[i] == vowels[j])
        c++;
    }
  }
  return c;
}
