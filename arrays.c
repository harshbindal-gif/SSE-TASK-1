// #include <stdio.h>

// int main() {
//     int arrays[5] = {1, 2, 3, 4, 5};
//     int target_value=3;     // Linear search for targer value given:
// //     for (int i = 0; i < 5; i++) {
// //         if (arrays[i] == target_value) {
// //             printf("Found target value %d at index %d\n", target_value, i);
// //             break;
// //         }
// //     }
        

    
// // }
#include <stdio.h>
int main() {
    int arrays[5] = {1, 2, 3, 4, 5};
    int target_value = 3; // Binary  for target value given:
    int low=0;
    int high=4;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (arrays[mid] == target_value) {
            printf("Found target value %d at index %d\n", target_value, mid);
            break;
        } else if (arrays[mid] < target_value) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
return 0;
}