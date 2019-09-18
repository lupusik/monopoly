#ifndef ITERATOR_HPP
#define ITERATOR_HPP
#include "array"

#include "square.hpp"

typedef std::array<Square, 40>::iterator Iterator;

class SquareIterator
{
public:
    SquareIterator(Iterator p_begin, Iterator p_end)
        : square(p_begin),
          begin(p_begin),
          end(p_end)
    {}

    void next();

    Square& operator*();


private:
    Iterator square;
    Iterator begin;
    Iterator end;
};

#endif // ITERATOR_HPP
