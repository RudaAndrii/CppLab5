#include <iostream>
#include "Matrix.h"

using namespace std;

int main() {
	Matrix matrix(3);
	matrix.fillMatrix();
	matrix.matrixMergeSort(matrix.getMatrix());
	showMatrix(matrix);

	double *arr = matrix.rowAvg();
	
	cout << endl;
	for (int i = 0; i < 3; i++) {
		cout << arr[i] << endl;
	}

	cout << endl << matrix.geometricMean(matrix.rowAvg());
	
	return 0;
}