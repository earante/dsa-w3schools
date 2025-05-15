#include<stdio.h>
#include<stdbool.h>

int main() {
  int my_array[] = {51, 34, 25, 12, 22, 11, 88, 5, 1, 6};
  int n = sizeof(my_array) / sizeof(my_array[0]);

  for(int i = 0; i < n-1; i++) {
    bool swapped = false;
    for(int j = 0; j < n-i-1; j++) {
      if(my_array[j] > my_array[j+1]) {
        int temp = my_array[j];
        my_array[j] = my_array[j+1];
        my_array[j+1] = temp;
        swapped = true;
      }
    }
    if(!swapped) {
      break; // No swaps means the array is sorted
    }
  }
  printf("Sorted array: \n");

  for(int i = 0; i < n; i++) {
    printf("%d ", my_array[i]);
  }
  printf("\n");

  return 0;
}