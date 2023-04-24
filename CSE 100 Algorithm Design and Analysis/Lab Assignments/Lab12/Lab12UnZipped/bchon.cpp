#include <bits/stdc++.h>
#include <iostream>

using namespace std;

struct Edge
{
    int src, dest, weight;
};

struct Graph
{
    int V, E;
    struct Edge* edge;
};

struct Graph* createGraph(int V, int E)
{
    struct Graph* graph = new Graph;
    graph->V = V;
    graph->E = E;
    graph->edge = new Edge[E];
    
    return graph;
}

void print(int dist[], int n)
{
    for (int i = 0; i < n; ++i)
    {
        if(dist[i] == INT_MAX)
            printf("INFINITY\n");
        else
            printf("%d\n", dist[i]);
    }
}

void BellmanFord(struct Graph* graph, int src)
{
    int V = graph->V;
    int E = graph->E;
    int dist[V];

    for(int i = 0; i < V; i++)
        dist[i] = INT_MAX;

    dist[src] = 0;

    for(int i = 1; i <= V-1; i++)
        {
            for (int j = 0; j < E; j++)
            {
                int u = graph->edge[j].src;
                int v = graph->edge[j].dest;
                int weight = graph->edge[j].weight;
                if (dist[u] != INT_MAX && dist[u] + weight < dist[v])
                dist[v] = dist[u] + weight;
            }
        }

    for(int i = 0; i < E; i++)
        {
            int u = graph->edge[i].src;
            int v = graph->edge[i].dest;
            int weight = graph->edge[i].weight;
            
            if(dist[u] != INT_MAX && dist[u] + weight < dist[v])
                {
                    cout << "FALSE\n";
                    return;
                }
        }

    cout << "TRUE\n";
    print(dist, V);
}

int main()
{
   int V;
   int E;
   int u, v, c;

   cin >> V >> E;
   
   struct Graph* graph = createGraph(V, E);

   for(int i=0; i<E; i++)
   {
       cin >> u >> v >> c;
       graph->edge[i].src = u;
       graph->edge[i].dest = v;
       graph->edge[i].weight = c;
   }

   BellmanFord(graph, 0);

   return 0;
}