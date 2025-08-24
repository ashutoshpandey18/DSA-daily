class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
    //     int n = nums.size();
    //      for(int i = 0; i<n; i++){
    //         for(int j = i+1; i<n; i++){
    //             if(nums[i]+nums[j]==target){
    //                 return {i,j};
    //             }
    //         }
        
    //      }

    //      return{};

    // Optimized one:

    unordered_map<int,int>mp;

    int n  = nums.size();

    for(int i = 0; i<n; i++){
        int complement = target-nums[i];
        if(mp.find(complement)!=mp.end()){
            return {mp[complement],i};
        }

        mp[nums[i]]=i;
    }
    return {};
    }
};