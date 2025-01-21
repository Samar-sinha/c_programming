#include <stdio.h>

void insertElement(int arr[], int n, int index, int value) {
    if (index < 0 || index >= n) {
        printf("Invalid index.\n");
        return;
    }

    // Shift elements to the right starting from the last index
    for (int i = n - 1; i > index; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert the new element at the given index
    arr[index] = value;
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int n;

    // Input the size of the array
    printf("Enter the size of the array (n): ");
    scanf("%d", &n);

    int arr[n];

    // Initialize the array 
    printf("Enter the %d elements : ",n);
    for (int i = 0; i < n; i++) {
        scanf("%d",&arr[i]);
    }

    printf("Initial array: ");
    printArray(arr, n);

    int index, value;

    // Input the index and value for insertion
    printf("Enter the index to insert (0 to %d): ", n - 1);
    scanf("%d", &index);
    printf("Enter the value to insert: ");
    scanf("%d", &value);

    // Perform the insertion
    insertElement(arr, n, index, value);

    printf("Array after insertion: ");
    printArray(arr, n);

    return 0;
}