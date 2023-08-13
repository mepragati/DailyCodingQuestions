// This problem was asked by Amazon.

// Run-length encoding is a fast and simple method of encoding strings. 
// The basic idea is to represent repeated successive characters as a single count and character. 
// For example, the string "AAAABBBCCDAA" would be encoded as "4A3B2C1D2A".

// Implement run-length encoding and decoding. 
// You can assume the string to be encoded have no digits and consists solely of alphabetic characters. 
// You can assume the string to be decoded is valid.

#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin>>str;
    int n=str.length(),i=1;
    char prev=str[0];
    int count=1;
    string ans;
    while(i<=n)
    {
        if(str[i]==prev && i<=n)
            count++;
        else
        {
            ans+=(count+'0');
            ans+=prev;
            prev=str[i];
            count=1;
        }

        i++;
    }

    cout<<"Encoded string is:"<<ans;
    return 0;
}