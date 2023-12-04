#include<iostream>
#include<limits.h>
using namespace std;

int num=0;
void print(int i, int j, int n, int *matrix)
{
    if (i == j)
        {
            cout <<"A"<<num;
            num++;
            return ;
        }
    cout << "(";

    print(i, *((matrix+i*n)+j), n, matrix);
    print(*((matrix+i*n)+j) + 1, j, n, matrix);
    cout << ")";
}

void MatrixChainOrder(int p[], int n)
{
    int m[n][n];
    int s[n][n];
    
    for (int i=1; i<n; i++)
        m[i][i] = 0;

    for (int l=2; l<n; l++)
    {
        for (int i=1; i<n-l+1; i++)
        {
            int j = i+l-1;
            m[i][j] = INT_MAX;
                    
            for (int k=i; k<=j-1; k++)
            {
                int q = m[i][k] + m[k+1][j] + p[i-1]*p[k]*p[j];
                if (q < m[i][j])
                {
                    m[i][j] = q;
                    s[i][j] = k;
                }
            }
        }
    }

cout << m[1][n-1] << "\n";
print(1, n-1, n, (int*)s);

}


int main()
{
    int n;
    cin>>n;
    int A[n+1];

    for(int i=0;i<=n;i++)
        cin>>A[i];

    int size = sizeof(A)/sizeof(A[0]);
    MatrixChainOrder(A, size);
    cout<<"\n";
    return 0;
}