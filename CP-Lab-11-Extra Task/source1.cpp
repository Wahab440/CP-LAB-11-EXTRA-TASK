#include <iostream>
using namespace std;
int count_evens(int numbers[], int size) {
    int count = 0;
    for (int i = 0; i < size; ++i) {
        if (numbers[i] % 2 == 0) {
            count++;
        }
    }
    return count;
}

int main() {
    int nums1[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    int nums2[] = { 2, 4, 6, 8, 10 };
    int nums3[] = { 1, 3, 5, 7, 9 };

    cout << "\nnums1[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 }";
    cout << "\nnums2[] = { 2, 4, 6, 8, 10 }";
    cout << "\nnums3[] = { 1, 3, 5, 7, 9 }";
    int size1 = sizeof(nums1) / sizeof(nums1[0]);
    int size2 = sizeof(nums2) / sizeof(nums2[0]);
    int size3 = sizeof(nums3) / sizeof(nums3[0]);

    cout << "\n\nCount of even numbers in nums1: " << count_evens(nums1, size1) << endl;
    cout << "Count of even numbers in nums2: " << count_evens(nums2, size2) << endl;
    cout << "Count of even numbers in nums3: " << count_evens(nums3, size3) << endl;
    return 0;
}



