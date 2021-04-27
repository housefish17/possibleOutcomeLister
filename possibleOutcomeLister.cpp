#include<iostream>
#include<fstream>

using namespace std;

int questionOne[2] = { 0, 10 };
int questionTwo[3] = { 0, 5, 10 };
int questionThree[3] = { 0, 5, 10 };
int questionFour[2] = { 0, 10 };

int main() {
	ofstream outputTable;
	outputTable.open("possibleValues.xls");

	int totalValues = 0;

	for (int i = 0; i <= 1; i++) {
		for (int j = 0; j <= 2; j++) {
			for (int k = 0; k <= 2; k++) {
				for (int l = 0; l <= 1; l++) {
					outputTable << questionOne[i] + questionTwo[j] + questionThree[k] + questionFour[l] << endl;
				}
			}
		}
	}

	outputTable.close();

	return 0;
}