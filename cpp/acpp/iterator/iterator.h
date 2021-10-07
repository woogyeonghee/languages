//
// Created by test on 21. 10. 7..
//

#ifndef ITERATOR_ITERATOR_H
#define ITERATOR_ITERATOR_H

template<typename In,typename V>
In find(In b,In e, const V& v)
{
    while (b !=e)
    {
        if (*b ==v)
            break;
        ++b;
    }

    return b;
}

template<typename In,typename Out>
Out copy(In b,In e,Out des)
{
    while(b!=e)
    {
        *des++= *b++;
    }
    return des;
}

template<typename For,typename V>
void replace(For b,For e, const V& v,const V& v2)
{
    while (b!=e)
    {
        if(*b==v)
            *b=v2;
        ++b;
    }
}

template <typename T>
void swap(T& pa,T& pb)
{
    T tmp;
    tmp=pa;
    pa=pb;
    pb=tmp;
}

template <typename Bi>
void reverse(Bi b,Bi e)
{
    while (b!=e)
    {
        --e;
        if (b != e)
        {
            swap(*b,*e);
        }
        ++b;
    }
}

template <typename Ran, typename V>
bool binary_search(Ran b,Ran e,const V& value)
{
    while(b!=e)
    {
        Ran mid =b+(e-b)/2;
        if (value < *mid)
            e=mid;
        else if(*mid<value)
            b=mid;
        else
            return true;
    }
    return false;
}

#endif //ITERATOR_ITERATOR_H
