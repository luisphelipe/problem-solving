#include <iostream>
using namespace std;


int main(){
    int a, b, c, t;
    scanf("%d %d %d", &a, &b, &c);
    t = min(min(a, b/2), c/4);
    cout << t*7 << endl;
}
