#include <stdio.h>

int removeDuplicates(int* nums, int numsSize) {
    if (numsSize == 0) {
        return 0; // Если массив пустой, возвращаем 0
    }

    int j = 1; // Инициализируем j, он будет отслеживать уникальные элементы

    for (int i = 1; i < numsSize; i++) {
        if (nums[i] != nums[i - 1]) { // Если текущий элемент не равен предыдущему
            nums[j] = nums[i]; // Сохранить уникальный элемент
            j++; // Увеличиваем j для следующего уникального элемента
        }
    }

    return j; // Возвращаем количество уникальных элементов
}

int main() {
    int nums[] = {1, 1, 2}; // Пример входного массива
    int size = sizeof(nums) / sizeof(nums[0]);

    int newLength = removeDuplicates(nums, size);

    printf("Number of unique elements: %d\n", newLength);
    printf("Unique elements: ");
    for (int i = 0; i < newLength; i++) {
        printf("%d ", nums[i]); // Выводим уникальные элементы
    }
    printf("\n");

    return 0;
}
