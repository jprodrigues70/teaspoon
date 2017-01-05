#include <stdio.h>

int bb(int key, int n, int v[]) {
  int l, m, r;
  r = n - 1;
  l = 0;
  
  while (l < r) {
    m = (l + r) / 2;
    if (v[m] < key) l = m + 1;
    else r = m;
  }
  return (v[l] == key)? l: -1;
}

int main () {

}
