#include <bits/stdc++.h>
using namespace std;

int majorityelm(vector<int> arr) {
    int count = 0;
    int elm = -1; 
    int n = arr.size();

\
    for (int i = 0; i < n; i++) {
        if (count == 0) {
            elm = arr[i];
            count = 1;
        } else if (elm == arr[i]) {
            count++;
        } else {
            count--;
        }
    }

    count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == elm) {
            count++;
        }
    }

    if (count > n / 2) {
        return elm;
    }
    
    return -1;
}

int main() {
    int a;
    vector<int> v;
    while (cin >> a) { 
        v.push_back(a);
    }

    if (v.empty()) {
        cout << "No elements provided!" << endl;
        return 0;
    }

    int elm = majorityelm(v);
    if (elm != -1) {
        cout << "Majority element: " << elm << endl;
    } else {
        cout << "No majority element found!" << endl;
    }

    return 0;
}