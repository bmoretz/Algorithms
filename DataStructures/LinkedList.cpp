#include "stdafx.h"
#include "LinkedList.h"

using namespace std;

/*
template<typename T>
void LinkedList<T>::insertBeg( int data )
{
	Node *newNode = new Node( data );

	assert( newNode != nullptr );

	if( head == nullptr ) {
		head = newNode;
	}
	else {
		newNode->next = head;
		head = newNode;
	}
}

template<typename T>
void LinkedList<T>::insertEnd( T data )
{
	Node *newNode = new Node( data );

	if( head == nullptr ) {
		head = newNode;
	}
	else {

		Node * current = head;

		while( current->next != nullptr )
			current = current->next;

		current->next = newNode;
	}
}

template<typename T>
void LinkedList<T>::insertAt( T data, int pos )
{
	assert( pos >= 0 );

	Node * newNode = new Node( data );

	Node * current = head;

	int index = 0;

	while( current != nullptr )
	{
		index++;

		if( index == ( pos - 1 ) )
		{
			newNode->next = current->next;
			current->next = newNode;
			
			return;
		}

		current = current->next;
	}
}

template<typename T>
void LinkedList<T>::removeAt( int pos )
{
	assert( head != nullptr );


}

template<typename T>
string LinkedList<T>::to_string()
{
	stringstream ss;

	if( head == nullptr ) {
		ss << "List is empty";
	}
	else {

		Node * cur = head;

		int index = 1;

		while( cur != nullptr )
		{
			ss << "{i:" << index << ",v:" << cur->data << "}";

			cur = cur->next;
			index++;
		}
	}
	
	ss << endl;

	return ss.str();
}

template<typename T>
size_t LinkedList<T>::length() const
{
	Node *current = head;

	size_t count = 0;

	while( current != nullptr )
	{

		current = current->next;
		count++;
	}

	return count;
}

*/