#include <bits/stdc++.h>
using namespace std;
 
    int lenOfLongSubarr(int A[],  int N, int K) 
    { 
        int maxi=0;
        unordered_map<int,int>mpp;
        int sum=0;
        for(int i=0;i<N;i++)
        {
            sum+=A[i];
            if(sum==K)
            {
                maxi=max(maxi,i+1);
            }
            int rem=sum-K;
            if(mpp.find(rem)!=mpp.end())
            {
                int len=i-mpp[rem];
                maxi=max(len,maxi);
            }
            if(mpp.find(sum)==mpp.end())
            {
                mpp[sum]=i;
            }
        }
        return maxi;
    }
    int main()
    {
    
        int arr[] = { 10, 5, 2, 7, 1, 9 };
        int n = sizeof(arr) / sizeof(arr[0]);
        int k = 15;
        cout << "max subarray Length = " << lenOfLongSubarr(arr, n, k);
    
        return 0;
    }