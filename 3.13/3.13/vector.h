#pragma once
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <assert.h>
using namespace std;
namespace hh
{
	template<class t>
	class vector
	{
		typedef t* iterator;
	public:
		vector()
			:start(nullptr)
			,_finish(nullptr)
			,_endofstorage(nullptr)
		{}
		size_t size()const
		{
			return _finish - _start;
		}
		size_t capacity()const
		{
			return _endofstorge - _start;
		}
		operator[](size_t i)
		{
			assert(i < size());
			return _start[i];
		}
		void push_back(const t& x)
		{
			if (_finsh == _endofstorage)
			{
				reserve( capacity() == 0 ? 4 : capacity * 2);
				
				
			}
			*_finish = x;
			++_finish;
		}
		iterator begin()
		{
			return _start();
		}
		void reserve(size_t n)
		{
			if (n > _capacity)
			{
				size_t sz = size();
				t* tmp = new t[n];
				if (_start)
				{
					memcpy(tmp, _start, sizeof(T) * size());
					delete[] _start;
				}

				_start = tmp;
				// _finish = _start + size(); size
				_finish = _start + sz;
				_endofstorage = _start + n;
			}
			
		}
		void resize(size_t n,const t& val = t())
		{
			if (n < size())
				_finish = _start + n;
			else
			{
				if (n > capacity())
					reverse(n);
				while (_finish != _start + n)
				{
					*_finish = val;
					++_finish;
				}
			} 
		}
		void insert(iterator pos, const t& x);
	private:
		iterator _start;
		iterator _finish;
		iterator _endofstorage;
	};
	class A
	{

	};
}

void tt()
{
	vector<int> v;
	for (size_t i = 0; i < v.size(); i++)
	{

	}
}