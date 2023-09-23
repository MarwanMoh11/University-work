#include <iostream>
#include <stdexcept>
#define size 10

using namespace std;
class IndexOutOfBoundsException : public logic_error {
private:
public:
	IndexOutOfBoundsException(string msg) : logic_error(msg) {};
	
};


class LowerBoundException : public IndexOutOfBoundsException {
public:
	LowerBoundException() : IndexOutOfBoundsException("index lower bound exception") {};
};

class UpperBoundException : public IndexOutOfBoundsException {
public:
	UpperBoundException() : IndexOutOfBoundsException("index upper bound exception") {};

};

class UninitializedException : public logic_error {
public:
	UninitializedException() : logic_error("uninitialized element exception") {};

};

class Mylist {
private:
	int arr[size];
	bool initialized[size];
public:
	Mylist() {
		for (int i = 0; i < 10; i++) {
			initialized[i] = false;

		}
		
	}

	void setElement(int index, int value) {
		if (index < 0) {
			
			throw LowerBoundException();
		}

		if (index >= size) {
			throw UpperBoundException();
		}


		arr[index] = value;
		initialized[index] = true;

	};

	int getElement(int index) {
		if (index < 0) {
			throw LowerBoundException();
			}
		if (index >= size) {
			throw UpperBoundException();

		}

		if (initialized[index] = false) {
			throw UninitializedException();
		}

		return arr[index];
	}

	void print() const {
		for (int i = 0; i < size; i++) {
			if (initialized[i]) {
				cout << arr[i] << " ";
			}
			else {
				cout << "U ";
			}
		}
		cout << endl;
	}

	

};


int main() {
	try {
		Mylist list;
		list.setElement(-2, 100);
		list.setElement(1, 200);
		list.setElement(9, 500);
		list.print();

		while (true) {
			try {
				int index;
				cout << "Enter an index (-1 to exit): ";
				cin >> index;

				if (index == -1) {
					break;
				}

				int element = list.getElement(index);
				cout << "Element at index " << index << ": " << element << endl;
			}
			catch (const LowerBoundException& e) {
				cout << "Error: " << e.what() << endl;
			}
			catch (const UpperBoundException& e) {
				cout << "Error: " << e.what() << endl;
			}
			catch (const UninitializedException& e) {
				cout << "Error: " << e.what() << endl;
			}
			catch (const out_of_range& e) {
				cout << "Error: " << e.what() << endl;
			}
			catch (const exception& e) {
				cout << "Exception occurred: " << e.what() << endl;
			}
		}
	}
	catch (const exception& e) {
		cout << "Exception occurred: " << e.what() << endl;
	}

	cout << "The last line before return 0;" << endl;
	return 0;
}