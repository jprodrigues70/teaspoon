#include <stdio.h>

int selSort(int n, int v[]) {
  int i, j, key, aux;

  for (i = 0; i < n - 1; i++) {
    key = i;
    for (j = i + 1; j < n; j++) {
      if (v[j] < v[key]) {
        key = j;
      }
    }
    aux = v[i];
    v[i] = v[key];
    v[key] = aux;
  }
}

int main () {

}
