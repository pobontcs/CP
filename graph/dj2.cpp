#include <bits/stdc++.h>
using namespace std;

void Short_path(int source, vector<vector<pair<int, int>>>& adj_list, int target) {
    int n = adj_list.size();
    vector<int> dist(n, INT_MAX); // Distance array initialized to infinity
    vector<bool> visited(n, false); // Visited array to track processed nodes
    dist[source] = 0;

    // Set to store {distance, node}, sorted by distance
    set<pair<int, int>> s;
    s.insert({0, source});

    while (!s.empty()) {
        // Extract the node with the smallest distance
        auto it = s.begin();
        int d = it->first;
        int u = it->second;
        s.erase(it);

        // If we've reached the target, print the distance and return
        if (u == target) {
            cout << "Shortest distance from " << source << " to " << target << " is " << d << endl;
            return;
        }

        // Skip if the node is already visited
        if (visited[u]) continue;
        visited[u] = true;

        // Traverse all adjacent nodes
        for (auto &m : adj_list[u]) {
            int v = m.first;       // Adjacent node
            int weight = m.second; // Edge weight

            // Relaxation step: check if the path through u offers a shorter distance to v
            if (!visited[v] && dist[u] + weight < dist[v]) {
                // If v is already in the set, remove it
                s.erase({dist[v], v});
                
                // Update distance and insert the new distance
                dist[v] = dist[u] + weight;
                s.insert({dist[v], v});
            }
        }
    }

    // If target is unreachable
    cout << "No path from " << source << " to " << target << " exists." << endl;
}

int main() {
    int n = 5; // Number of nodes in the graph
    vector<vector<pair<int, int>>> adj(n);

    // Define the edges and weights
    adj[0].push_back(make_pair(1, 10));
    adj[0].push_back(make_pair(2, 2));
    adj[1].push_back(make_pair(4, 4));
    adj[1].push_back(make_pair(3, 1));
    adj[2].push_back(make_pair(3, 1));
    adj[3].push_back(make_pair(4, 5));

    // Run the shortest path function from source 0 to target 4
    Short_path(0, adj, 4);

    return 0;
}
