class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=0,j=i+1;
        int c=0;
        nums[c]=nums[0];
        c++;
        while(i<nums.size() && j<nums.size())
        {
            if(nums[i] == nums[j])
            {
                j++;
            }
            else
            {
                nums[c]=nums[j];
                i=j;
                j++;
                c++;
            }
        }
        return c;
    }
};