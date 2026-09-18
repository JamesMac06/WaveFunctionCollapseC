#include <string.h>

#ifndef MAX_SIDE_ENTROPY
   #define MAX_SIDE_ENTROPY 7 
#endif

struct tile{
  char val;
  char *norVlds[MAX_SIDE_ENTROPY];
  char *easVlds[MAX_SIDE_ENTROPY];
  char *souVlds[MAX_SIDE_ENTROPY];
  char *wesVlds[MAX_SIDE_ENTROPY];
};

void reformatStr(char *str[]) {
  if(strlen(str) < MAX_SIDE_ENTROPY) {
    char new[MAX_SIDE_ENTROPY];
    for(int i=0;i<strlen(str);i++) {
      new[i] = str[i];
    }
    for(int i=0;i<MAX_SIDE_ENTROPY-strlen(str);i++) {
      new[i] = '0';
    }
    str = *new;
  }
}

struct tile makeTile(char val, char nV[], char eV[], char sV[], char wV[]) {
  struct tile out;
  out.val = val;
  out.norVlds=reformatStr(*nV);
  out.easVlds=reformatStr(*eV);
  out.souVlds=reformatStr(*sV);
  out.wesVlds=reformatStr(*wV);
  return out;
}
