#ifndef QUICK_SORT_H
#define QUICK_SORT_H

#include "AbstractSorter.h"


template <typename Type>  class QuickSorter : public Sorter<Type>
{
public:

    QuickSorter(bool (*cmp)(Type const &, Type const &)) : Sorter<Type>(cmp) {}
    QuickSorter(QuickSorter<Type> const & other) : Sorter<Type>(other.cmp_) {}

    void Sort(Sequence<Type>* seq) override
    {
        //Sequence<Type>* seqToSort = seq->GetInstance();
        quickSort(seq, 0, seq->GetLength() - 1);

    }

private:

    int quickSort(Sequence<Type>* seq, int low, int high)
    {
        if(high <= low)
            return -1;

        int mainElement = (high - low) / 2 + low;

        int left = low, right = high;

        while(left < right)
        {
            while(this->cmp_(seq->Get(left), seq->Get(mainElement)))
                left++;
            while(this->cmp_(seq->Get(mainElement), seq->Get(right)))
                right--;
                if(left < right) {
                    Type tmp = seq->Get(left);
                    seq->operator[](left) = seq->Get(right);
                    seq->operator[](right) = tmp;
                }
                left++;
                right--;
        }

        quickSort(seq, low, right);
        quickSort(seq, left, high);

        return mainElement;
    }

};

#endif