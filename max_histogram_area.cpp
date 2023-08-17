#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int largestRectangleArea(vector<int>& heights) 
    {
        int n=heights.size();
        int maxi=0;
        stack<int>st;
        for(int i=0;i<=n;i++)
        {
            while(!st.empty() && (i==n || heights[st.top()]>=heights[i]))
            {
                int h= heights[st.top()];
                st.pop();
                int w;
                if(st.empty())
                {
                    w=i;
                }
                else
                {
                    w=i-st.top()-1;
                }
                maxi=max(maxi,w*h);
            }
            st.push(i);
        }
        return maxi;
    }
};

int main()
{
    Solution obj;
    vector<int>heights= { 6, 2, 5, 4, 5, 1, 6 };
    cout << "Maximum area is " << obj.largestRectangleArea(heights);
    return 0;
}