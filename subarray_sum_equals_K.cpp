#include <bits/stdc++.h>
using namespace std;

int subarraySum(vector<int>& A, int K) 
{
        
        int count=0;
        int N=A.size();
        unordered_map<int,int>mpp;
        int sum=0;
        for(int i=0;i<N;i++)
        {
            sum+=A[i];
            if(sum==K)
            {
                count++;
            }
            int rem=sum-K;
            if(mpp.find(rem)!=mpp.end())
            {
                count+=mpp[rem];
            }
            mpp[sum]++;
        }
        return count;
    }
    int main()
    {
    
        vector<int>arr = { 1,1,1,2,3,4};
        int k = 3;
        cout << "No of subarrays " << subarraySum(arr, k);
    
        return 0;
    }