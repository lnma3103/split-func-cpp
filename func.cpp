#include <iostream>
#include <sstream>
#include <vector>
#include <string>

using namespace std;

typedef vector<string> vt_Str;
typedef vector<int> vt_Int;

vt_Str Split(const string &str, char delimiter) {
	vt_Str result;
	string token;
	stringstream ss(str);
	while (getline(ss, token, delimiter)) {
		result.push_back(token);
	}
	return result;
}
bool isInteger(const string &str) {
	stringstream ss(str);
	int num;
	char ch;
	return ss >> num && !(ss >> ch);
}

vt_Int convertArrayToInt(vt_Str &array) {
	vt_Int result;
	for (int i = 0; i < array.size(); i++) {
		if (isInteger(array[i])) {
			result.push_back(stoi(array[i]));
		}
	}
	return result;
}
