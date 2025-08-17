class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n=0;
        for(int i : nums){
            n++;
        }
        // std::cout << n<<std::endl;
        std::vector<int> ans(2 * n);
        for(int i=0; i < n; i++){
            ans[i] = nums[i];
            ans[i +n] = nums[i];
        }
        return ans;
    }
};
