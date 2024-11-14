#ifndef ABSTRACT_SORTER_H
#define ABSTRACT_SORTER_H

#include "Sequence.h"

template <typename Type> class Sorter{

protected:

    /// @brief ukjmjmj
    bool (*cmp_)(Type const &, Type const &); // isLeftLessRight

public:

    Sorter(bool (*cmp)(Type const &, Type const &)) : cmp_(cmp) {}
    Sorter(Sorter<Type>* other) : cmp_(other->cmp_) {}

    virtual Sequence<Type>* Sort(Sequence<Type>* seq) = 0;

    virtual ~Sorter() {};

};

#endif