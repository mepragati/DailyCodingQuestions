// You are given a string of length N and a parameter k. The string can be manipulated by 
//taking one of the first k letters and moving it to the end.

// Write a program to determine the lexicographically smallest string that can be created 
//after an unlimited number of moves.

// For example, suppose we are given the string daily and k = 1. The best we can create in this case is ailyd.

#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int k;
    cin>>s;
    cin>>k;

    if(k>1)
    {
        sort(s.begin(),s.end());
        cout<<s;
        return 0;
    }
            
    string temp=s;
    for(int i=0;i<s.size();i++)
        temp = min(temp,s.substr(i)+s.substr(0,i));
        
    cout<<temp;

    return 0;
}