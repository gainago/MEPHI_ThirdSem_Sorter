#ifndef CHECK_CORRECTLY_SORTED_H
#define CHECK_CORRECTLY_SORTED_H

#include "Sequence.h"

template <typename Type> bool SeqIsCorrectlySorted(Sequence<Type> const *seq, bool (*cmp)(Type const &, Type const &));


#endif //CHECK_CORRECTLY_SORTED_H