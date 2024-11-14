#include "QuickSort.h"
#include "ListSequence.h"
#include <iostream>

bool cmp(int const & a, int const & b)
{
    return a < b;
}


int main(int argc, char** argv)
{
    int arr[5] = {1, 999, 3, 4, 5};
    Sequence<int>* seq = new MutableListSequence<int>(arr, 5);

    QuickSorter<int> QSorter(cmp);
    QSorter.Sort(seq);
    PrintSeq(seq);


}