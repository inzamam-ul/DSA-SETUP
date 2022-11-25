# class Solution {
# public:
#     int subarrayLCM(vector<int>& nums, int k) {
#         unsigned int m = nums.size();
#         unsigned int ans = 0;

#         for(int i = 0; i < m; i++){
#             unsigned int lcmi = nums[i];
#             for(int j = i; j < m; j++){
#                 lcmi = std::lcm(lcmi, nums[j]);
#                 if(lcmi == k){
#                     ans++;
#                 }
#             }
#         }
#         return ans;
#     }
# };


def subarrayLCM(nums, k):
    m = len(nums)
    ans = 0
    for i in range(m):
        lcmi = nums[i]
        for j in range(i, m):
            lcmi = lcm(lcmi, nums[j])
            if lcmi == k:
                ans += 1
    return ans