#include <stdio.h>

int base = 0;

void set_base(int b)
{
  base = b;
}

int add(int input)
{
  return input + base;
}

void __attribute__ ((constructor)) init_ibrary(void)
{
  fprintf(stderr, "Loading library\n");
  base = 0;
}

void __attribute__ ((destructor)) cleanup_library(void)
{
  fprintf(stderr, "Unloading library\n");
}
