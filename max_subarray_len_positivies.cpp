#include <bits/stdc++.h>
using namespace std;
 
int lenOfLongSubarr(int A[],  int N, int k) 
{ 
    int left=0;
    int right=0;
    int sum=A[0];
    int len=0;
    while(right<N)
    {
        while(left<=right && sum>k)
        {
            sum-=A[left];
            left++;
        }
        if(sum==k)
        {
            len=max(len,right-left+1);
        }
        right++;
        if(right<N)
        {
            sum+=A[right];
        }
    }
    return len;
} 
 
int main()
{
 
    int arr[] = { 10, 5, 2, 7, 1, 9 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 15;
    cout << "Length = " << lenOfLongSubarr(arr, n, k);
 
    return 0;
}