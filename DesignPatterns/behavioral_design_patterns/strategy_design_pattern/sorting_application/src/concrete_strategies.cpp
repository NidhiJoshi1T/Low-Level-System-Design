#include <bits/stdc++.h>
#include "strategy.h"
using namespace std;

class BubbleSort: public SortingStrategy{
public:
    void sort(vector<int>& arr) override {
        cout<<"Sorting using Bubble Sort"<<endl;
    }
};

class InsertionSort: public SortingStrategy{
public:
    void sort(vector<int>& arr) override {
        cout<<"Sorting using Insertion Sort"<<endl;
    }
};

class SelectionSort: public SortingStrategy{
public:
    void sort(vector<int>& arr) override {
        cout<<"Sorting using Selection Sort"<<endl;
    }
};

class MergeSort: public SortingStrategy{
public:
    void sort(vector<int>& arr) override {
        cout<<"Sorting using Merge Sort"<<endl;
    }
};

class QuickSort: public SortingStrategy{
public:
    void sort(vector<int>& arr) override {
        cout<<"Sorting using Quick Sort"<<endl;
    }
};