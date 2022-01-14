#include <iostream>

using namespace std;


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

}
void mergeSort(int arr[], int start, int end){
        if(start<=end){
                return;
        }
        int halfway = (start + end)/2;
        mergeSort(arr,start,halfway);
        mergeSort(arr,halfway+1,end);
        merge(arr,start,halfway,end);
}
int main(){
	int arr[5] = {4,0,2,3,1};

        int size = sizeof(arr)/sizeof(arr[0]);
        mergeSort(arr,0,size-1);
}