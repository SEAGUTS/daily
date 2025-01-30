#include <stdio.h>

// Function to find the minimum of two numbers
int min(int x, int y) {
    return (x <= y) ? x : y;
}

// Fibonacci Search function
int fibonacciSearch(int arr[], int n, int key) {
    int fib2 = 0;  // (m-2)th Fibonacci number
    int fib1 = 1;  // (m-1)th Fibonacci number
    int fib = fib2 + fib1;  // mth Fibonacci number

    // Finding the smallest Fibonacci number greater than or equal to n
    while (fib < n) {
        fib2 = fib1;
        fib1 = fib;
        fib = fib2 + fib1;
    }

    int offset = -1;  // Marks eliminated range from front

    // While there are elements to inspect
    while (fib > 1) {
        int i = min(offset + fib2, n - 1);

        // If key is greater than value at index i, cut the subarray from offset to i
        if (arr[i] < key) {
            fib = fib1;
            fib1 = fib2;
            fib2 = fib - fib1;
            offset = i;
        }
        // If key is less than value at index i, cut the subarray after i
        else if (arr[i] > key) {
            fib = fib2;
            fib1 -= fib2;
            fib2 = fib - fib1;
        }
        // Element found
        else {
            return i;
        }
    }

    // Checking if the last element is the searched key
    if (fib1 && arr[offset + 1] == key) {
        return offset + 1;
    }

    // Element not found
    return -1;
}

// Main function to test Fibonacci Search
int main() {
    int arr[] = {10, 22, 35, 40, 45, 50, 80, 82, 85, 90, 100};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 85;

    int index = fibonacciSearch(arr, n, key);

    if (index != -1)
        printf("Element found at index: %d\n", index);
    else
        printf("Element not found\n");

    return 0;
}
