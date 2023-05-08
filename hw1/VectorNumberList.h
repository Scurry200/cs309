#ifndef VECTOR_NUMBER_LIST_H
#define VECTOR_NUMBER_LIST_H

#include <cstdlib>
#include "NumberList.h"
#include <vector>
//private vector vect;
//private int num_filled;
//private size_t capacity;
//put constructors in header

class VectorNumberList: public NumberList {
    public:
        void addNumberToList(int num);
        void removeNumberFromFront();
        void removeNumberFromBack();
        int getNumberAt(size_t index);
        size_t getSizeOfList();
        void clear();
    protected:
        vector<int> v;
};
#endif