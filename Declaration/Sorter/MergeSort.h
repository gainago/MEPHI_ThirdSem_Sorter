#ifndef MERGE_SORT_H
#define MERGE_SORT_H

#include "AbstractSorter.h"


template <typename Type>  class MergeSorter : public Sorter<Type>
{
public:

    MergeSorter(bool (*cmp)(Type const &, Type const &)) : Sorter<Type>(cmp) {}
    MergeSorter(MergeSorter<Type> const & other) : Sorter<Type>(other.cmp_) {}

    Sequence<Type>* Sort(Sequence<Type>* seq) override
    {
        Sequence<Type>* seqToSort = seq->GetInstance();
        mergeSort(seqToSort, 0, seqToSort->GetLength() - 1);

        return seqToSort;

    }

private:

    

};

#endif