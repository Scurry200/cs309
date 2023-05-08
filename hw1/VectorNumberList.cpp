
#include <iostream>
#include "VectorNumberList.h" 
#include <vector>

void VectorNumberList::addNumberToList(int num) {
    v.push_back(num);
    //std::cout<<to_string(v[0])<<endl;
}
void VectorNumberList::removeNumberFromFront() {
    if (getSizeOfList() >= 1) {
        v.erase(v.begin());
    }
    
}
void VectorNumberList::removeNumberFromBack() {
    if (getSizeOfList() >= 1) {
        v.pop_back();
    }
}
int VectorNumberList::getNumberAt(size_t index) {
    if (getSizeOfList() > index && index >= 0) {
        return v[index];
    } else {
        return 0;
    }
    
}
size_t VectorNumberList::getSizeOfList() {
    return (size_t)v.size();
}
void VectorNumberList::clear() {
    v.clear();
}
/*void initialize() {
    capacity = 10;
    num_filled = 0;
    vect = new int[capacity];
    /*vect[1] = 1;
    for (int i = 0; i < 10; i++) {
        //std::cout << to_string(vect[i]) << endl;
    }
    size_real = size_real*2;
    int* vect2 = new int[size_real*2];
    std::fill_n (vect2, (sizeof(vect)/sizeof(vect[0]))*2, 0);
    for (int i = 0; i < size_real; i++) {
        //std::cout << to_string(vect2[i]) << endl;
    }
    for (int i = 10; i < size_real;i++) {
        vect2[i] = vect[i-10];
    }  
    for (int i = 0; i < size_real; i++) {
            //std::cout << to_string(vect2[i]) << endl;
    }
    vect = vect2;
    for (int i = 0; i < capacity; i++) {
        std::cout << to_string(vect[i]) << endl;
    }        
    
    
    /* NO POINTERS
    int vect[10] = {0,0,0,0,0,0,0,0,0,0};
        vect[1] = 1;
        for (int i = 0; i < 10; i++) {
            //std::cout << to_string(vect[i]) << endl;
        }
        int vect2[(sizeof(vect)/sizeof(vect[0]))*2];
        std::fill_n (vect2, (sizeof(vect)/sizeof(vect[0]))*2, 0);
        for (int i = 0; i < (sizeof(vect)/sizeof(vect[0]))*2; i++) {
            //std::cout << to_string(vect2[i]) << endl;
        }
        for (int i = 10; i < sizeof(vect2)/sizeof(vect2[0]);i++) {
            vect2[i] = vect[i-10];
        }
        for (int i = 0; i < (sizeof(vect)/sizeof(vect[0]))*2; i++) {
            std::cout << to_string(vect2[i]) << endl;
        }
    


}


    
void NumberList::addNumberToList(int num) {
    if (num_filled >= capacity) {
        int* vect2 = new int[capacity*2];
        for (int i = capacity; i < capacity*2; i++) {
            vect2[i] = vect[i-capacity]; //copies everything over
        }
        vect = vect2;
        capacity *= 2;
        vect[num_filled] = num;
        num_filled++;
    } else {
        vect[num_filled] = num;
        num_filled++;
    } 
}
    void NumberList::removeNumberFromFront() { 
        if (num_filled == 0) {
            return;
        }
        if (num_filled == 1) {
            vect[0] = 0;
        } else {
            for (int i = 1; i < num_filled; i++) {
                vect[i-1] = vect[i]; 
            }
        } 
    }
    void NumberList::removeNumberFromBack() {
        if (num_filled == 0) {
            return;
        }
        if (num_filled == 1) {
            vect[0] = 0;
        } else {
            vect[num_filled-1] = 0;
        }
    }
    int NumberList::getNumberAt(size_t index) {
        if (num_filled > index && index >= 0) {
            return vect[index];
        } else {
            return 0;
        }
    }
    size_t NumberList::getSizeOfList() {
        return num_filled;
    }
    void NumberList::clear() {
        for (int i = 0; i < num_filled; i++) {
            vect[i] = 0;
        }
    }
    void NumberList::printNumbers() {
        for (int i = 0; i < num_filled; i++) {
            std::cout << to_string(vect[i]) << endl;
        }
    }
    void NumberList::computeNextFibonacciAndInsertAtEnd() {
        int num1 = vect[num_filled-1];
        int num2 = vect[num_filled-2];
        int sum = num1+num2;
        addNumberToList(sum);
    }
    void NumberList::computeNFibonacci(size_t n) {
        for (int i = 0; i < n; i++) {
            computeNextFibonacciAndInsertAtEnd();
        }
    }
    void NumberList::copyListIntoMe(NumberList &numList) {
        clear();
    }
    void NumberList::reverseList() {

    }*/