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

void reformatStr(char *des[], char *str[]) {
  if(strlen(*str) < MAX_SIDE_ENTROPY) {
    for(int i=0;i<strlen(*str);i++) {
      *des[i] = *str[i];
    }
    for(int i=0;i<MAX_SIDE_ENTROPY-strlen(*str);i++) {
      *des[i] = '0';
    }
  }
}

struct tile makeTile(char val, char *nV[], char *eV[], char *sV[], char *wV[]) {
  struct tile out;
  out.val = val;
  reformatStr(out.norVlds, nV);
  reformatStr(out.norVlds, eV);
  reformatStr(out.norVlds, sV);
  reformatStr(out.norVlds, wV);
  return out;
}
