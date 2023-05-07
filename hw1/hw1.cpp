#include <iostream>
#include <string>
#include <vector>
#include "VectorNumberList.h"

using namespace std;
int main() {
    initialize();
    return 0;
}
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
void printVector(vector<int> vect) {
    int i = 0;
    while (i < vect.size()) {
        cout<<to_string(vect[i]) << endl;
        i++;
    }
}
void problem4() {
    vector<int> vect;
    for (int i = 0; i <= 9; i++) {
        vect.push_back(i);
    }
    vect.erase(vect.begin() + 0);
    vect.erase(vect.begin()+3);
    printVector(vect);
}

void problem5() {
        vector<int> vect;
    for (int i = 0; i <= 9; i++) {
        vect.push_back(i);
    }
    vect.erase(vect.begin() + 0);
    vect.erase(vect.begin()+3);
    //printVector(vect);

    vect.clear();
    int curr_num1 = 1;
    int curr_num2 = 1;
    int counter = 0;
    while (counter < 9) {
        vect.push_back(curr_num1);
        int curr_num3 = curr_num1 + curr_num2;
        curr_num1 = curr_num2;
        curr_num2 = curr_num3;
        counter++;
    }
    printVector(vect);
}*/
