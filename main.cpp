#include <iostream>
#include <vector>
#include <utility>

#define ENDL cout << endl;

using namespace std;

pair<size_t, size_t> MatrixArgMax(const vector<vector<int>>& matrix);

int main(void) {
	pair<size_t, size_t> size;
	
	cout << "Y size: ";
	cin >> size.first;
	cout << "X size: "; 
	cin >> size.second;
	
	vector<vector<int>> matrix(size.first, vector<int>(size.second));
	
	ENDL
	cout << "Entered values: ";
	ENDL 
	
	for (size_t i = 0; i != matrix.size(); ++i) {
		ENDL
		cout << "Y size = " << i;
		ENDL
		
		for (size_t j = 0; j != matrix[0].size(); ++j) {
			cin >> matrix[i][j];
		}
	}
	
	system("pause");
	system("cls");
	
	cout << "Entered values: ";
	ENDL
	
	for (size_t i = 0; i != matrix.size(); ++i) {
		cout << "Y size = " << i << ": " << "\t";
		for (size_t j = 0; j != matrix[0].size(); ++j) {
			cout << matrix[i][j] << "\t";	
		}
		
		ENDL
	}
	
	system("pause");
	system("cls");
	
	pair<size_t, size_t> cord = MatrixArgMax(matrix);
	
	cout << "Y coordinate: " << cord.first;
	ENDL
	cout << "X coordinate: " << cord.second;
	ENDL
	
	return 0;
}

pair<size_t, size_t> MatrixArgMax(const vector<vector<int>>& matrix) {
	pair<size_t, size_t> cord;
	int maxi = matrix[0][0];
	
	for (size_t i = 0; i != matrix.size(); ++i) {
		for (size_t j = 0; j != matrix[0].size(); ++j) {
			if (matrix[i][j] > maxi) {
				maxi = matrix[i][j];
				cord = {i, j};
			}
		}
	}
	
	return cord;	
}