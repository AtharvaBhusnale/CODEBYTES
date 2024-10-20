class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
    int n = nums.size() , final_size = 1;

    if (n == 0 )
        return 0 ;
    for (int i = 1; i < n; i++) {
        if (nums[i] != nums[i - 1]) 
        {
            nums[final_size] = nums[i];
            final_size++;
        }
    }
    return final_size;
    }
};
