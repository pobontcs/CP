#include<bits/stdc++.h>
using namespace std;

int number_of_vertices,cost[100][100];
int dis[100];
bool visited[100]={0};


void djikstras(int source,vector<vector<pair<int,int>>>graph,int V){
        vector<int>dist(V,INT_MAX);
        dist[source]=0;


        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;

                pq.push(make_pair(0,source));

                while(!pq.empty()){
                        int u=pq.top().second;
                        pq.pop();

                        for(auto& x:graph[u]){
                                int v=x.first;
                                int weight=x.second;

                                if(dist[u]+weight< dist[v])
                                {
                                        dist[v]=dist[u]+weight;
                                        pq.push(make_pair(dist[v],v));
                                }

                        }
                }
                 for (int i = 0; i < V; i++) {
        cout << i << "\t\t" << dist[i] << "\n";  // Print each node and its shortest distance
    }


}
void dfs(char c,map<char,vector<char>>&adj,map<char,bool>&visited){

        visited[c]=true;
        cout<<c<<" ";

            for(char neighbour:adj[c]){
                if(!visited[neighbour]){
                    dfs(neighbour,adj,visited);
                }
            }

}

int main(){
        vector<vector<pair<int,int>>>graph(5);

        graph[0].push_back(make_pair(1, 1));  // Edge 0 -> 1 with weight 1
    graph[0].push_back(make_pair(2, 4));  // Edge 0 -> 2 with weight 4
    graph[1].push_back(make_pair(2, 4));  // Edge 1 -> 2 with weight 4
    graph[1].push_back(make_pair(3, 2));  // Edge 1 -> 3 with weight 2
    graph[2].push_back(make_pair(3, 1));  // Edge 2 -> 3 with weight 1
    graph[3].push_back(make_pair(4, 2));

    djikstras(0,graph,5);





}
