#include<iostream>
#include<math.h>
using namespace std;
void copy(int a[],int arr[],int st,int end)
{
    int i = 0;
    for(int j = st;j<=end;j++)
    {
        a[i] = arr[j];
        i++;
    }
}
void merge(int a[],int b[],int arr[],int mid,int end)
{
    int i = 0;
    int j = mid+1;
    int k = 0;
    while(i<=mid&&j<=end)
    {
        if(a[i]<b[j-(mid+1)])
            {
                arr[k] = a[i];
                i++;
                k++;
            }
        else
        {
            arr[k] = b[j-(mid+1)];
            j++;
            k++;
        }
    }
    while(i<=mid)
    {
        arr[k] = a[i];
        i++;
        k++;
    }
     while(j<=end)
    {
        arr[k] = b[j-(mid+1)];
        j++;
        k++;
    }
}
void merge_sort(int arr[],int st,int end)
{
    if(st<end){
    int mid = (st+end)/2;
    int a[10];
    int b[10];
    copy(a,arr,st,mid);
    copy(b,arr,mid+1,end);
    merge_sort(a,0,mid);
    merge_sort(b,0,end-(mid+1));
    merge(a,b,arr,mid,end);

}}
int main()
{
    int arr[9] = {1,3,4,5,7,8,9,2,6};
    merge_sort(arr,0,8);
    for(int i = 0;i<=8;i++)
    {
        cout<<arr[i];
    }
}
