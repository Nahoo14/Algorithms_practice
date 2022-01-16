#include <iostream>

using namespace std;

void print_array(int arr[], int size){
        for(int i = 0; i < size; i++){
                cout << arr[i];
                if(i<size-1)
                        cout << ",";
                else
                        cout << endl;
        }
}


void merge(int arr [], int start, int halfway, int end){
        int i = 0;
        int j = halfway+1;
        int k = 0;
        int temp [end+1];
        while((i<=halfway)&&(j<=end)){
                if(arr[i]<arr[j]){
                        temp[k++] = arr[i++];
                }
                else{
                        temp[k++] = arr[j++];
                }
        }
        // add at both ends
        while(i<=halfway){
                temp[k++] = arr[i++];
        }
        while(j<=end){
                temp[k++] = arr[j++];
        }
        for(int l = 0; l <= end; l++){
                arr[l] = temp[l];
        }
}
void mergeSort(int arr[], int start, int end){
        if(start==end){
                return;
        }
        int halfway = (start + end)/2;
        mergeSort(arr,start,halfway);
        mergeSort(arr,halfway+1,end);
        merge(arr,start,halfway,end);
}

int main(){
	int arr[] = {4,3,2,0,1,5,6};

        int size = sizeof(arr)/sizeof(arr[0]);
        mergeSort(arr,0,size-1);
        print_array(arr,size);
}