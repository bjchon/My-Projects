#include <iostream>
#include <stack>
#include <list>

using namespace std;

class StronglyConnectedComponents
{
    private:
            int Vertex;
            list<int> *adjacent;
            void SCCID(int vertex, bool traversed[], stack<int> &Stack);
            void SSCDFS(int vertex, bool traversed[],int node,int arr[]);
    
    public:            
            StronglyConnectedComponents(int Vertex);
            void connectededge(int u, int v);
            StronglyConnectedComponents getTranspose();
            void print(int node,int arr[]); 
};

StronglyConnectedComponents::StronglyConnectedComponents(int vertex)
{
    Vertex = vertex;
    adjacent = new list<int>[vertex];
}

void StronglyConnectedComponents::connectededge(int u, int v)
{
    adjacent[u].push_back(v);
}

void StronglyConnectedComponents::SSCDFS(int vertex, bool traversed[],int node,int arr[])
{
    traversed[vertex] = true;
    arr[vertex] = node;
    list<int>::iterator i;

    for(i = adjacent[vertex].begin(); i != adjacent[vertex].end(); i++)
        if(!traversed[*i])
            SSCDFS(*i, traversed,node,arr);
}

void StronglyConnectedComponents::SCCID(int vertex, bool traversed[], stack<int> &Stack)
{
    traversed[vertex] = true;
    list<int>::iterator i;

    for(i = adjacent[vertex].begin(); i != adjacent[vertex].end(); i++)
        if(!traversed[*i])
            SCCID(*i, traversed, Stack);

    Stack.push(vertex);
}

StronglyConnectedComponents StronglyConnectedComponents::getTranspose()
{
    StronglyConnectedComponents s(Vertex);

    for (int vertex = 0; vertex < Vertex; vertex++)
    {
        list<int>::iterator i;

        for(i = adjacent[vertex].begin(); i != adjacent[vertex].end(); i++)
            s.adjacent[*i].push_back(vertex);
    }

    return s;
}

void StronglyConnectedComponents::print(int node,int arr[])
{
    stack<int> Stack;
    bool *traversed = new bool[Vertex];

    for(int i = 0; i < Vertex; i++)
        traversed[i] = false;

    for(int i = 0; i < Vertex; i++)
        if(traversed[i] == false)
            SCCID(i, traversed, Stack);

    StronglyConnectedComponents scc = getTranspose();

    for(int i = 0; i < Vertex; i++)
        traversed[i] = false;
    
    while (Stack.empty() == false)
    {
        int vertex = Stack.top();
        Stack.pop();
        if (traversed[vertex] == false)
        {
            scc.SSCDFS(vertex, traversed,vertex,arr);
            int min=vertex;

            for(int i=0;i<node;i++)
                if(arr[i]==vertex)
                    if(min>i)
                        min=i;

            for(int i=0;i<node;i++)
                if(arr[i]==vertex)
                    arr[i]=min;
        }
    }

    for(int i=0;i<node;i++)
        cout<<arr[i]<<endl;
}

int main()
{
    int vertices,edges;
    cin>>vertices;
    cin>>edges;

    StronglyConnectedComponents s(vertices);

    for(int i=0;i<edges;i++)
    {
        int u,v;
        cin>>u>>v;
        s.connectededge(u,v);
    }

    int arr[vertices];

    for(int i=0;i<vertices;i++)
        arr[i]=vertices+2;
    
    s.print(vertices,arr);

    return 0;
}