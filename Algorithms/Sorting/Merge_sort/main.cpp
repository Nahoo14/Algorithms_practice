#include <iostream>
#include <vector>

using namespace std;

void print_vector(vector <int> arr){
        for(auto i : arr){
                cout << i << " ";
        }
        cout << endl;
}


void merge(vector<int>&arr, int start, int halfway, int end){
        int left_size = halfway-start+1;
        int right_size = end-halfway;
        vector<int>left_arr(left_size,0);
        vector<int>right_arr(right_size,0);
        for(int i = 0; i < left_size; i++){
                left_arr[i] = arr[start+i];
        }
        for(int i = 0; i < right_size; i++){
                right_arr[i] = arr[halfway+i+1];
        }
        // cout << "Printing left array------------" << endl;
        // print_vector(left_arr);
        // cout << "Printing right array------------" << endl;
        // print_vector(right_arr);
        int i = 0;
        int j = 0;
        int k = start;
        //print_array(arr,end+1);
        while((i<left_size)&&(j<right_size)){
                if(left_arr[i]<=right_arr[j]){
                        arr[k] = left_arr[i];
                        k++;
                        i++;
                }
                else{
                        arr[k] = right_arr[j];
                        k++;
                        j++;
                }
        }
        // add at both ends
        while(i<left_size){
                arr[k++] = left_arr[i++];
        }
        while(j<right_size){
                arr[k++] = right_arr[j++];
        }
}
void mergeSort(vector<int> &arr, int start, int end){
        //print_array(arr,end+1);
        if(start>=end){
                return;
        }
        int halfway = start + (end-start)/2;
        mergeSort(arr,start,halfway);
        mergeSort(arr,halfway+1,end);
        //print_array(arr,end+1);
        merge(arr,start,halfway,end);
}

int main(){
	vector<int> arr = {99,44,6,2,1,5,63,87,283,4,0};
        //vector <int> arr = {4,0,2,3,1,5};
        //vector<int> arr = {4,0,2,3};
        mergeSort(arr,0,arr.size()-1);
        print_vector(arr);
}