#include<bits/stdc++.h>
using namespace std;
void arrIntersect(int arr1[], int arr2[], int m, int n)
{
     int i = 0, j = 0;
    while (i <= m && j <= n)
    {
        if (arr1[i] < arr2[j])
            i++;
        else if (arr2[j] < arr1[i])
            j++;
        else
        {
            cout << " "<<arr1[i]<<" ";
            i++;
            j++;
        }
    }
}
int main()
{
    int n,m,i,j;
    cout<<"Enter size of first array"<<endl;
    cin>>n;
    int arr1[n];
    cout<<"Enter first array"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>arr1[i];
    }
    cout<<"Enter size of second array"<<endl;
    cin>>m;
    int arr2[m];
    cout<<"Enter second array"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>arr2[i];
    }
    arrIntersect(arr1,arr2,m,n);
}
