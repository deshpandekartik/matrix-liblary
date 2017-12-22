#include <iostream>
using namespace std;

class matrix_brain
{
	private:
		int matrix[10][10];
		int row, column ;	

	public:
		// I am the one handling input of a matrix
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
		
		// I am the one taking care of displaying a matrix
		void display()
		{
			for ( int i = 0; i < row ; i ++ )
			{
				cout << "\n";
				for ( int j = 0; j < column ; j++ )
				{
					cout << matrix[i][j] << "\t" ;
				}
			}
			
		}
};


int main()
{
	matrix_brain m1;
	m1.read();
	m1.display();
}
