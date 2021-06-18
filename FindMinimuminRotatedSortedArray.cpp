class Solution {
public:
    int findMin(vector<int>& nums) {
        int start = 0;
        int n = nums.size();
        int end = n-1;
        while(start<=end){
            if(nums[start]<=nums[end]){
                return nums[start];
            }
            int mid = start +(end-start)/2;
            int prev = (mid + n - 1)%n;
            int next = (mid + 1) %n;
            if(nums[mid] <= nums[prev] && nums[mid] <= nums[next] ){
                return nums[mid];
            }
            else if(nums[mid] >= nums[start]){
                start = mid+1;
            }
            else if(nums[mid] <= nums[end]){
                end = mid - 1;
            }
        }
        return -1;
        
    }
};
