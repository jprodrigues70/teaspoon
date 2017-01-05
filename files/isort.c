#include <stdio.h>

int iSort(int n, int v[]) {
  int i, j, key;

  for (i = 1; i < n; i++) {
    key = v[i];
    for (j = i - 1; j >= 0; j--) {
      if (v[j] > key) {
        v[j + 1] = v[j];
      }
    }
    v[j + 1] = key;
  }
}

int main () {

}
