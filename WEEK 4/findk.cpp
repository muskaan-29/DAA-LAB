#include<iostream>
using namespace std;
int partition_arr(int arr[],int left,int right)
{
    int pivot = arr[right];
    int i = left;
    for (int j = left; j <= right - 1; j++)
    {
        if (arr[j] <= pivot)
        {
            swap(arr[i], arr[j]);
            i++;
        }
    }
    swap(arr[i], arr[right]);
    return i;
}
int findk(int arr[],int left,int right,int k)
{
     if (k >= 0 && k <= right - left + 1)
     {
        int pos = partition_arr(arr, left, right);
        if (pos - left == k)
        {
            return arr[pos];
        }
        if (pos - left > k) {
            return findk(arr, left, pos - 1, k);
        }
        return findk(arr, pos + 1,right, k - pos + left - 1);
     }
}
int main()
{
    int n;
    cout<<"Enter size of array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter array "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int k;
    cout<<"Enter k"<<endl;
    cin>>k;
    cout<<endl;
    int k_small = findk(arr, 0, n - 1, k-1);
    cout<<k_small<<endl;
    int k_large = findk(arr,0,n-1,n-k);
    cout<<k_large<<endl;
}
