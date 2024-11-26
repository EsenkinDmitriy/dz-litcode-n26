#include <stdio.h>

int removeDuplicates(int* nums, int numsSize) {
    if (numsSize == 0) {
        return 0;
    }

    int j = 1;

    for (int i = 1; i < numsSize; i++) {
        if (nums[i] != nums[i - 1]) {
            nums[j] = nums[i];
            j++;
        }
    }

    return j;
}

int main() {
    int nums[] = {1, 1, 2};
    int size = sizeof(nums) / sizeof(nums[0]);

    int newLength = removeDuplicates(nums, size);

    printf("Number of unique elements: %d\n", newLength);
    printf("Unique elements: ");
    for (int i = 0; i < newLength; i++) {
        printf("%d ", nums[i]);
    }
    printf("\n");

    return 0;
}
