class Solution {
public:
    // Lomuto partition scheme
    int partition(vector<int>& arr, int low, int high) {
        int pivot = arr[high];          // pivot = last element
        int i = low - 1;                // boundary of < pivot region

        for (int j = low; j < high; j++) {   // scan till high-1
            if (arr[j] < pivot) {
                i++;
                swap(arr[i], arr[j]);   // place smaller element to the left
            }
        }

        swap(arr[i + 1], arr[high]);    // place pivot in final position
        return i + 1;                   // return pivot index
    }

    void quickSort(vector<int>& arr, int low, int high) {
        if (low < high) {
            int pi = partition(arr, low, high);
            quickSort(arr, low, pi - 1);   // left subarray
            quickSort(arr, pi + 1, high);  // right subarray
        }
    }

    vector<int> sortArray(vector<int>& nums) {
        if (!nums.empty()) {
            quickSort(nums, 0, nums.size() - 1);
        }
        return nums;
    }
};