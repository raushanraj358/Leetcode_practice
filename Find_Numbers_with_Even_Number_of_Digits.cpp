class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int counter = 0,digits; // Initialize variable to store the result
        for(auto num: nums){   // Or, for(int i=0;i<nums.size();i++)
            digits = 0;
            while(num>0){  // Find the number of digits in an integer
                num = num / 10;  // Drop the unit digit, as we have already taken it to consideration
                digits = digits + 1;  // Increment the digit count
            }
            if(digits % 2 == 0){  // Or, digit & 1 = 0;
                counter = counter + 1; // If digit count is even, increment the counter
            }
        }
        return counter; // Return the counter
    }
};
