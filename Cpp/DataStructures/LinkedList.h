#pragma once

#include "pch.h"
#include "Node.h"

using namespace std;

namespace DataStructures
{
    template <typename T>
    class LinkedList
    {
    public:

        explicit LinkedList();
		LinkedList( const std::initializer_list<T>& init_list );

        ~LinkedList();

        size_t length() const;
        string to_string() const;

        void push_back( T val );
        void push_back( const LinkedList<T> &source );

        void push_front( T val );
        void push_front( const LinkedList<T> &source );

        T get_value_at( size_t index );

        void insert_at( size_t index, T val );
        void insert_at( size_t index, const LinkedList<T> &source );

		LinkedList<T>& operator+( const LinkedList<T>& );
		bool operator==( const LinkedList<T>& );

        const Node<T>* first() const
        {
            return head;
        }

        const Node<T>* last() const
        {
            return tail;
        }

        bool empty() const
        {
            return head != nullptr;
        }

    private:
        Node<T> *head = nullptr, *tail = nullptr;
    };

    template <typename T>
    inline LinkedList<T>::LinkedList()
    {
    }

	template<typename T>
	inline LinkedList<T>::LinkedList( const std::initializer_list<T>& init_list )
	{
		if( init_list.size() == 0 )
			return;

		head = new Node<T>( *init_list.begin() );
		Node<T>* prev = head;

		for( auto it = ( init_list.begin() + 1 ); it != init_list.end(); it++ )
		{
			auto node = new Node<T>( *it );

			prev->next = node;
			prev = node;
		}

		tail = prev;
	}

    template <typename T>
    inline LinkedList<T>::~LinkedList()
    {
        while( head != nullptr )
        {
            Node<T> *tmp = head;

            head = head->next;

            delete tmp;
        }

        head = nullptr;
    }

    template <typename T>
    size_t LinkedList<T>::length() const
    {
        Node<T> *current = head;

        size_t count = 0;

        while( current != nullptr )
        {
            current = current->next;
            count++;
        }

        return count;
    }

    template <typename T>
    string LinkedList<T>::to_string() const
    {
        stringstream ss;

        if( head == nullptr )
        {
            ss << "List contains no elements";
        }
        else
        {
            Node<T> *current = head;
            auto index = 0;

            while( current != nullptr )
            {
                ss << "{i:" << ++index << ","
                    << "v:" << std::to_string( current->data ) << "}";

                current = current->next;
            }
        }

        ss << endl;

        return ss.str();
    }

    template <typename T>
    void LinkedList<T>::push_back( T t )
    {
        Node<T> *newNode = new Node<T>( t );

        if( head == nullptr )
        {
            head = tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
    }

    template <typename T>
    void LinkedList<T>::push_back( const LinkedList<T> &source )
    {
        Node<T> *src = source.head;

        while( src != nullptr )
        {
            Node<T> *newNode = new Node<T>( src->data );

            tail->next = newNode;
            tail = newNode;

            src = src->next;
        }
    }

    template <typename T>
    void LinkedList<T>::push_front( T t )
    {
        Node<T> *newNode = new Node<T>( t );

        if( head == nullptr )
        {
            head = tail = newNode;
        }
        else
        {
            newNode->next = head;
            head = newNode;
        }
    }

    template <typename T>
    void LinkedList<T>::push_front( const LinkedList<T> &source )
    {
        if( source.head == nullptr )
            return;

        Node<T> *tmp = head, *iter = source.head,
            *newNode, *prevNode = nullptr;

        while( iter != nullptr )
        {
            newNode = new Node<T>( iter->data );

            if( prevNode == nullptr )
            {
                head = newNode;
            }
            else
            {
                prevNode->next = newNode;
            }

            prevNode = newNode;
            iter = iter->next;
        }

        newNode->next = tmp;
    }

    template <typename T>
    T LinkedList<T>::get_value_at( size_t index )
    {
        Node<T> *current = head;

        auto position = 0;

        while( current->next != nullptr && position < index )
        {
            current = current->next;
            position++;
        }

        return position == index ?
                   current->data : T();
    }

    template <typename T>
    void LinkedList<T>::insert_at( size_t index, T val )
    {
        Node<T> *current = head, *previous = nullptr;

        auto position = 0;

        while( current != nullptr && position < index )
        {
            previous = current;
            current = current->next;
            position++;
        }

        Node<T> *newNode = new Node<T>( val );

        newNode->next = current;

        if( position == 0 )
            head = newNode;

        if( previous != nullptr )
            previous->next = newNode;
    }

    template <typename T>
    void LinkedList<T>::insert_at( size_t index, const LinkedList<T> &source )
    {
        if( source.head == nullptr )
            return;

        Node<T> *current = nullptr;

        auto position = 0;

        while( position < index )
        {
            current = current == nullptr ?
                          head : current->next;
            position++;
        }

        Node<T> *iter = source.head,
            *srcHead = nullptr, *tmp = nullptr;

        while( iter != nullptr )
        {
            Node<T> *newNode = new Node<T>( iter->data );

            if( srcHead == nullptr )
                srcHead = newNode;

            if( tmp != nullptr )
                tmp->next = newNode;

            tmp = newNode;

            iter = iter->next;
        }

        if( current != nullptr )
            tmp->next = current->next;

        if( current == nullptr )
        {
            tmp->next = head;
            head = srcHead;
        }
        else
        {
            current->next = srcHead;
        }
    }

	template<typename T>
	inline LinkedList<T>& LinkedList<T>::operator+( const LinkedList<T>& other )
	{
		if( other.head == nullptr )
			return *this;

		Node<T> *iter = other.head, *prev = tail;

		while( iter != other.tail )
		{
			auto node = new Node<T>( iter->data );

			iter = iter->next;
			prev->next = node;
		}

		tail = prev;
		tail->next = nullptr;

		return *this;
	}

	template<typename T>
	bool LinkedList<T>::operator==( const LinkedList<T>& other )
	{
		Node<T> *l = head, *r = other.head;

		bool equals = true;

		while( l != nullptr && r != nullptr && l != tail && r != other.tail )
		{
			equals &= l->data == r->data;

			if( !equals )
				break;

			l = l->next; 
			r = r->next;
		}

		return equals;
	}
}
