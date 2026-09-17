#include <stdio.h>

#include "tile.h"

struct cell {
  //var value;
  int x;
  int y;
  int noTl;
  tile tls[];
  struct cell *north;
  struct cell *east;
  struct cell *south;
  struct cell *west;
};

struct cell *getAdj(struct cell *source, int dir) {
  if(dir == 0) {
    return source->north;
  } else if(dir == 1) {
    return source->east;
  } else if(dir == 2) {
    return source->south;
  } else if(dir == 3) {
    return source->west;
  } else {
    return source;
  }
}

void init(int x, int y, int noTl;) {}
