#pragma once

using namespace std;

namespace DataStructures
{
    template <typename T>
    struct Node
    {
        T data;

        explicit Node( T val )
        {
            data = val;
        }

        Node *next = nullptr;
    };

    template <typename T>
    class LinkedList
    {
    public:

        LinkedList();
        ~LinkedList();

        size_t length() const;
        string to_string() const;

        void push_back( T t );
        void push_back( LinkedList<T> source );

        void push_front( T t );
        void push_front( LinkedList<T> source );

        T get_value_at( int index );

        void insert_at( int index, T val );
        void insert_at( int idnex, LinkedList<T> source );

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
    LinkedList<T>::LinkedList()
    {
    }

    template <typename T>
    LinkedList<T>::~LinkedList()
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
    void LinkedList<T>::push_back( LinkedList<T> source )
    {
        Node<T> *current = source.head;

        while( current != nullptr )
        {
            push_back( current->data );
            current = current->next;
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
    void LinkedList<T>::push_front( LinkedList<T> source )
    {
        Node<T> *current = source.head;

        while( current != nullptr )
        {
            push_front( current->data );
            current = current->next;
        }
    }

    template <typename T>
    T LinkedList<T>::get_value_at( int index )
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
    void LinkedList<T>::insert_at( int index, T val )
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
    void LinkedList<T>::insert_at( int index, LinkedList<T> source )
    {
        if( source.head == nullptr )
            return;

        Node<T> *current = nullptr, *previous = nullptr;

        auto position = 0;

        while( current != nullptr && position < index )
        {
            previous = current;
            current = current->next;
            position++;
        }

        Node<T> *tmp = source.head, *newNode;

        while( tmp != nullptr )
        {
            newNode = new Node<T>( tmp->data );
            
            newNode->next = current == nullptr ? head : current;

            current->next = newNode;
            current = current->next;

            tmp = tmp->next;
        }
        
        if( position == 0 )
            head = newNode;

        if( previous != nullptr )
            previous->next = tmp;
    }
}
