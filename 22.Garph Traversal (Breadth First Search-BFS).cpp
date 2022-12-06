// 22.Garph Traversal (Breadth First Search-BFS).cpp
#include <bits/stdc++.h>
using namespace std;
template <typename tp>
class graph{
    map<tp, list<tp>> mp;

public:
    void addEdge(int x, int y){
        mp[x].push_back(y);
        mp[y].push_back(x);
    }
    void BFS(tp src){
        map<tp, bool> visited;
        queue<tp> Q;
        Q.push(src);
        visited[src] = true;

        while (!Q.empty()){
            tp node = Q.front();
            Q.pop();
            cout << node << " ";
            for (int d : mp[node]){
                if (!visited[d]){
                    Q.push(d);
                    visited[d] = true;
                }
            }
        }
    }
};
int main(){
    graph<int> g;
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 2);
    g.addEdge(2, 0);
    g.addEdge(2, 3);
    g.addEdge(3, 3);

    g.BFS(2);
}
