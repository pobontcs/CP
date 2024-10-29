#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n = 5;
    vector<vector<pair<int, int>>> adj(n);

    // Add edges to the adjacency list
    adj[0].push_back(make_pair(1, 10));
    adj[0].push_back(make_pair(2, 2));
    adj[1].push_back(make_pair(4, 4));
    adj[1].push_back(make_pair(3, 1));
    adj[2].push_back(make_pair(3, 1));
    adj[3].push_back(make_pair(4, 5));

    // Print only adj[0]   
    for (auto &m : adj[0]) {
        cout << m.first << ", " << m.second << endl;
    }



return 0;
}