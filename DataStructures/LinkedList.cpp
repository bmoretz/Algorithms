#include "stdafx.h"
#include "LinkedList.h"

using namespace std;

LinkedList::LinkedList()
{
	head = nullptr;
}

LinkedList::~LinkedList()
{
	Node * current = head;

	while( current != nullptr )
	{
		Node * tmp = current;

		current = current->next;

		delete tmp;
	}
	
	head = nullptr;
}

void LinkedList::insertBeg( int data )
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

void LinkedList::insertEnd( int data )
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

void LinkedList::insertAt( int data, int pos )
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

void LinkedList::removeAt( int pos )
{
	assert( head != nullptr );


}

string LinkedList::to_string()
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

size_t LinkedList::length() const
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