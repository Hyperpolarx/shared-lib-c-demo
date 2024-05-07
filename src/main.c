#include <stdio.h>
#include "tqlib1/add.h"
#include "tqlib1/answer.h"

int main(int argc, char** argv)
{
  set_base(10);
  fprintf(stdout, "The result is %d\n", add(13));
  fprintf(stdout, "The answer is %d\n", answer());
}
