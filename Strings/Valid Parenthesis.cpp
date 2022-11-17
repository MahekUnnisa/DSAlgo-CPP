/*
Easy
https://leetcode.com/problems/valid-parentheses/

Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.
An input string is valid if:
1. Open brackets must be closed by the same type of brackets.
2. Open brackets must be closed in the correct order.
3. Every close bracket has a corresponding open bracket of the same type.
 
Example 1:

Input: s = "()"
Output: true
*/


//Solution

bool isValidParenthesis(string expression)
{
  	 stack<char> s;
     for(int i=0; i<expression.length(); i++) {
         
         char ch = expression[i];
         
         //if opening bracket, stack push
         //if close bracket, stacktop check and pop
         
//always use simgle quotes for strings
         if(ch == '(' || ch == '{' || ch == '['){
             s.push(ch);
         }
         else
         {
             //for closing bracket
             if(!s.empty()) {
                  char top = s.top();
                  if( (ch == ')' && top == '(') || 
                     ( ch == '}' && top == '{') || 
                     (ch == ']' && top == '[') ) {
                      s.pop();
                  }
                 else
                 {
                     return false;
                 }
             }
             else
             {
                 return false;
             } 
         }  
     }
    
    if(s.empty())
        return true;
    else
        return false;
}
