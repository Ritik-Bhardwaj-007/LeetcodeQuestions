class Solution {
public:
    int countDistinctIntegers(vector<int>& nums) {
        unordered_set<int> h;
        for(int i=0;i<nums.size();i++){
            h.insert(nums[i]);
        }

        for(int i=0;i<nums.size();i++){
            int x=nums[i];
            int res=0;
            while(x>0){
                res=(res*10)+(x%10);
                x=x/10;
            }
            h.insert(res);
        }
        return h.size();
    }
};