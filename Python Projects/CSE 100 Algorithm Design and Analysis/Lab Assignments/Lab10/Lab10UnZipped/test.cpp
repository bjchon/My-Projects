#include <iostream>
#include <list>
#include <stack>

using namespace std;

class StronglyConnectedComponents
{
    int Vertex;
    // List of adjacent node
    list<int> *adjacent;
    // creates function to fill node
    void SCCID(int vertex, bool traveresd[], stack<int> &Stack);

    // Creates function, DFS to traverse
    void SSCDFS(int vertex, bool traveresd[],int node,int ar[]);
    
   
    public:
             // creates constructor
            StronglyConnectedComponents(int Vertex);
            void connectededge(int vertex, int w);
            // create the function to print the the stongly connected components
            void printSCCs(int node,int arr[]); 
            // transpose method to conncet the graph
            StronglyConnectedComponents getTranspose();

};

// define the function of strongly connected class
StronglyConnectedComponents::StronglyConnectedComponents(int Vertex)
{
    //traverse the vertex
    this->Vertex = Vertex;

    // traverse the adjacent vertex
    adjacent = new list<int>[Vertex];

}

// Define the Strongly connected component to display the DFS tree
void StronglyConnectedComponents::SSCDFS(int vertex, bool traveresd[],int node,int arr[])
{
    // assign true to traversed vertex
    traveresd[vertex] = true;
    arr[vertex]=node;
    // recall all the visited vertex in the list
    list<int>::iterator i;

    for(i = adjacent[vertex].begin(); i != adjacent[vertex].end(); ++i)
        if (!traveresd[*i])
            SSCDFS(*i, traveresd,node,arr);
}

StronglyConnectedComponents StronglyConnectedComponents::getTranspose()
{
    StronglyConnectedComponents g(Vertex);

    for (int vertex = 0; vertex < Vertex; vertex++)
    {
        // recall visited vertex in the list of that vertex
        list<int>::iterator i;

        for(i = adjacent[vertex].begin(); i != adjacent[vertex].end(); ++i)
            g.adjacent[*i].push_back(vertex);
    }

return g;

}

// add the strongly connected components
void StronglyConnectedComponents::connectededge(int vertex, int w)
{
    adjacent[vertex].push_back(w); // Add u to v’s list.
}

// strongly connected components to fill the node
void StronglyConnectedComponents::SCCID(int vertex, bool traveresd[], stack<int> &Stack)
{
    // set traversed vertex is true
    traveresd[vertex] = true;

    // recall visited vertex in the list of that vertex
    list<int>::iterator i;
    for(i = adjacent[vertex].begin(); i != adjacent[vertex].end(); ++i)
        if(!traveresd[*i])
            SCCID(*i, traveresd, Stack);

    // save onto the stack
    Stack.push(vertex);
}

// Create a function to display the finding strongly connected components

// components

void StronglyConnectedComponents::printSCCs(int node,int arr[])
{
    // store the vertex onto stack
    stack<int> Stack;
    //find and identify those vertices which is not visited
    bool *traveresd = new bool[Vertex];

    for(int i = 0; i < Vertex; i++)
        traveresd[i] = false;

    // store vertices nto the stack.
    for(int i = 0; i < Vertex; i++)
        if(traveresd[i] == false)
            SCCID(i, traveresd, Stack);

    // reverse the strongly connected component graph
    StronglyConnectedComponents gr = getTranspose();

    // identify all the vertices which is not visited
    for(int i = 0; i < Vertex; i++)
        traveresd[i] = false;
    
    // check all the vertices by order using while loop
    while (Stack.empty() == false)
    {
        // exit the vertx from the stack
        int vertex = Stack.top();
        Stack.pop();
        // check the exit vertex
        if (traveresd[vertex] == false)
        {
            gr.SSCDFS(vertex, traveresd,vertex,arr);
            int min=vertex;
            for(int i=0;i<node;i++)
            {
                // check the vertex
                if(arr[i]==vertex)
                {
                    // check the minimum vertex
                    if(min>i)
                        min=i;
                }

            }

            // loop to access the node
            for(int i=0;i<node;i++)
                if(arr[i]==vertex)
                    arr[i]=min;
        }
    }
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
    
    s.printSCCs(vertices,arr);

    for(int i=0;i<vertices;i++)
        cout<<arr[i]<<endl;

    return 0;

}