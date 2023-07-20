#include <stdio.h>
#include <stdlib.h>

struct Array {

  int *A;
  int size;
  int length;
};

void Display(struct Array arr) {
  int i;
  printf("The elements are: \n");
  for (i = 0; i < arr.length; i++) {
    printf("%d\n", arr.A[i]);
  }
}

void append(struct Array *arr, int x) {
  if (arr->length < arr->size) {
    arr->A[arr->length] = x;
    arr->length++;
  }
}

// Insertion
void insertion(struct Array *arr, int index, int x) {
  if (index <= arr->length && index >= 0) {
    for (int i = arr->length; i > index; i--) {
      arr->A[i] = arr->A[i - 1];
    }
    arr->A[index] = x;
    arr->length++;
  }
}

// Deletion
int delete(struct Array *arr, int index) {
  int x = 0;
  if (index >= 0 && index <= arr->length) {
    x = arr->A[index];
    for (int i = index; i < arr->length - 1; i++) {
      arr->A[i] = arr->A[i + 1];
    }
    arr->length--;
    return x;
  }

  return 0;
}

// Linear Search

void swap(int *x, int *y) {
  int temp;
  temp = *x;
  *x = *y;
  *y = temp;
}

int linearSearch(struct Array *arr, int key) {
  for (int i = 0; i < arr->length; i++) {
    if (key == arr->A[i]) {
      swap(&arr->A[0], &arr->A[i]);
      return i;
    }
  }

  return -1;
}

// Binary Search

int BinSearch(struct Array arr, int key) {
  int l, h, mid;
  l = 0;
  h = arr.length - 1;

  while (l <= h) {
    mid = (l + h) / 2;
    if (key == arr.A[mid])
      return mid;
    else if (key < arr.A[mid])
      h = mid - 1;
    else
      l = mid + 1;
  }
  return 0;
}

void Reverse(struct Array *arr) {
  int temp, i, j;
  j = (arr->length - 1);
  for (i = 0; i < j; i++) {
    swap(&arr->A[i], &arr->A[j]);
    j--;
  }
}

void InsertSort(struct Array *arr, int x) {
  int i;

  // Find the position to insert the element
  for (i = arr->length - 1; i >= 0 && arr->A[i] > x; i--) {
    arr->A[i + 1] = arr->A[i];
  }

  // Insert the element
  arr->A[i + 1] = x;
  arr->length++;
}

int isSorted(struct Array arr) {
  for (int i = 0; i < (arr.length) - 1; i++) {
    if (arr.A[i] > arr.A[i + 1])
      return 0;
  }

  return 1;
}

void Rearrange(struct Array *arr) {
  int i = 0, j = arr->length - 1;
  while (i < j) {
    while (arr->A[i] < 0)
      i++;
    while (arr->A[j] >= 0) {
      j--;
    }

    if (i<j)
    {
      swap(&arr->A[i], &arr->A[j]);
    }
  }

}

int main() {
  struct Array arr;
  int n, i, app, insind, insele, del, insinsort;

  printf(("Enter size of an array: "));
  scanf("%d", &arr.size);

  arr.A = (int *)malloc(arr.size * sizeof(int));
  arr.length = 0;

  printf("Enter number of array elements: ");
  scanf("%d", &n);

  printf("Enter the elements: ");

  for (i = 0; i < n; i++) {
    scanf("%d", &arr.A[i]);
  }

  arr.length = n;

  Rearrange(&arr);

  Display(arr);

  // printf("%d", isSorted(arr));

  // printf("Enter a number you want to insert in an sorted array: ");
  // scanf("%d",&insinsort);
  // InsertSort(&arr, insinsort);

  // Display(arr);

  // printf("Enter the number you want to append at the end of the array: ");
  // scanf("%d", &app);
  // append(&arr, app);

  // printf("New array: \n");
  // Display(arr);

  // printf("Enter the position at which you want to instert an element: ");
  // scanf("%d", &insind);

  // printf("Enter the element you want to insert: ");
  // scanf("%d", &insele);

  // insertion(&arr, insind, insele);
  // printf("The array after insertion: \n");
  // Display(arr);

  // printf("Enter the index from which you want to delete: ");
  // scanf("%d", &del);
  // int d = delete (&arr, del);
  // printf("Deleted element: %d", d);

  // int Bsearch;
  // printf("Enter a number you want to search in the array:(using Binary
  // Seaarch) "); scanf("%d", &Bsearch); int search1 = BinSearch(arr,Bsearch);
  // if (search1 == (-1)) {
  //   printf("Search unsuccessful.\n");
  // } else {
  //   printf("Number found at index: %d.",
  //          search1);
  //   Display(arr);
  // }

  // Reverse(&arr);
  // Display(arr);

  free(arr.A);
  return 0;
}
