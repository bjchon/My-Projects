#include <iostream>
#include <stack>
#include <queue>
#include <algorithm>
#include <string>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <vector>
#include <set>
#include <map>
#include <deque>

using namespace std;

// A Huffman tree node struct
struct MinHeapNode 
{
    char data;
    int fre;

    // Left and right child
    MinHeapNode *left, *right;

    MinHeapNode(char data, int freq)
    {
        left = right = NULL;
        this->data = data;
        this->fre = freq;
    }

};

// For comparison of two heap nodes
struct compare 
{
    bool operator()(MinHeapNode* left, MinHeapNode* right)
    {
        return (left->fre > right->fre);
    }
};

// Prints huffman codes from root
void print(struct MinHeapNode* root, char a , string str)
{
    if (!root)
    return;

    if (root->data != '$')
    {
        if(a==root->data)
        cout << root->data << ":" << str << "\n";
    }

    print(root->left,a, str + "0");
    print(root->right,a, str + "1");
}



// The main function that builds a Huffman Tree and print codes by traversing 
// the built Huffman Tree
void HuffmanCodes(int fre[], char data[], int size)
{
    struct MinHeapNode *left, *right, *top;

    // Create a min heap & inserts all characters of data[]
    priority_queue<MinHeapNode*, vector<MinHeapNode*>, compare> MinHeap;

    for (int i = 0; i < size; ++i)
        MinHeap.push(new MinHeapNode(data[i], fre[i]));

    // Iterate while size of heap doesn't become 1
    while (MinHeap.size() != 1) 
    {
        // Extract the two minimum freq items from min heap
        left = MinHeap.top();
        MinHeap.pop();
        right = MinHeap.top();
        MinHeap.pop();
        // Create a new internal node with frequency equal to the sum of the
        // two nodes frequencies. Make the two extracted node as left and right 
        //children of this new node. Add this node to the min heap '$' is a 
        //special value for internal nodes, not used
        top = new MinHeapNode('$', left->fre + right->fre);
        top->left = left;
        top->right = right;
        MinHeap.push(top);
    }

    // Print Huffman codes using the Huffman tree built above
    for(int i= 0; i<size; ++i)
        print(MinHeap.top(), data[i], "");
}

int main()
{
    char arr[] = {'A','B','C','D','E','F'};
    int fre[6] ;
    int size = sizeof(arr) / sizeof(arr[0]);

    for(int i=0;i<size;i++)
        cin>>fre[i];

    HuffmanCodes(fre, arr, size);
    
    return 0;

}