#include <stdio.h>

#include <math.h>

#include <bitset>


int forbnicate(unsigned int x) {
  // step 1
  int m = (-1 << 5);
  x = x & m;

  // step 2 
  x = x << 1;

  // step 3 
  unsigned int l = std::log2(x) + 1;
  if (l < 8) {
    l = std::bitset < 8 > (x).size();
  }

  for (int i = l - 8; i < l; i++) {
    x = (x ^ (1 << i));
  }
  return x;
}

int main() {

  printf("%d", forbnicate(4095));

  return 0;

}
