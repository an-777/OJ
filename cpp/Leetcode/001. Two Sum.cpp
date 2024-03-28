class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int , int> ary;
        vector<int> res;
        for(int i = 0 ; i < nums.size() ; i++){
            ary.insert({nums[i] , i});
        }
        for(int i = 0 ; i < nums.size() ; i++){
            if(ary.find(target - nums[i]) != ary.end() && ary[target - nums[i]] != i){
                res.resize(2);
                res[0] = i;
                res[1] = ary[target - nums[i]];
                break;
            }
        }
        return res;
    }
};
