#include <iostream>
#include <memory.h>
using namespace std;

class matrix_brain
{
        private:
                int matrix[10][10],transpose_mat[10][10];
                int row, column ;

        public:
                /**
                         * Reads row , column and elements of a matrix
                 **/
                void read()
                {
                        cout << "Enter the no of rows \n";
                        cin >> row;
                        cout << "Enter the no of columns \n";
                        cin >> column;
                        cout << "Enter matrix elements \n" ;

                        for ( int i = 0 ; i < row ; i ++ )
                        {
                                for ( int j = 0 ; j < column ; j ++ )
                                {
                                        cin >> matrix[i][j];
                                }
                        }
                }

                /**
                         * Display a matrix
                 **/
                void display()
                {
                        cout << "\nMatrix" ;
                        for ( int i = 0; i < row ; i ++ )
                        {
                                cout << "\n";
                                for ( int j = 0; j < column ; j++ )
                                {
                                        cout << matrix[i][j] << "\t" ;
                                }
                        }

                }

                /**
                        * Transpose of a matrix
                **/
                void transpose()
                {
                        for ( int i = 0; i < row ; i ++ )
                        {
                                for ( int j = 0; j < column ; j++ )
                                {
                                        transpose_mat[j][i] = matrix[i][j];
                                }
                        }
                        // copy it to main matrix array
                        memcpy(matrix, transpose_mat, min(sizeof(matrix),sizeof(transpose_mat)) );
                }
                /**
                        * Multiplying two matrices
                        * But First validate if matrix multiplication is possible
                 **/
                void multiply ( matrix_brain m1 , matrix_brain m2 )
                {
                        // If number of rows of 1st matrix and number of columns of 2nd matrix not equal, matrix multiplication not possible
                        if ( m1.column != m2.row )
                        {
                                cout << "Matrix multiplication not possible \n" ;
                        }
                        else
                        {
                                // set row and column's of the resultant matrix
                                row = m1.row;
                                column = m2.column;
                                for ( int i = 0 ; i < m1.row ; i ++ )
                                {
                                        for ( int j = 0 ; j < m2.column ; j ++ )
                                        {
                                                matrix[i][j] = 0;
                                                for ( int k = 0; k < m1.column; k++ )
                                                {
                                                         matrix[i][j] = matrix[i][j] + ( m1.matrix[i][k] * m2.matrix[k][j] ) ;
                                                }
                                        }
                                }
                        }
                }
};

