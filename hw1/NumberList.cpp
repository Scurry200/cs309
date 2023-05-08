#include "NumberList.h"
#include <vector>
#include <iostream>
void NumberList::printNumbers() {
    for (int i = 0; i < getSizeOfList(); i++) {
       std::cout << to_string(getNumberAt(i)) << endl; 
    }
}
void NumberList::computeNextFibonacciAndInsertAtEnd() {
    int sum = 0;
    if (getSizeOfList() >= 2) {
        sum = getNumberAt(getSizeOfList()-1) + getNumberAt(getSizeOfList()-2);
    
    } else if (getSizeOfList() == 1) {
        sum = getNumberAt(getSizeOfList()-1);
    }
    addNumberToList(sum);
}
void NumberList::computeNFibonacci(size_t n) {
    for (int i = 0; i < n; i++) {
        computeNextFibonacciAndInsertAtEnd();
    }
}
void NumberList::copyListIntoMe(NumberList &numList){
    clear();
    for (int i = 0; i < numList.getSizeOfList();i++) {
        addNumberToList(numList.getNumberAt(i));
    }
}    
void NumberList::reverseList() {
    int curr_size = getSizeOfList();
    for (int i = getSizeOfList()-1;i >= 0; i--) {
        int val = getNumberAt(i);
        addNumberToList(val);
    }
    for (int i = 0; i < curr_size;i++) {
        removeNumberFromFront();
    }
    
    //NumberList n2;
    //for (int i = getSizeOfList() - 1; i >= 0; i--) {
        //n2.addNumberToList(getNumberAt(i));
    //}
    //copyListIntoMe(&n2);
}