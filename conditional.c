#include <stdio.h>

//#define CONDITION
/* 
CONDITION can be defined in cmd
$ gcc -DCONDITION -E main.c
*/

int main(int argc, char** argv) {
#ifdef CONDITION
  int i = 0;
  i++;
  printf("i = %d\n", i);
#endif
  int j= 0;
  printf("j = %d", j);
  return 0;
}