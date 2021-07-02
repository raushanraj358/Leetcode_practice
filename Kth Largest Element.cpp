class Solution {
public:
int findKthLargest(vector& nums, int k) {

   priority_queue<int,vector<int>,greater<int>> pq;
   
   // Now traverse through the vector's element and push it to the min heap 
   
    for(int i = 0;i <nums.size(); i++){
        pq.push(nums[i]);
		
		/*After this step , we check whether the size of min heap is greater or smaller than k, if it is greater than k then we pop the element from the min heap . */
		
        if(pq.size()>k){
            pq.pop();
        }
    }
	// At last we return the top element of the min heap which is the required ans.
    return pq.top();
}
};
