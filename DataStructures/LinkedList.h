#pragma once

using namespace std;

template <typename T>
struct Node {
		
	T data;

	Node( T val )
	{
		data = val;
	}

	Node * next = nullptr;
};

template<typename T>
class LinkedList
{

public:

	LinkedList();
	~LinkedList();

	size_t length() const;
	string to_string() const;
		
	void push_back( T t );
	void push_front( T t );

	T get_value_at( int index );

	void insert_at( T val, int index );

	const Node<T> * first() const
	{
		return head;
	}

	bool empty() const
	{
		return head != nullptr;
	}

private:
	Node<T> * head = nullptr;
};

template<typename T>
LinkedList<T>::LinkedList() { }

template<typename T>
LinkedList<T>::~LinkedList()
{
	while( head != nullptr )
	{
		Node<T> * tmp = head;

		head = head->next;

		delete tmp;
	}

	head = nullptr;
}

template<typename T>
size_t LinkedList<T>::length() const
{
	Node<T> * current = head;

	size_t count = 0;

	while( current != nullptr )
	{
		current = current->next;
		count++;
	}

	return count;
}

template<typename T>
string LinkedList<T>::to_string() const
{
	stringstream ss;

	if( head == nullptr ) {
		ss << "List contains no elements";
	}
	else {
		Node<T> * current = head;
		auto index = 0;

		while( current != nullptr )
		{
			ss  << "{i:" << ++index << "," 
				<< "v:" << std::to_string( current->data ) << "}";

			current = current->next;
		}
	}

	ss << endl;

	return ss.str();
}

template<typename T>
void LinkedList<T>::push_back( T t )
{
	Node<T> * newNode = new Node<T>( t );

	if( head == nullptr ) {
		head = newNode;
	}
	else
	{
		Node<T> * current = head;

		while( current->next != nullptr )
		{
			current = current->next;
		}

		current->next = newNode;
	}
}

template<typename T>
void LinkedList<T>::push_front( T t )
{
	Node<T> * newNode = new Node<T>( t );

	newNode->next = head;
	head = newNode;
}

template<typename T>
T LinkedList<T>::get_value_at( int index )
{
	Node<T> * current = head;

	auto position = 0;

	while( current->next != nullptr && position < index )
	{
		current = current->next;
		position++;
	}

	return position == index ?
		current->data : T();
}

template<typename T>
void LinkedList<T>::insert_at( T val, int index )
{
	Node<T> * current = head;

	auto position = 0;
	while( current != nullptr && position < index )
	{
		current = current->next;
	}

	if( position == index )
	{
		current->next = new Node<T>( val );
	}
}