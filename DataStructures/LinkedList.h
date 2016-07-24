#pragma once

using namespace std;

struct Node {

	Node( int val ) { data = val; }

	int data;
	Node * next = nullptr;
};

class LinkedList
{

public:

	LinkedList();
	~LinkedList();

	void insertBeg( int data );
	void insertEnd( int data );
	void insertAt( int data, int pos );

	void removeAt( int pos );
	
	string to_string();
	size_t length() const;

	const Node * first() const
	{
		return head;
	}

	bool empty() const
	{
		return head != nullptr;
	}

private:
	Node * head;
};