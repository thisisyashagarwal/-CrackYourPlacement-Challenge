class Solution {
public:
    bool isValid(string str) {
        stack<char>s;
        int n = str.length();
        int i,j;
        if( n%2 != 0)
            return false;
        for( i=0; i<n; i++)
        {
            if( str[i] == '(' || str[i] == '{' || str[i] == '[')
                s.push(str[i]);
            else
            {
                if( s.empty())
                    return false;
                char ch = s.top();
                cout<<ch;
                if( ch == '(' && str[i] == ')' )
                    s.pop();
                else if( ch == '[' && str[i] == ']')
                    s.pop();
                else if( ch == '{' && str[i] == '}')
                    s.pop();
                else
                    return false;
                
            }
        }
        if( !s.empty())
            return false;
        else
            return true;
    }
};
