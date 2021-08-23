#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter size of array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter unsorted array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int j,t,shift = 0,comp = 0;
    for(int i=1;i<n;i++)
    {
        t = arr[i];
        j = i-1;
        while(j>=0 && arr[j]>t)
        {
            comp++;
            arr[j+1] = arr[j];
            shift++;
            j = j-1;
        }
        shift++;
        arr[j+1] = t;
    }
    cout << "\n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";
    cout<<"Comparisons = "<<comp<<endl;
    cout<<"Shifts = "<<shift<<endl;


}
