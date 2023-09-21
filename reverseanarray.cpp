#include<iostream>
using namespace std;

//method 1
/*
int main() {

    int arr[10] = { 5, 7, -2, 10, 22, -2, 0, 5, 22, 1};

    int n= sizeof(arr)/sizeof(int);

    for(int i=(n-1); i>=0; i--){
        cout<< arr[i]<< " ";
    }
    return 0;
}

*/

//method 2

void ReverseArray(int arr[], int size){

    int start= 0;
    int end= size-1;
    
    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}

void PrintArray(int arr[], int size){

    for(int i=0; i<size; i++){
        cout<< arr[i]<< " ";
    }

    cout << endl;
}


int main(){

    int arr[6]={1,4,5,6,7,8};
    int brr[5]={4,7,56,23,78};

    ReverseArray(arr,6);
    ReverseArray(brr,5);

    PrintArray(arr,6);
    PrintArray(brr,5);


    return 0;
}