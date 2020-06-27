/*Write a C++ program to declare a matrix of size 3*3 matrix of size, initialize the matrix and display them. Also find the sum of matrix elements, sum of main diagonal elements and secondary diagonal elements.
*/ 
#include <bits/stdc++.h> 

using namespace std; 

  

const int MAX = 100; 

  

void printDiagonalSums(int mat[][MAX], int n) 
{ 

    int principal = 0, secondary = 0; 

    for (int i = 0; i < n; i++) { 

        for (int j = 0; j < n; j++) { 

  

            

            if (i == j) 

                principal += mat[i][j]; 

  

            

            if ((i + j) == (n - 1)) 

                secondary += mat[i][j]; 

        } 

    } 

  

    cout << "Principal Diagonal:" << principal << endl; 

    cout << "Secondary Diagonal:" << secondary << endl; 
} 

  
  

int main() 
{ 

    int a[][MAX] = { { 1, 2, 3, 4 }, { 5, 6, 7, 8 },  

                    { 1, 2, 3, 4 }, { 5, 6, 7, 8 } }; 

    printDiagonalSums(a, 4); 

    return 0; 
} 
