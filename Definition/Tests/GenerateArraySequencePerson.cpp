#include <fstream>
#include <cmath>
#include "Sequence.h"
#include "Person.h"
#include "ArraySequence.h"

Sequence<Person>* GenerateArraySequencePerson(int const count, DynamicArray<MyString>* Names, DynamicArray<MyString>* Surnames)
{
    Sequence<Person> *seq = new MutableArraySequence<Person>(count);
    for(int i = 0; i < count; i++)
    {
        int indexName = rand() % 753;
        int indexSurname = rand() % 14651;
        Person tmpPerson(nullptr, Names->Get(indexName), Surnames->Get(abs(indexSurname - indexName )), Surnames->Get(indexSurname), i);
        seq->Set(i, tmpPerson);
    }
    
    return seq;

}