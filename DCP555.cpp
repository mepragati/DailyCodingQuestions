// This problem was asked by Amazon.
// An sorted array of integers was rotated an unknown number of times.
// Given such an array, find the index of the element in the array in faster than linear time. 
// If the element doesn't exist in the array, return null.

// For example, given the array [13, 18, 25, 2, 8, 10] and the element 8, return 4 (the index of 8 in the array).

// You can assume all the integers in the array are unique.
#include<bits/stdc++.h>
using namespace std;
int findPivot(vector<int> vect)
{
    int n=vect.size();
    int start=0,end=n-1,mid;
    if(vect[start]<vect[end])
        return 0;
    while(start<end)
    {
        mid=start+(end-start)/2;
        if(vect[start]<vect[mid])
            start=mid;
        else
            end=mid;
    }
    return mid+1;
}

int findElement(vector<int> arr,int start,int end,int element)
{
    while(start<end)
        {
            int mid=start+(end-start)/2;
            if(arr[mid]==element)
                return mid;
            else if(element<arr[mid])
                end=mid-1;
            else
                start=mid+1;
        }
    return -1;
}
int main()
{
    int n,element;
    cin>>n;
    cin>>element;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
        cin>>arr[i];
    
    int pivot=findPivot(arr);
    int ans=0;
    //cout<<"Pivot Element is:"<<pivot;
    if(element>arr[0])
        //value is in 2nd half
        ans=findElement(arr,0,pivot-1,element);

    else
        ans=findElement(arr,pivot,arr.size(),element);
    
    cout<<"Element is at:";
    if(ans==-1)
        cout<<"NULL";
    else
        cout<<ans;
    return 0;
}