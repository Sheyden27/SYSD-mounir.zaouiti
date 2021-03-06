#include <stdio.h>

int compte_int (int array[20], int length, int nb) {
  int matches = 0;

  for (int i = 0; i < length; i++) {
    if (array[i] == nb)
      matches++;
  }
  
  return matches;
}

int main (void) {
  int array1[5] = {2, 42, 1, 42, 9};
  int array2[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int length;

  printf("%d dans t1 : %d fois.\n", 42, compte_int(array1, 5, 42));
  printf("%d dans t1 : %d fois.\n",  2, compte_int(array1, 5,  2));
  printf("%d dans t2 : %d fois.\n", 10, compte_int(array2, 10, 10));
  printf("%d dans t2 : %d fois.\n", 42, compte_int(array2, 10, 42));
  
  return 0;
}
