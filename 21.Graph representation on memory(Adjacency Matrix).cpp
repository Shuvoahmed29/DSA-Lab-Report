// 21.Graph representation on memory(Adjacency Matrix).cpp
#include <bits/stdc++.h>
using namespace std;
int graph[1000][1000];
int main()
{
    int vertex, edge;
    cout << "Enter number of vertices: ";
    cin >> vertex;
    cout << "Enter number of edges: ";
    cin >> edge;
    cout << "Enter the edges!!\n";
    int v1, v2;
    for (int i = 0; i < edge; i++)
    {
        cin >> v1 >> v2;
        graph[v1][v2] = 1;
        graph[v2][v1] = 1;
    }
    cout << "\nAdjacency Matrix!!\n";
    for (int i = 1; i <= vertex; i++)
    {
        for (int j = 1; j <= vertex; j++)
        {
            cout << graph[i][j] << " ";
        }
        cout << endl;
    }
}