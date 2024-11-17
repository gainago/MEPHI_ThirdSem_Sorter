#ifndef WRITE_SEQUENCE_INT_TO_FILE
#define WRITE_SEQUENCE_INT_TO_FILE

#include <fstream>

#include "Sequence.h"
#include "DynamicArray.h"
#include "GenerateArraySequenceInt.h"
#include "MyString.h"


void WriteSequenceIntToFile(int const count)
{
    Sequence<int> *seq = GenerateArraySequenceInt(count);
    std::ofstream ofs;
    MyString strFile("GeneratedInt");
    strFile = strFile + MyString::IntToMyString(count);
    ofs.open(strFile.Seize());
    ofs << "aaaoooCOCANM";
    

}


#endif //WRITE_SEQUENCE_INT_TO_FILE