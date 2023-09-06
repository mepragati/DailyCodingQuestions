// This problem was asked by Amazon.

// Given a string, determine whether any permutation of it is a palindrome.

// For example, carrace should return true, since it can be rearranged to form racecar, 
// which is a palindrome. 
// daily should return false, since there's no rearrangement that can form a palindrome.

#include<bits/stdc++.h>
using namespace std;

bool checkPalinRearrangement(map<char,int> mp)
{
    bool foundOdd = false;
    for(auto it:mp)
    {
        if(it.second % 2 != 0 && foundOdd == false)
            foundOdd=true;
        else if(it.second % 2 != 0 && foundOdd == true)
            return false;
    }

    return true;
}

int main()
{
    string str;
    cin>>str;
    map<char,int> mp;
    for(int i=0;i<str.size();i++)
        mp[tolower(str[i])]++;

    bool answer = checkPalinRearrangement(mp);
    if(answer == true)
        cout<<"True; Rearrangement can form Palindrome.";
    else
        cout<<"False; No rearrangement can form Palindrome.";

    return 0;
}