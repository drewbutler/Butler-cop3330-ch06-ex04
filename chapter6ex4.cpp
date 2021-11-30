/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Drew Butler
 */

#include <iostream>
#include <vector>
#include <string>
#include "std_lib_facilities.h"
using namespace std;

class Name_value {
    public:
        string name;
        int score;
        Name_value(string str, int val)
            :name(str), score(val) { }
};

int main(void) {
    
    vector<Name_value> v;
    string name;
    int score, check = 0;

    cout << "Enter a name followed by score:\n";
    cin >> name;
    cin >> score;

    while (name.compare("NoName") != 0 && score != 0) {
        for (int i = 0; i < v.size(); i++) {
            if (name == v[i].name) {
                cout << "You have already entered that name.\n";
                check = 1;
                break;
            }
        }
        if (check == 1)
            break;
        v.push_back(Name_value(name, score));
        cin >> name;
        cin >> score;
    }

    for (int i = 0; i < v.size(); i++) {
        cout << v[i].name << " " << v[i].score << "\n";
    }

    return 0;
}