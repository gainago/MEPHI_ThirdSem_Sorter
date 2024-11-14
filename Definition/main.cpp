#include "QuickSort.h"
#include "BubbleSort.h"
#include "PiramidSort.h"
#include "ListSequence.h"
#include "ArraySequence.h"
#include <iostream>

bool cmp(int const & a, int const & b)
{
    return a < b;
}


int main(int argc, char** argv)
{
    int arr[12] = {1, 999, 3, 4, 5, 4, 8, -3, 211, 0, 0, 0};
    Sequence<int>* seq = new MutableArraySequence<int>(arr, 12);
    Sequence<int>* seq2 = seq->GetSequence(30);
    //QuickSorter<int> QSorter(cmp);
    //QSorter.Sort(seq);
    //BubbleSorter<int> BSorter(cmp);
    //BSorter.Sort(seq);
   // PiramidSorter<int> PSorter(cmp);
    //PSorter.Sort(seq);

    PrintSeq(seq2);


}