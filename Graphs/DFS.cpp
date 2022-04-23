#include <bits/stdc++.h>
using namespace std;

class Graph
{
private:
    int V;
    list<int> *l;

public:
    Graph(int v)
    {
        V = v;
        l = new list<int>[V];
    }

    void addEdge(int i, int j, bool undir = true)
    {
        l[i].push_back(j);
        if (undir)
        {
            l[j].push_back(i);
        }
    }

    void dfsHelper(int n, bool *visited)
    {
        visited[n] = true;
        cout << n << " ";

        //  Make a dfs call on all it's unvisited neighbours.
        for (auto nbr : l[n])
        {
            if (!visited[nbr])
            {
                dfsHelper(nbr, visited);
            }
        }

        return;
    }

    // Time Complexity : O(V + 2*E).
    void dfs(int src)
    {
        bool *visited = new bool[V]{0};
        dfsHelper(src, visited);
    }
};

int main()
{
    Graph g(7);
    g.addEdge(0, 1);
    g.addEdge(1, 2);
    g.addEdge(2, 3);
    g.addEdge(3, 5);
    g.addEdge(5, 6);
    g.addEdge(4, 5);
    g.addEdge(0, 4);
    g.addEdge(3, 4);
    g.dfs(1); // 1 0 4 5 3 2 6

    return 0;
}