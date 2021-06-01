class Solution {
public:
    int reverse(int x) {
        int rem = 0;
        if(x<0){
            x = x*(-1);
        }
        while(x>0){
            rem = rem*10 + x%10;
            x = x/10;
        }
        if(rem<0){
            rem = rem*(-1);
        }
        return rem;
        
    }
};
