#include<iostream>
using namespace std;
int compare = 0;
int mergearray(int arr[], int temp[], int left, int mid, int right)
{
   int i, j, k;
   int counter = 0;
   i = left;
   j = mid;
   k = left;
   while ((i <= mid - 1) && (j <= right))
    {
      if (arr[i] <= arr[j])
      {
          compare++;
          temp[k++] = arr[i++];
      }
      else
      {
          compare++;
          temp[k++] = arr[j++];
          counter += (mid - i);
      }
    }
   while (i <= mid - 1)
      temp[k++] = arr[i++];
   while (j <= right)
      temp[k++] = arr[j++];
   for (i=left; i <= right; i++)
      arr[i] = temp[i];
   return counter;
}
int mergesort(int arr[], int temp[], int left, int right)
{
   int mid, counter = 0;
   if (right > left)
    {
      mid = (right + left)/2;
      counter = mergesort(arr, temp, left, mid);
      counter += mergesort(arr, temp, mid+1, right);
      counter += mergearray(arr, temp, left, mid+1, right);
    }
   return counter;
}
int inversioncount(int arr[], int n) {
   int temp[n];
   return mergesort(arr, temp, 0, n - 1);
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
    int invcounter = inversioncount(arr, n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }
    cout<<endl;
    cout<<"Comparisons = "<<compare<<endl;
    cout << "Inversions = "<< invcounter<<endl;
}
