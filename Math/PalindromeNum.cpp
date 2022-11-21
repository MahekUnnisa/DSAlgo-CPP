/*Given an integer x, return true if x is a palindrome, and false otherwise.
easy
url :  https://leetcode.com/problems/palindrome-number/
*/

//Key Takeways
/*
 1. A number which is negative cannot be a palindrome because of the  minus sign
 2. A number which is divisible by 10 and it is not zero(becoz zero is divisible by 10) cannot be a palindrome.
 3. A number which is divisible by 11 and is less than 100 is always a palindrome.
 */

class Solution {
public:
    bool isPalindrome(int x) {
        int rev = 0;
        //negative numbers cannot be palindrome numbers
        if(x<0){
            return false;
        }
        else if(x%10==0 && x!=0){
            return false;
        }
        else{
            
            while(rev<x){
                rev = rev*10+x%10;
                x/=10;
            }
        }
        return x==rev || x==rev/10;
    }
};
