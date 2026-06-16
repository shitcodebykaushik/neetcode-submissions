class Solution {
public:

    bool isValid(string s) {

        char st[10000];
        int top = -1;

        for(int i = 0; i < s.size(); i++) {

            char ch = s[i];

            // Opening brackets
            if(ch == '(' || ch == '{' || ch == '[') {
                st[++top] = ch;
            }
            // Closing brackets
            else {

                if(top == -1)
                    return false;

                if(ch == ')' && st[top] != '(')
                    return false;

                if(ch == '}' && st[top] != '{')
                    return false;

                if(ch == ']' && st[top] != '[')
                    return false;

                top--;
            }
        }

        return top == -1;
    }
};