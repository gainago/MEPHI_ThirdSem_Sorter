#ifndef QUICK_SORT_H
#define QUICK_SORT_H

#include <iostream>

#include "AbstractSorter.h"

template <typename Type> void PrintSeq(Sequence<Type> const * seq)
{
    for(int i = 0; i < seq->GetLength(); i++)
    {
        std::cout << seq->Get(i) << "   ";
    }
    std::cout << std::endl;
}

template <typename Type>  class QuickSorter : public Sorter<Type>
{
    public:

    QuickSorter(bool (*cmp)(Type const &, Type const &)) : Sorter<Type>(cmp) {}
    QuickSorter(const QuickSorter<Type> & other) : Sorter<Type>(other.cmp_) {}

    Sequence<Type>* Sort(Sequence<Type>* seq) override
    {
        Sequence<Type>* seqToSort = seq->GetInstance();
        quickSort(seqToSort, 0, seqToSort->GetLength() - 1);

        return seqToSort;

    }

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
                PrintSeq(seq);
                Type tmp = seq->Get(left);
                seq->operator[](left) = seq->Get(right);
                seq->operator[](right) = tmp;
                PrintSeq(seq);
                }
                left++;
                right--;
        }

        quickSort(seq, low, right);
        quickSort(seq, left, high);

        return mainElement;
    }

    /*void quickSort(Sequence<Type>* seq, int low, int high)
    {
        if(low < high){
            int pi = partition(seq, low, high);
            quickSort(seq, low, pi - 1);
            quickSort(seq, pi + 1, high);
        }
    }*/


};

#endif