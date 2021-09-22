#include<bits/stdc++.h>
#include <stack>
#define SIZE 20
using namespace std;
bool ispath(int *G[SIZE], int V, int s, int d) {
    stack<int> st;
    bool *visited = new bool[V]();

    st.push(s);
    visited[s] = 1;

    while (!st.empty())
    {
        int u = st.top();
        st.pop();

        for (int v = 0; v < V; ++v)
        {
            if (G[u][v] && v == d)
                return true;

            if (G[u][v] && !visited[v])
            {
                st.push(v);
                visited[v] = 1;
            }
        }
    }

    return false;
}
int main() {
    int t, v, s, d;
    cout<<"Enter no of test cases"<<endl;
    cin >> t;
    while (t--)
    {
        cout<<"Enter vertex"<<endl;
        cin >> v;
        int **G = new int*[v];

        for (int i = 0; i < v; ++i)
        {
            G[i] = new int[v];
            for (int j = 0; j < v; ++j)
                cin >> G[i][j];
        }
        cout<<"Enter source and destination"<<endl;
        cin >> s >> d;
        if (ispath(G, v, s, d))
            cout << "YES, path exists";
        else
            cout << "NO, path doesn't exist";
        cout << endl;

        delete[] G;
    }
    return 0;
}
