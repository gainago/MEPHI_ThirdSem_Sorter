#ifndef ABSTRACT_SORTER_H
#define ABSTRACT_SORTER_H

#include "Sequence.h"

template <typename Type> class Sorter{

    private:
    bool (*cmp_)(Type const &, Type const &);

    public:

    Sorter(bool (*cmp)(Type const &, Type const &)) : cmp_(cmp) {}

    virtual ~Sorter() = 0;

    Sequence<Type>* Sort(Sequence<Type>* seq) = 0;

};

#endif