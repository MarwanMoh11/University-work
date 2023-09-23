using namespace std;


#include <iostream>

#include <iostream>
using namespace std;

void moveDisk(int disk, char source, char destination, char auxiliary) {
    if (disk == 1) {
        cout << "Move disk 1 from " << source << " to " << destination << endl;
        return;
    }

    moveDisk(disk - 1, source, auxiliary, destination);
    cout << "Move disk " << disk << " from " << source << " to " << destination << endl;
    moveDisk(disk - 1, auxiliary, destination, source);
}

int main() {
    int numDisks = 3;
    char source = 'A', auxiliary = 'B', destination = 'C';
    moveDisk(numDisks, source, destination, auxiliary);
    return 0;
}


