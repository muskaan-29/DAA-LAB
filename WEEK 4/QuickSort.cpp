#include <cstdlib>
#include<bits/stdc++.h>
using namespace std;
int partition_arr(int arr[], int left, int right)
{
    int pivot = arr[right];
    int i = (left - 1);
    for (int j = left; j <= right - 1; j++)
    {
        if (arr[j] <= pivot)
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[right]);
    return (i + 1);
}
int random_partition(int arr[], int left, int right)
{
    srand(time(NULL));
    int random = left + rand() % (right - left);
    swap(arr[random], arr[right]);
    return partition_arr(arr, left, right);
}
void quicksort(int arr[], int left, int right)
{
    if (left < right)
    {
        int pi = random_partition(arr, left, right);
        quicksort(arr, left, pi - 1);
        quicksort(arr, pi + 1, right);
    }
}
int main()
{
    int n;
    cout<<"Enter size of array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter array elements"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<endl;
    quicksort(arr, 0, n - 1);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
