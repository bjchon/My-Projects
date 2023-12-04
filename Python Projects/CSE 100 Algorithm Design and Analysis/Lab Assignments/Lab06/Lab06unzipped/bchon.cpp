#include <iostream>
#include <list>
using namespace std;

class HashTable
{
    private:   
    list<int> *hashTable;

    public:
    HashTable() //initialize hashtable
        {
            hashTable = NULL;
        };

    ~HashTable()
        { // delete hashtable
            if(hashTable!=NULL)
                {
                    delete [] hashTable;
                }
        }

    void createHashTable(int size) // initialize hashtable with linked list
        {
            hashTable = new list<int>[size];
        }

    void insert(int key,int size) //insert key to the front of linked list at hashtable key
        {
            hashTable[key%size].push_front(key);
        }
  
    bool deleteKey(int key,int size)
        {
            list<int> temp = hashTable[key%size];//if key is there it's at index=key mod size
            list<int>::iterator iter;

            if(temp.empty()) // empty list = delete failed
                return false;

            else
                {
                    for (iter = temp.begin(); iter != temp.end(); iter++)//search list for key
                        {
                            if (*iter == key)
                                {
                                    temp.erase(iter); //if found erase from list
                                    hashTable[key%size] = temp;//update hashtable
                                    return true;
                                }
                        }
            
                    return false;
                }
        }

    void search(int key,int size)
        {
            list<int> temp = hashTable[key%size]; //if key is there it's at index=key mod size
            list<int>::iterator iter;
            int index = 0;

            if(temp.empty()) // empty list = delete failed
                cout <<key<< ":NOT_FOUND;" << endl;

            else
                {
                    for (iter = temp.begin(); iter != temp.end(); iter++)//search list for key
                        {
                            if(*iter==key)
                                {
                                    cout << key << ":FOUND_AT" << (key%size) << "," << index << ";" << endl; // if found output output location
                                    return;
                                }

                            index++;
                        }

                    cout <<key << ":NOT_FOUND;" << endl;   
                }
        }

    void output(int size)
        {
            list<int> temp;
            list<int>::iterator iter;

            for (int i = 0; i < size; i++)
                {
                    temp = hashTable[i];//temp equals each list from hashtable

                    if (temp.empty())
                        {
                            cout << i << ":;" << endl;
                        }

                    else
                        {
                            cout << i << ":";//print hashtable index

                            for (iter = temp.begin(); iter != temp.end(); iter++)//print list
                                {
                                    cout << *iter << "->";
                                }

                            cout << ";" << endl;   
                        }   
                }
        }

};

int main()
{
    int size, key;
    char cha;
    cin >> size;
    
    HashTable chain;
    chain.createHashTable(size);
    cin >> cha;
    
    while (cha != 'e')
    {
        if (cha == 'i')
        {
            cin >> key;
            chain.insert(key,size);
        }
        
        else if (cha == 'd')
        {
            cin >> key;
            if (chain.deleteKey(key,size))
                cout << key << ":DELETED;" << endl;

            else
                cout << key << ":DELETE_FAILED;" << endl;
        }
        
        else if (cha=='s')
        {
            cin >> key;
            chain.search(key,size);
        }
        
        else if (cha=='o')
        {
            chain.output(size);
        }
  
        cin >> cha;
    }

    return 0;
}