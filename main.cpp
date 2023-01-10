#include<iostream>
#include<vector>
using namespace std;

int main() {
	srand(time(NULL));
	int temp;
	vector< int > bubble; // vector called bubble that holds ints

	for (int i = 0; i <= 20; i++) {
		bubble.push_back(rand() % 100);//pushes "random" numbers to the vector
	}

	cout << "not sorted" << endl;
	for (int j = 0; j <= 20; j++) {
		cout << bubble[j] << " "; //prints out the vecoter unsorted
	}
	cout << endl<<"bubble sorting!" << endl;
	for (int h = 0; h <= 20; h++) {
		for (int k = 0; k <= 20; k++) {
			if (bubble[k] > bubble[h]) {// sorts the vector
				temp = bubble[h];
				bubble[h] = bubble[k];
				bubble[k] = temp;
			}
		}
	}
	cout << "sorted" << endl;
	for (int l = 0; l <= 20; l++) {
		cout << bubble[l] << " ";//prints out the vecoter sorted
	}



}
