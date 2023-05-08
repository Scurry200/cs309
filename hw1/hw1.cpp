#include <iostream>
#include <string>
#include <vector>
#include "VectorNumberList.h"

/*
void problem2() {
    for (int i = 1; i < 6; i++) {
        string s = "";
        for (int x = 1; x <= i; x++) {
            s += to_string(x);
            s += " ";
        }
        cout << endl;
        cout << to_string(i) + "-" + s << endl;
    }
}
void problem3() {
        for (int i = 1; i < 6; i++) {
        string s = "";
        for (int x = 1; x <= i; x++) {
            s += to_string(x);
            s += " ";
        }
        cout << endl;
        if (i%2 == 1) {
            cout << to_string(i) << endl;

        } else if (i%2 == 0) {
            cout << to_string(i) + "-" + s << endl;
        }
        
    }
}
void printVector(vector<int> vect3) {
    int i = 0;
    while (i < vect3.size()) {
        cout<<to_string(vect3[i]) << endl;
        i++;
    }
}
/*void problem4() {
    vector<int> vect;
    for (int i = 0; i <= 9; i++) {
        vect.push_back(i);
    }
    vect.erase(vect.begin() + 0);
    vect.erase(vect.begin()+3);
    printVector(vect);
}

void problem5() {
    vector<int> vect3;
    for (int i = 0; i <= 9; i++) {
        vect3.push_back(i);
    }
    vect3.erase(vect3.begin() + 0);
    vect3.erase(vect3.begin()+3);
    //printVector(vect);

    vect3.clear();
    int curr_num1 = 1;
    int curr_num2 = 1;
    int counter = 0;
    while (counter < 9) {
        vect3.push_back(curr_num1);
        int curr_num3 = curr_num1 + curr_num2;
        curr_num1 = curr_num2;
        curr_num2 = curr_num3;
        counter++;
    }
    printVector(vect3);
}*/
    int main() {
        VectorNumberList vect;
        //v.initialize();
        //initialize();
        vect.addNumberToList(1);
        vect.addNumberToList(1);
        //std::cout << vect.getNumberAt(0) << endl;
        vect.computeNextFibonacciAndInsertAtEnd();
        vect.computeNFibonacci(3);
        //vect.printNumbers();
        VectorNumberList vect2;
        vect2.addNumberToList(49);
        vect2.copyListIntoMe(vect);
        vect2.printNumbers();
        vect2.reverseList();
        vect2.printNumbers();
        //printNumbers();
        //problem5();
        return 0;
    }

