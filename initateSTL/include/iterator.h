/************************************************************
	文件名：iterator.h
	文件作用：类Iterator类的属性和方法的声明
	作者：chenzhen
	创建日期：2013.04.01
************************************************************/

#ifndef ITERATOR_H
#define ITERATOR_H
using namespace std;

template<typename Tp,typename Pointer = Tp*,typename Reference = Tp&>
struct _Iterator
{
	typedef Tp 	value_type;
	typedef Pointer point_type;
	typedef Reference reference_type;
};

template<typename _Iterator>
struct iterator_traits
{
	typedef typename _Iterator::value_type value_type;
	typedef typename _Iterator::point_type point_type;
	typedef typename _Iterator::reference_type reference_type;
};

template<typename Tp>
struct iterator_traits<Tp*>
{
	typedef Tp value_type;
	typedef Tp* point_type;
	typedef Tp& reference_type;
};

template<typename Tp>
struct iterator_traits<const Tp*>
{
	typedef Tp value_type;
	typedef const Tp* point_type;
	typedef const Tp& reference_type;
};

template<typename Tp>
class Iterator_normal:public _Iterator<iterator_traits<Tp>::value_type,iterator_traits<Tp>::point_type,iterator_traits<Tp>::reference_type>
{
	protected:
	
	_Tp current;
	
	public:
	
	Iterator_normal():current();
	
	Iterator_normal(const _Tp& ref):current(ref);
	
	Iterator_normal& operator++(void)
	{
		++current;
		return *this;
	}
	
	Iterator_normal& operator--(void)
	{
		--current;
		return *this;
	}
	
	Iterator_normal operator++(int)
	{
		Iterator_normal temp = *this;
		++current;
		return temp;
	}
	
	Iterator_normal operator--(int)
	{
		Iterator_normal temp = *this;
		--current;
		return temp;
	}
	
	Iterator_normal& operator+=(size_t len)
	{
		current += len;
		return *this;
	}
	
	Iterator_normal& operator+(size_t len)
	{
		return Iterator_normal(current + len);
	}
};


template<typename Tp>
inline bool operator== (const Iterator_normal<Tp> &itL,const Iterator_normal<Tp> &itR)
{
	return itL.current == itR.current;
}
	
#endif
