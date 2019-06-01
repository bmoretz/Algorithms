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

		void selection_sort();

	public:

		Array( size_t size );
		Array( size_t size, T[] );
		Array( const Array<T>& copy );
		Array( const std::initializer_list<T>& init_list );

		~Array();

		Array<T>& operator=( const Array<T>& );
		Array<T>& operator=( const std::initializer_list<T>& init_list );

		bool operator==( const Array<T>& );

		T& operator[]( size_t index );

		T* begin();
		T* end();

		void merge( const Array<T>& );
		void sort();
		void swap( size_t, size_t );

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
	{}

	template<typename T>
	inline Array<T>::Array( const std::initializer_list<T>& init_list ) :
		Array<T>( init_list.size() )
	{
		std::copy( init_list.begin(), init_list.end(), m_data );
	}

	template <typename T>
	inline Array<T>::~Array()
	{
		delete[] m_data;
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
	Array<T>& Array<T>::operator=( const std::initializer_list<T>& init_list )
	{
		m_size = init_list.size();
		std::copy( init_list.begin(), init_list.end(), m_data );

		return *this;
	}

	template<typename T>
	bool Array<T>::operator==( const Array<T>& other )
	{
		if( this == &other )
			return true;

		auto equal = true;
		for( size_t index = 0; index < m_size; index++ )
		{
			equal &= m_data[ index ] == other.m_data[ index ];

			if( !equal )
				return equal;
		}

		return equal;
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
		return &m_data[ 0 ];
	}

	template<typename T>
	inline T* Array<T>::end()
	{
		return &m_data[ m_size ];
	}

	template<typename T>
	void Array<T>::merge( const Array<T> & other )
	{
		size_t new_size = m_size + other.m_size;

		T* tmp = new T[ new_size ];

		int k = 0, j = 0;

		for( size_t index = 0; index < new_size; index++ )
		{
			tmp[ index ] = ( k < m_size && j < other.m_size ) && ( m_data[ k ] < other.m_data[ j ] ) ?
				m_data[ k++ ] : other.m_data[ j++ ];
		}

		std::swap( tmp, m_data );
		m_size = new_size;

		delete[] tmp;
	}

	template<typename T>
	inline void Array<T>::sort()
	{
		selection_sort();
	}

	template<typename T>
	inline void Array<T>::swap( size_t l, size_t r )
	{
		T tmp = m_data[ l ];
		m_data[ l ] = m_data[ r ];
		m_data[ r ] = tmp;
	}

	template<typename T>
	void Array<T>::selection_sort()
	{
		for( size_t index = 1; index < m_size; index++ )
		{
			int smallest = index - 1;

			for( size_t search = smallest; search < m_size; search++ )
			{
				if( m_data[ search ] < m_data[ smallest ] )
					smallest = search;
			}

			if( smallest != index - 1 )
				swap( index - 1, smallest );
		}
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