#pragma once

#include "pch.h"

namespace DataStructures
{
	template<typename T>
	class Stack
	{

	public:
		explicit Stack<T>();
		Stack( const std::initializer_list<T> & init_list );
		~Stack();

		void enqueue( T * item );
		T * dequeue();

		Stack<T> & operator=( const std::initializer_list<T> & init_list );

	private:
		size_t m_size;
		T * m_data;
	};

	template<typename T>
	inline Stack<T>::Stack<T>()
	{

	}

	template<typename T>
	inline Stack<T>::Stack( const std::initializer_list<T>& init_list )
	{
		std::copy( init_list.begin(), init_list.end(), m_data );
	}

	template<typename T>
	inline Stack<T>::~Stack()
	{
		delete[] m_data;
	}

	template<typename T>
	inline void Stack<T>::enqueue( T * item )
	{
	}

	template<typename T>
	inline T * Stack<T>::dequeue()
	{
		return nullptr;
	}

	template<typename T>
	inline Stack<T> & Stack<T>::operator=( const std::initializer_list<T> & init_list )
	{
		// TODO: insert return statement here
	}
}