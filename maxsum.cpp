#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t>0)
    {
        int n,k;
        cin>>n>>k;
        vector<int> res;
        for(int i = 0;i<n;i++)
        {
            int p;
            cin>>p;
            res.push_back(p);
        }
        sort(res.begin(),res.end());
        while(k>0)
        {
            if(*(res.begin())+*(res.begin()+1)+1 < *res.end())
                
        }





        t--;
    }
}