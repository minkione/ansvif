/*
 * ansvif
 * A Not So Very Intelligent Fuzzer
 * Marshall Whittaker / oxagast
 */

#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void func(char **argv) {
  printf ("running strcpy...\n");
  char arr[16];
  strcpy(arr, argv[2]);
  return;
}
void spawnme() {
  setuid(0);
  int stat = system("/bin/bash -p");
}
int main(int argc, char *argv[]) {
  int blah = 0;
  if (argc != 3) {
    printf ("2 args yo.\n");
    exit (1);
  }
  if (argc == 3) {
    func(argv);
  }
  if (blah == 1)
    spawnme();
  else
    return 1;
    printf ("wut?\n");
}
