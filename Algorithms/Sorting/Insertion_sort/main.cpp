#include <iostream>

using namespace std;

int * insertion_sort(int arr[], int len){
    for(int i = 1; i<len ; i++){
        for(int j = 0; j<i; j++){
            if(arr[j]>arr[i]){
                int temp = arr[i];
                for(int k = i; k > j; k--){
                    arr[k] = arr[k-1];
                }
                arr[j] = temp;
            }
        }
    }
    return arr;
}

int main(){
    int arr [] = {8,5,2,6,9,3,1,4,0,7};
    int len = sizeof(arr)/sizeof(arr[0]);
    int * ret = insertion_sort(arr, len);
    cout << "[";
    for(int i = 0; i < len; i++){
        cout << ret[i] << " ";
    }
    cout << "]";
    cout << endl;

}