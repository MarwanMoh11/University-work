//

#include <iostream>

template < class T>
class Node {
private:
	T info;
	Node<T>* next, * back;
public:
	Node() {
		next = NULL;
		back = NULL;
	}
	//getters
	T get_info(){
		return info;
	};
		Node<T>* get_next() {
		return next;
	}
	Node<T>* get_back() {
		return back;
	}

	//setters
	void set_info(T temp) {
		info = temp;
	}
	void set_next(Node<T>* n) {
		next = n;
	}
	void set_back(Node<T>* b) {
		back = b;
	}

	~Node() {

	}
};

//class for the linked list
template <class T>
class my_list {
private:
	Node<T>* first, * last;

public:
	my_list() {
		first = NULL;
		last = NULL;
	}
	//append method
	Node<T>* append(T t_info) {
		Node<T>* temp = new Node<T>();
		temp->set_info(t_info);
		if (first == NULL) {
			//first node in the list
			first = temp;
			last = first;
		}
		else {
			//not first
			/*
			1.the new temp will become last
			2. temp.next = NULL
			3. temp.back = old last
			4. old last.next = temp
			*/
			temp->set_back(last);
			last->set_next(temp);
			last = temp;
		}
	}
	Node<T>* insert_after(Node<T>* curr, T info) {
		Node<T>* new_node = new Node<T>();
		new_node->set_info(info);
		new_node->set_next(curr->get_next());
		new_node->set_back(curr);
		if (curr->get_next() != NULL) {
			curr->get_next()->set_back(new_node);
		}
		curr->set_next(new_node);
		return new_node;
	}



	~my_list() {

	}
};

int main()
{
	return 0;
}