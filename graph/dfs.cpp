#include<bits/stdc++.h> 
using namespace std;

void dfs(char startnode,map<char,vector<char>>&adj,map<char,bool>&visited){

        visited[startnode]=true;
        cout<<startnode<<" ";

            for(char neighbour:adj[startnode]){
                if(!visited[neighbour]){
                    dfs(neighbour,adj,visited);
                }
            }

}


int main()
{
        map<char, vector<char>> adj;
        map<char,bool>visited;

    // Adding edges (Directed graph example)
    adj['A'].push_back('B');
    adj['A'].push_back('C');
    adj['B'].push_back('D');
    adj['C'].push_back('D');
    adj['D'].push_back('E');

    dfs('A',adj,visited);
}