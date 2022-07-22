#include <stdio.h>
#include <time.h>
void bubbleSort(int array[], int size) {
for (int step = 0; step < size - 1; ++step) {
for (int i = 0; i < size - step - 1; ++i) {
if (array[i] > array[i + 1]) {    
        int temp = array[i];
        array[i] = array[i + 1];
        array[i + 1] = temp;
      }
    }
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
int data[] = {9, 6, 3, 2, 5,6,7,8,8,2,3,2,3,4,1,2,3,4,5,6,7,2,2,3,4,54,2,2,4,1,2,3,4,5,6,7,8,8};
int size = sizeof(data) / sizeof(data[0]);
start=clock();
bubbleSort(data, size);

printf("Sorted Array:\n");
printArray(data, size);
end=clock();
tc=(difftime(end,start)/CLOCKS_PER_SEC);
printf("time efficiency is %lf",tc);
}

