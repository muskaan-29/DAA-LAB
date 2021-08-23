#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,minimum;
    cout<<"Enter size of array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter array elements"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int comp=0,swapped=0;
    for(int i=0;i<n-1;i++)
    {
        minimum = i;
        for(int j=i+1;j<n;j++)
        {

            if(comp++ && arr[j]<arr[minimum])
            {
                minimum = j;

            }
        }
        swap(arr[minimum],arr[i]);
        swapped++;
    }
    cout << "\n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";
    cout<<"Comparisons = "<<comp<<endl;
    cout<<"Swaps = "<<swapped<<endl;
}
