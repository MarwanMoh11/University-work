
using namespace std;
#include <iostream>

void convertor(int seconds, int& s, int& m, int& hr) {
	s = seconds - ((seconds / 60) * 60);
	hr = (seconds / 3600);
	m = (seconds / 60) - (hr*60);
}

int main() {
	int num = 12345;
	int mins, seconds, hours;
	convertor(num, seconds, mins, hours);
	cout << hours << ":" << mins << ":" << seconds;
}