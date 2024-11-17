#include "QuickSorter.h"
#include "BubbleSorter.h"
#include "PiramidSorter.h"
#include "MergeSorter.h"
#include "InsertionSorter.h"
#include "ShellSorter.h"
#include "BitonicSorter.h"
#include "ListSequence.h"
#include "ArraySequence.h"
#include "DynamicArray.h"
#include "Person.h"
#include "GetNamesAndSournamesToMyString.h" 
#include "WriteIntToFile.h"//home/goshagaina/MEPHILabsMyselfThirdSemester/SecondLaboratorySort/Declaration/Tests/GetNamesAndSournamesToMyString.h
#include <iostream>

bool cmpInt(int const & a, int const & b) // это компоратор
{
    return a < b;
}


int main(int argc, char** argv)
{
    int arr[12] = {1, 3, 0, 2211, -3, -4, -7, 0, 0, 0, 1, 5};
    //Sequence<int>* seq = new MutableArraySequence<int>(arr, 12);
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
    //ShellSorter<int> sSorter(cmpInt);
    //sSorter.Sort(seq);
    //BitonicSorter<int> bSorter(cmpInt);
    //bSorter.Sort(seq);
    //Person p1;
    //std::cin >> p1;
    //MyString str;
    //std::cin >> str;
    //std::cout << str;
    //std::cout << p1;
    //Sequence<int>* seq2 = seq->GetNewSequence(35);
    //delete seq2;
    //delete seq;
    // DynamicArray<MyString>* arrNames = GetSurnamesToMyString();
    // for(int i = 0; i < arrNames->GetCapacity(); i++)
    // {
    //     std::cout << arrNames->Get(i) << std::endl << arrNames->Get(i).GetLength();
    // }
    // delete arrNames;
    //MyString string = MyString::IntToMyString(-100);

    //td::cout << string;
    WriteSequenceIntToFile(100500);

}