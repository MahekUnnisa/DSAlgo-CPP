//medium problem from leetcode
//URL: https://leetcode.com/problems/reverse-integer/
//Given a signed 32-bit integer x, return x with its digits reversed. 
// If reversing x causes the value to go outside the signed 
// 32-bit integer range [-231, 231 - 1], then return 0.


class Solution {
public:
    int reverse(int x) {
        int rev = 0;
        while(x!=0){
            int temp = x%10;
            rev = rev*10+temp;
            x/=10;
        }
        return rev;
    }
};

// But if we are not allowed to strore in long long int;
//Assume the environment does not allow you to store 64-bit integers (signed or unsigned).

class Solution {
public:
    int reverse(int x) {
        int rev = 0;
        while(x!=0){
            int temp = x%10;
          //check the limit of rev
            if((rev>0) && (rev>((INT_MAX-temp)/10)) || (rev<0) && (rev<((INT_MIN-temp)/10))){
                return 0;
            }
            rev = rev*10+temp;
            x/=10;
        }
        return rev;
    }
};

