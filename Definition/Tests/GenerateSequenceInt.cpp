#include <cstdlib>
#include "GenerateArraySequenceInt.h"
#include "ArraySequence.h"
Sequence<int>* GenerateArraySequenceInt(int const count)
{
    Sequence<int>* seq = new MutableArraySequence<int>(count);
    for(int i = 0; i < count; i++)
    {
        return seq;
    }
}