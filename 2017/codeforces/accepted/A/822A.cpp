#include <iostream>
using namespace std;


int factorial(int x){
    for (int i = x-1; i > 1; i--) x *= i;
    return x;
}

int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    cout << factorial(min(a, b)) << endl;
}
