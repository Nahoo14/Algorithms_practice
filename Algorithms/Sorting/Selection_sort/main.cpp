#include <iostream>

using namespace std;

int * selection_sort(int arr[], int len){
    for(int i = 0; i < len; i++){
        for(int j = i+1; j < len; j++){
            if(arr[j] < arr[i]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    return arr;
}

int main(){
    int arr [] = {8,5,2,6,9,3,1,4,0,7};
    int len = sizeof(arr)/sizeof(arr[0]);
    int * ret = selection_sort(arr, len);
    cout << "[";
    for(int i = 0; i < len; i++){
        cout << ret[i] << " ";
    }
    cout << "]";
    cout << endl;

}