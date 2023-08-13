// A Collatz sequence in mathematics can be defined as follows. Starting with any positive integer:

// if n is even, the next number in the sequence is n / 2
// if n is odd, the next number in the sequence is 3n + 1
// It is conjectured that every such sequence eventually reaches the number 1. Test this conjecture.

// Bonus: What input n <= 1000000 gives the longest sequence?

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;

    int count=0;

    while(n>1)
    {
        cout<<n<<" ";
        if(n%2==0)
            n/=2;
        else
            n=3*n+1;
        
        count++;
    }
    cout<<n;
    count++;
    cout<<endl;
    if(n==1)
        cout<<"Conjectured"<<" "<<count;
    else
        cout<<"Not Conjectured"<<" "<<count;
    return 0;
}