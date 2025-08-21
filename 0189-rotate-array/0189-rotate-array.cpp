class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
     
        int start = 0;
        int end = n-1;


       if(n==0) return;
        k = k%n;
// Reverse an entire array

        while(start<end){
            swap(nums[start],nums[end]);
            start++;
            end--;
        }

        // first k elements reversed

        start = 0;

        end = k-1;

        while(start<end){
            swap(nums[start], nums[end]);
            start++;
            end--;
        }

// Reverse remaining n-k elements
        start = k;

        end = n-1;

        while(start<end){
            swap(nums[start],nums[end]);

            start++;

            end--;
        }
    }
};