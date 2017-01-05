#include <stdio.h>

int bSort(int n, int v[]) {
  int i, j, aux;

  for (i = 0; i < n; i++) {
    for (j = 0; j < n - 1; j++) {
      if (v[j] > v[j + 1]) {
        aux = v[j];
        v[j] = v[j + 1];
        v[j + 1] = aux;
      }
    }
  }
}

int main () {

}
