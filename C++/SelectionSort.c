#include <stdio.h>
#include <time.h>
void swap(int *a, int *b) {
  int temp = *a;
  *a = *b;              
  *b = temp;
}
void selectionSort(int array[], int size) {
  for (int step = 0; step < size - 1; step++) {
    int min_idx = step;
    for (int i = step + 1; i < size; i++) {     
      if (array[i] < array[min_idx])          
        min_idx = i;
    }
    swap(&array[min_idx], &array[step]);
  }
}
void printArray(int array[], int size) {
  for (int i = 0; i < size; ++i) {
    printf("%d  ", array[i]);       
  }
  printf("\n");
}
int main() {
  time_t start,end;
  double tc;
  int data[] = {20, 12, 10, 15, 2,45, 6, 2, 34, 51, 89,6, 4, 2, 3, 7,12, 16, 20, 40, 50, 70,10, 50, 30, 40, 20,9, 6, 3, 2, 5,6,7,8,8,2,3,2,3,4,1,2,3,4,5,6,7,2,2,3,4,54,2,2,4,1,2,3,4,5,6,7,8,8};
  int size = sizeof(data) / sizeof(data[0]);
  start=clock();
  selectionSort(data, size);
  printf("Sorted array in Acsending Order:\n");
  printArray(data, size);
  end=clock();
tc=(difftime(end,start)/CLOCKS_PER_SEC);
printf("time efficiency is %lf",tc);
}

