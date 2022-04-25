//lab4_1.cpp

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int CountCharsInFile(const char*);
void PrintTextFile(const char*);

int main() {
	const char* filename = "testfile.txt";
	cout << "Text in file: \n";
	PrintTextFile(filename);
	cout << "Count of \'+\', \'-\' and \'=\' characters: " << CountCharsInFile(filename) << endl;
	return 0;
}
int CountCharsInFile(const char* filename) {
	ifstream fin(filename);
	string s;
	int counter = 0;
	while (getline(fin, s))
		for (unsigned i = 0; i < s.length(); i++)
			if (s[i] == '+' || s[i] == '-' || s[i] == '=')
				counter++;
	return counter;
}
void PrintTextFile(const char* filename) {
	ifstream fin(filename);
	string s;
	while (getline(fin, s)) {
		cout << s << endl;
	}
	cout << endl;
}