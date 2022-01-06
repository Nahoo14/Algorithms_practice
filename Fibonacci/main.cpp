#include <iostream>

using namespace std;

int fibonacci_recursive(int index){
    if(index <= 1)
        return index;
    return fibonacci_recursive(index-1) + fibonacci_recursive(index-2);
}

int fibonnaci_iterative(int index){
    int sum = 0;
    int prev1 = 0;
    int prev2 = 1;
    if(index <= 1){
        return index;
    }
    for(int i = 2; i <= index; i++){
        sum = prev1 + prev2;
        prev1 = prev2;
        prev2 = sum;
    }
    return sum;   
}

int main(){
    cout << fibonacci_recursive(8) << endl;
    cout << fibonnaci_iterative(8) << endl;
}