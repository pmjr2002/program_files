#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t>0)
    {
        int n;
        cin>>n;
        vector<int> res,temp;
        for(int i = 0;i<n;i++)
            cin>>res[i];
        for(int i = 0;i<n;i++)
        {
            for(int j = 0;j<n;j++)
            {
                if(i==j)
                    continue;
                temp.push_back(res[i]);
                for(int k = 1;k<=n-2;k++)
                {
                    temp.push_back(res[j]);
                    temp.push_back(res[i]-res[j]);
                }
                 sort(temp.begin(),temp.end());
                 sort(res.begin(),res.end());
                if(temp==res)
                    cout<<res[i]<<endl;
                
            }
        }
        t--;
    }
}