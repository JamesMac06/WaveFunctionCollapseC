#ifndef LLNTL_H
#define LLNTL_H

struct lln{
  int i;
  struct lln *prv;
  struct lln *nxt;
  struct tile tl;
};

struct lln makeList(struct tile tl);

struct lln *listGetNext(struct lln *mbr);

struct lln *listGetPrev(struct lln *mbr);

void listAppend(struct lln *mbr, struct tile tl);

struct lln *listGetAt(struct lln *mbr, int i);

#endif
