#include<bits/stdc++.h>
#include <queue>
#define SIZE 20
using namespace std;
bool isBipartite(int *G[SIZE], int V)
{
    queue<int> Q;
    int *color = new int[V]();
    int current = 1;

    color[0] = current;
    Q.push(0);

    while (!Q.empty()) {
        int u = Q.front();
        Q.pop();

        if (G[u][u])
            return false;

        current *= -1;

        for (int v = 0; v < V; ++v) {
            if (G[u][v] && color[v] == 0) {
                color[v] = current;
                Q.push(v);
            }
            else if (G[u][v] && color[u] == color[v])
                return false;
        }
    }
    return true;
}
int main()
{
    int t, v;
    cin >> t;
    while (t--)
    {
        cin >> v;
        int **G = new int*[v];
    for (int i = 0; i < v; ++i)
    {
            G[i] = new int[v];
            for (int j = 0; j < v; ++j)
                cin >> G[i][j];
    }
    if (isBipartite(G, v))
        cout << "YES Bipartite"<<endl;
    else
        cout << "NOT Bipartite"<<endl;
    cout << endl;

    delete[] G;
    }
    return 0;
}
