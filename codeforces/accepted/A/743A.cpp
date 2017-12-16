#include <iostream>
using namespace std;


int main(){
    string r;
    int n, a, b;
    cin >> n >> a >> b >> r;
    cout << (r[a-1] == r[b-1] ? 0 : 1) << endl;
}
