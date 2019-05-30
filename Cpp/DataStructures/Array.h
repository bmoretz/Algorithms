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
		Array( const Array<T>& copy );
		Array( const std::initializer_list<T>& init_list );

		~Array();

		Array<T>& operator=( const Array<T>& );
		Array<T>& operator=( const std::initializer_list<T> &init_list );

		T& operator[]( size_t index );
		
		T* begin();
		T* end();

		size_t size();

		string to_string();
	};

	template <typename T>
	inline Array<T>::Array( size_t size )
	{
		m_size = size;
		m_data = new T[ size ]();
	}

	template<typename T>
	inline Array<T>::Array( size_t size, T values[] )
	{
		m_size = size;
		m_data = new T[ size ]();

		for( size_t index = 0; index < m_size; index++ )
		{
			m_data[ index ] = values[ index ];
		}
	}

	template<typename T>
	inline Array<T>::Array( const Array<T>& copy )
		: Array<T>( copy.m_size, copy.m_data )
	{
	}

	template<typename T>
	inline Array<T>::Array( const std::initializer_list<T>& init_list ) :
		Array<T>( init_list.size() )
	{
		std::copy( init_list.begin(), init_list.end(), m_data );
	}

	template <typename T>
	inline Array<T>::~Array()
	{
		delete [] m_data;
	}

	template<typename T>
	Array<T>& Array<T>::operator=( const Array<T>& copy )
	{
		if( this == &copy )
			return *this;

		// Do all operations that can generate an exception before copy.
		// DO NOT modify the object at this stage.
		T * tmp = new T[ copy.m_size ]();
		for( size_t index = 0; index < copy.m_size; index++ )
		{
			tmp[ index ] = copy.m_data[ index ];
		}

		// Update instance.
		std::swap( tmp, m_data );
		m_size = copy.m_size;

		delete[] tmp;

		return *this;
	}

	template<typename T>
	Array<T>& Array<T>::operator=( const std::initializer_list<T> &init_list )
	{
		m_size = init_list.size();
		std::copy( init_list.begin(), init_list.end(), m_data );

		return *this;
	}

	template<typename T>
	T& Array<T>::operator[]( size_t index )
	{
		if( index < 0 || index > m_size )
			throw std::exception( "Invalid index position" );

		return m_data[ index ];
	}

	template<typename T>
	inline T* Array<T>::begin()
	{
		return &m_data[0];
	}

	template<typename T>
	inline T* Array<T>::end()
	{
		return &m_data[m_size];
	}

	template<typename T>
	inline size_t Array<T>::size()
	{
		return m_size;
	}
	template<typename T>
	inline string Array<T>::to_string()
	{
		stringstream ss;

		if( m_size == 0 )
		{
			ss << "Array contains no elements.";
		}
		else
		{
			for( size_t index = 0; index < m_size; index++ )
			{
				ss << "{i:" << index << ","
					<< "v:" << m_data[ index ] << "}";
			}
		}

		ss << endl;

		return ss.str();
	}
}