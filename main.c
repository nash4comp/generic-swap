#include <stdio.h>
#include <string.h>

void swap(void* ptr1, void* ptr2, size_t nbytes) {
  char temp[nbytes];
  memcpy(temp, ptr1, nbytes);
  memcpy(ptr1, ptr2, nbytes);
  memcpy(ptr2, temp, nbytes);
}

int main() {
  int a = 3;
  int b = 4;
  swap(&a, &b, sizeof(a));
  printf("%d %d", a, b);
  return 0;
}
