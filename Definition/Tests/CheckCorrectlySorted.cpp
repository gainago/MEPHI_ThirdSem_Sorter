#include "Sequence.h"

template <typename Type> bool SeqIsCorrectlySorted(Sequence<Type> const *seq, bool (*cmp)(Type const &, Type const &))
{
    for(int i = 0; i < seq->GetLength() - 1; i++)
    {
        if(!cmp(seq->Get(i), seq->Get(i + 1)))
            return false;
    }
}

