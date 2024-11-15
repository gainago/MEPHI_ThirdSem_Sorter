#include "QuickSort.h"
#include "BubbleSort.h"
#include "PiramidSort.h"
#include "MergeSort.h"
#include "ListSequence.h"
#include "ArraySequence.h"
#include <iostream>

bool cmp(int const & a, int const & b) // это компоратор
{
    return a < b;
}


int main(int argc, char** argv)
{
    int arr[12] = {1, 3, 0, 2211, -3, -4, -7, 0, 0, 0, 1, 5};
    Sequence<int>* seq = new MutableArraySequence<int>(arr, 12);
    //QuickSorter<int> QSorter(cmp);
    //QSorter.Sort(seq);
    //BubbleSorter<int> BSorter(cmp);
    //BSorter.Sort(seq);
   // PiramidSorter<int> PSorter(cmp);
    //PSorter.Sort(seq);
    MergeSorter<int> mSorter(cmp);
    mSorter.Sort(seq);
    PrintSeq(seq);

}