#include <stdio.h>
#include <time.h>
void printArray(int array[], int size) {
  for (int i = 0; i < size; i++) {    
    printf("%d ", array[i]);
  }
  printf("\n");
}
void insertionSort(int array[], int size) {
  for (int step = 1; step < size; step++) {   
    int key = array[step];
    int j = step - 1;
    while (key < array[j] && j >= 0) {   
      array[j + 1] = array[j];
      --j;
    }
    array[j + 1] = key;        
  }
}
int main() {
time_t start,end;
double tc;
  int data[] = {6, 4, 2, 3, 7,12, 16, 20, 40, 50, 70,10, 50, 30, 40, 20};
  int size = sizeof(data) / sizeof(data[0]);
  start=clock();
  insertionSort(data, size);
  printf("Sorted array:\n");
  printArray(data, size);
end=clock();
tc=(difftime(end,start)/CLOCKS_PER_SEC);
printf("time efficiency is %lf",tc);
}


