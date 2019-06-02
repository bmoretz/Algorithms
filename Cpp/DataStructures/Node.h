#pragma once

#include "pch.h"

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

		Node *next = nullptr, *prev = nullptr;
	};
}