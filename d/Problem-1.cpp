// Marwan Abudaif 900221725

using namespace std;

#include <iostream>

char uppercase(char x) {
    x = x - 32; // The letter order is shifted 32 times to reach corresponding letter but in uppercase
    return x;
}

int main()
{
    cout << uppercase('w');
}

