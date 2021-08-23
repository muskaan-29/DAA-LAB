#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter array size"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter array elements"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    int flag = 0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==arr[i+1])
        {
            flag =1;
            break;
        }
    }
    if(flag==1)
    {
         cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
}
