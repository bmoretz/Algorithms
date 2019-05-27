#pragma once

#include "pch.h"
using std::array;
using namespace std;

namespace DataStructures
{
	template<typename T>
	class Array
	{
		size_t m_size;
		T* m_data;

	public:

		Array( size_t size );
		Array( size_t size, T[] );
		Array( const std::initializer_list<T>& init_list );

		~Array();

		Array<T>& operator=( T[] );
		Array<T>& operator=( const Array<T>& copy );
		Array<T>& operator=( const std::initializer_list<T> &init_list );

		T& operator[]( size_t index );
		
		size_t size();

		T get_value_at( size_t index );
	};

	template <typename T>
	inline Array<T>::Array( size_t size )
	{
		m_size = size;;
		m_data = new T[ size ];
	}

	template<typename T>
	inline Array<T>::Array( size_t size, T values[] )
	{
		m_size = size;
		m_data = values;
	}

	template<typename T>
	inline Array<T>::Array( const std::initializer_list<T>& init_list ) :
		Array<T>( init_list.size() )
	{
		T* tmp = new T[ m_size ];

		std::initializer_list<T>::iterator it;
		size_t position = 0;
		for( it = init_list.begin(); it != init_list.end(); ++it )
		{
			tmp[ position++ ] = *it;
		}

		std::swap( tmp, m_data );
	}

	template <typename T>
	inline Array<T>::~Array()
	{
		delete [] m_data;
	}

	template<typename T>
	Array<T>& Array<T>::operator=( T values[] )
	{
		return *this;
	}

	template<typename T>
	Array<T>& Array<T>::operator=( const Array<T>& copy )
	{
		if( this == &copy )
			return *this;

		// Do all operations that can generate an exception before copy.
		// DO NOT modify the object at this stage.
		T* tmp = new[ copy.size() ];
		for( size_t i = 0; i < size; i++ )
		{
			tmp[ i ] = copy.m_data[ i ];
		}

		std::swap( tmp, m_data );
		m_size = copy.size;

		delete tmp;

		return *this;
	}

	template<typename T>
	Array<T>& Array<T>::operator=( const std::initializer_list<T> &init_list )
	{
		m_size = init_list.size();
		T* tmp = new T[ m_size ];
		for( size_t i = 0; i < m_size; i++ )
		{
			tmp[ i ] = initializer_list[ i ];
		}

		std::swap( tmp, m_data );

		delete tmp;

		return *this;
	}

	template<typename T>
	T& Array<T>::operator[]( size_t index )
	{
		if( index < 0 || index > size )
			throw std::exception( "Invalid index position" );

		return m_data[ index ];
	}

	template<typename T>
	inline size_t Array<T>::size()
	{
		return m_size;
	}

	template<typename T>
	inline T Array<T>::get_value_at( size_t index )
	{
		return m_data[ index ];
	}
}