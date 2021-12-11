#include<bits/stdc++.h>
using namespace std;
void path(vector<int>& parent, int j)
{
	if (parent[j] == - 1)
	{
		cout<<j;
		return;
	}
	printf("%d ", j);
	path(parent, parent[j]);
}
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	//getting input graph
	int n,e;
	cin>>n>>e;
	vector<vector<pair<int,int>>> graph(n+1);
	for(int i=0;i<e;i++)
	{
		int s,d,w;
		cin>>s>>d>>w;
		graph[s].push_back({d,w});
		graph[d].push_back({s,w});
	}
	//making a distance array and a set
	vector<int> dist(n+1,INT_MAX);
	set<pair<int,int>> s;
	int source;
	cin>>source; //inputting source
	dist[source]=0; //initializing source distance to 0
	s.insert({0,source}); //inserting source into set as {wt, vertex} pair
	vector<int> parent(n+1, -1);
	while(!s.empty())
	{
		auto x = *(s.begin()); // getting the lowest weighted verte from set
		s.erase(x); //removing from set
		//iterating through all other vertices to relax them if needed
		for(auto it: graph[x.second])
		{
			if(dist[it.first] > dist[x.second]+it.second)
			{ 
				//relaxing
				s.erase({dist[it.first],it.first});
				dist[it.first] = dist[x.second]+it.second;
				s.insert({dist[it.first],it.first});
				parent[it.first]= x.second;
			}
		}
	}
	// printing the path and shortest distance as result
	for(int i=1;i< n+1;i++)
	{
		path(parent, i);
		cout<<" : "<<dist[i]<<endl;
	}
	return 0;
}