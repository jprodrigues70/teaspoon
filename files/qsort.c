#include <stdio.h>

int quickSort(int v[], int left, int right) {
  int i, j;
  int key, aux;

  int pivot = v[(left + right)/2];
  i = left;
  j = right;
  while (i <= j) {
    while (pivot < v[i]) i++;
    while (v[j] < pivot) j--;
    if (i <= j) {
      aux = v[i];
      v[i] = v[j];
      v[j] = aux;
      i++;
      j--;
    }
  }
  if (left < j) quickSort(v, left, j);
  if (i < right) quickSort(v, i, right);
}

int main () {

}
