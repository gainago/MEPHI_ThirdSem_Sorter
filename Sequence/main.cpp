#include <iostream>
#include <cassert>
#include "ArraySequence.h"
#include "ListSequence.h"

int main(int argc, char** argv)
{
    int array[5] = {1, 2, 3, 4, 5};
    MutableArraySequence<int> arraySeq(array, 5);
    MutableListSequence<int> listSeq(array, 5);
    assert(arraySeq.operator==(listSeq));

}