#include "searching_algorithms.h"
#include <iostream>
#include <vector>
using namespace std;

int randomized_select(vector<int> nums, int k, int start, int end) {
if (end < start) {
        return -1;
    }
    int pivot = partition(nums, start, end);
    int left_size = pivot - start;

    if (k < left_size) {
        return randomized_select(nums, k, start, pivot - 1);
    } else if (k > left_size) {
        return randomized_select(nums, k - left_size - 1, pivot + 1, end);
    }
    return nums[pivot];
}
