#include<iostream>
using namespace std; 
int main ()
{
    int m, n, p, q, i, j, A[10][10], B[10][10], C[10][10];
    cout << "Enter no of rows and column of matrix A : ";
    cin >> m >> n;
    cout << "Enter no of rows and column of matrix B : ";
    cin >> p >> q; 
    if ((m != p) && (n != q))
    {
        cout << "Matrices cannot be added!";
        exit(0);
    }	
    cout << "Enter elements of matrix A : ";
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            cin >> A[i][j];
	cout << "Enter elements of matrix B : ";
    for (i = 0; i < p; i++)
        for (j = 0; j < q; j++)
            cin >> B[i][j];		
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            C[i][j] = A[i][j] + B[i][j];
    cout << "Sum of matrices\n";
    for (i = 0; i < m; i++)
    {    for (j = 0; j < n; j++)
            cout << C[i][j] << "  ";	
        cout << "\n";
    }
    return 0;
}