#include <iostream>

using namespace std;


int recursive_factorial(int num){
    if(num==2){
        return 2;
    }
    return num * recursive_factorial(num-1);
}

int loop_factorial(int num){
    int product_2 = 1;
    while(num >= 1){
        product_2 *= num;
        num -= 1;
    }
    return product_2;
}

int main(){
    cout << recursive_factorial(6) << endl;
    cout << loop_factorial(6) << endl;
    return 0;
}                               