#ifndef ITERATOR_ITERATOR_H
#define ITERATOR_ITERATOR_H

// 순차적 읽기 접근
template<typename In, typename V>            // T type -> iterator type T는 iterator 타입
In find(In b, Im e, const V& v)                // 리턴이 in 이면 순차적인 iterator
{
    while (b != e) {
        if (*b == v)
            break;
        ++b;
    }

    return b;                   // 찾았으면 b, 못찾았으면 end 위치를 반환할 것
}

// 순차적 쓰기 접근
template <typename In, typename Out>
Out copy(In b, In e, Out des)    // 마지막 데이터의 위치 리턴
{
    while (b != e) {
        *des = *b++;
    }

    return des;
}

// 순차적 읽기 및 쓰기 접근
template<typename  For, typename V>
void replace(For b, For e, const V& v, const V& v2)
{
    while (b != e) {
        if (*b == v)
            *b = v2;
        ++b;
    }
}

// 양방향 접근

template <typename T>
void swap(T& ra, T& rb)
{
    T tmp;
    tmp = ra;
    ra = rb;
    rb = tmp;
}

template <typename Bi>
void reverse(Bi b, Bi e)
{
    while (b != e) {
        --e;            // 데이터가 있는 위치까지 가야하므로 감소 시켜야함
        if (b != e) {
            swap(*b, *e);       // iterator가 가리키는 대상을 레퍼런스
        }
    }
}

// 임의적 접근
template <typename Ran, typename V>
bool binary_search(Ran b, Ran e, const V&  value)
{
    while (b != e) {
        Ran mid = b + (e - b) / 2;          // 가운데 값
        if (value < *mid)
            e = mid;                      // 뒷 내용을 삭제
        else if (*mid < value)
            b = mid + 1;
        else
            return true;
    }

    return false;
}

#endif //ITERATOR_ITERATOR_H
