#include <stdio.h>

int main() {
    int array[100], search, i, n;

    // Ask user for the number of elements
    printf("Enter number of elements in array: ");
    scanf("%d", &n);

    // Take array elements as input
    printf("Enter %d integer(s):\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    // Ask user for the element to search
    printf("Enter a number to search: ");
    scanf("%d", &search);

    // Perform linear search sequentially
    for (i = 0; i < n; i++) {
        if (array[i] == search) {
            printf("%d is present at index %d (position %d).\n", search, i, i + 1);
            break; // Stop searching once the element is found
        }
    }

    // If the loop finishes without finding the element
    if (i == n) {
        printf("%d isn't present in the array.\n", search);
    }

    return 0;
}
