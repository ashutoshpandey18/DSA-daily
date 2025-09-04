class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> mp;  // {prefixSum -> freq}
        mp[0] = 1;  // initially ek empty prefix rakha hai

        int sum = 0, count = 0;

        for(int i = 0; i < nums.size(); i++) {
            sum += nums[i];

            if(mp.find(sum - k) != mp.end()) {
                count += mp[sum - k];  // jitni bar mila utni bar add
            }

            mp[sum]++;  // store current prefix sum
        }

        return count;
    }
};
