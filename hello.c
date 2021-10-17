#include <stdio.h>
#include <stdlib.h>
#include <string.h>

const char *hello(void) {
  if (!strncmp(getenv("LANG"), "de_DE", 5)) {
    return "Hallo, Welt!";
  }

  return "Hello, world";
}

void main() {
  printf("%s\n", hello());
}
