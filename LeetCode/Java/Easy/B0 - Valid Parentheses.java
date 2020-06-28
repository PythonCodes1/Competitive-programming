class Solution {
    public boolean isValid(String s) {
        // Use a stack
        Stack<Character> stack = new Stack<Character>();
        // Convert string to an array of characters
        for(char c: s.toCharArray()){
            // It's any of these, push into the stack
            if(c == '(' || c == '[' || c == '{'){
                stack.push(c);
            // If the stack is the closing char & stack is empty & and see if there is "([{" in stack
            } else if (c == ')' && !stack.isEmpty() && stack.peek() == '('){
                stack.pop();
            } else if (c == ']' && !stack.isEmpty() && stack.peek() == '['){
                stack.pop();
            } else if (c == '}' && !stack.isEmpty() && stack.peek() == '{'){
                stack.pop();
            } else {
                return false;
            }
        }
        
        return stack.isEmpty();
    }
}
