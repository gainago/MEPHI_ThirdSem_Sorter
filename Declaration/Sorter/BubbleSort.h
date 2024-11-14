#ifndef BUBBLE_SORT_H
#define BUBBLE_SORT_H

#include "AbstractSorter.h"

template <typename Type>  class BubbleSorter : public Sorter<Type>
{
public:

    BubbleSorter(bool (*cmp)(Type const &, Type const &)) : Sorter<Type>(cmp) {}
    BubbleSorter(BubbleSorter<Type> const & other) : Sorter<Type>(other.cmp_) {}

    Sequence<Type>* Sort(Sequence<Type>* seq) override
    {
        Sequence<Type>* seqToSort = seq->GetInstance();
        BubbleSort(seqToSort);
        return seqToSort;

    }
private:

    void BubbleSort(Sequence<Type>* seq)
    {
        for(int i = 0; i < seq->GetLength(); i++)
        {
            for(int j = 0; j < seq->GetLength() - i - 1; j++)
            {
                if(this->cmp_(seq->Get(j + 1), seq->Get(j))){

                    Type tmp = seq->Get(j);
                    seq->Set(j, seq->Get(j + 1));
                    seq->Set(j + 1, tmp);
                }
            }
        }

    }

};

#endif