#include "QuickSorter.h"
#include "BubbleSorter.h"
#include "PiramidSorter.h"
#include "MergeSorter.h"
#include "InsertionSorter.h"
#include "ShellSorter.h"
#include "ListSequence.h"
#include "ArraySequence.h"
#include <iostream>

bool cmpInt(int const & a, int const & b) // это компоратор
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
    //MergeSorter<int> mSorter(cmp);
    //mSorter.Sort(seq);
    //InsertionSorter<int> iSorter(cmpInt);
    //iSorter.Sort(seq);
    ShellSorter<int> sSorter(cmpInt);
    sSorter.Sort(seq);
    PrintSeq(seq);

}