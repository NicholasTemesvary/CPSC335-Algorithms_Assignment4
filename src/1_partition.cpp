#include "searching_algorithms.h"
#include <vector>

int partition(vector<int>& nums, int start, int end) {
    int pivot = nums[end];
    int i = start - 1;

    for (int j = start; j < end; j++) {
        if (nums[j] <= pivot) {
            i++;
            swap(nums[i], nums[j]);
        }
    }

    swap(nums[i + 1], nums[end]);
    return i + 1;
}
