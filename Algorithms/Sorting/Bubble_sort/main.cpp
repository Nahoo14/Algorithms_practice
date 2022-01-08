#include <iostream>

using namespace std;

int * bubble_sort(int arr[], int length){
    int k = 0;
    while(k<=length-1){
        for(int i = 1; i < length - k; i++){
            if(arr[i-1]>arr[i]){
                int temp = arr[i];
                arr[i] = arr[i-1];
                arr[i-1] = temp;
        }
    }
    k++;
    }
    return arr;
}

int main(){
    int arr[] = {7,2,9,8,0,4,3};
    int length = sizeof(arr)/sizeof(arr[0]);
    int * ret = bubble_sort(arr, length);
    cout << "[";
    for(int i = 0; i < length; i++){
        cout << ret[i] << " ";
    }
    cout << "]";
    cout << endl;
    return 0;
}