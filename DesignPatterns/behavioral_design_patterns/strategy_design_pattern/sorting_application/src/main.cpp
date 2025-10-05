#include <bits/stdc++.h>
#include "context.cpp"
#include "concrete_strategies.cpp"
using namespace std;

int main(){
        while(true){
            int n;
        cout<<"enter the length of array: ";
        cin>>n;
        vector<int> arr(n);
        cout<<"enter the elements of array: ";
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        
        cout<<"press '0' to exit the program"<<endl;
        cout<<"Enter the number to choose the sorting algorithm:"<<endl;
        cout<<"1 for Bubble Sort"<<endl;
        cout<<"2 for Insertion Sort"<<endl;
        cout<<"3 for Selection Sort"<<endl;
        cout<<"4 for Merge Sort"<<endl;
        cout<<"5 for Quick Sort"<<endl;

        int choice;
        cin>>choice;

        SortContext context;
        BubbleSort bubbleSort;
        InsertionSort insertionSort;
        SelectionSort selectionSort;
        MergeSort mergeSort;
        QuickSort quickSort;

        switch(choice){
            case 0:
                exit(0);
            case 1:
                context.setStrategy(&bubbleSort);
                break;
            case 2:
                context.setStrategy(&insertionSort);
                break;
            case 3:
                context.setStrategy(&selectionSort);
                break;
            case 4:
                context.setStrategy(&mergeSort);
                break;
            case 5:
                context.setStrategy(&quickSort);
                break;
            default:
                cout<<"Invalid choice! Please try again."<<endl;
                break;
        }
        context.executeStrategy(arr);

        cout<<"---------------------------------------"<<endl;
        cout<<"Array after sorting:"<<endl;
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }

    return 0;
}