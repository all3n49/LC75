class Solution {
public:
    string reverseVowels(string s) {
        stack<char>s1;
        int n=s.length();
        for(int i=0;i<n;i++)
        {
            if(s[i]=='a'||s[i]=='e'||s[i]=='i' || s[i]=='o'||s[i]=='u' || s[i]=='A'||
            s[i]=='E'||s[i]=='I' || s[i]=='O'||s[i]=='U')
            {
                s1.push(s[i]);
            }
        }
        for(int i=0;i<n;i++)
        {
            if(s[i]=='a'||s[i]=='e'||s[i]=='i' || s[i]=='o'||s[i]=='u' || s[i]=='A'||
            s[i]=='E'||s[i]=='I' || s[i]=='O'||s[i]=='U')
            {
                char x=s1.top();
                s1.pop();
                s[i]=x;

            }
        }
        return s;
    }
};
