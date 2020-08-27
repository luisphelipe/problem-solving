#include <iostream>
using namespace std;


int main(){
    int q, a, b, A[5], B[5];
    long long total=0;
    cin >> a >> b;

    for(int q=0; q < 5; q++){
	A[q] = a/5 + (q > 0 && q <= a%5 ? 1 : 0);
	B[q] = b/5 + (q > 0 && q <= b%5 ? 1 : 0);
    }
    for(int q=0; q < 5; q++)
	total += (long long) A[q] * B[(5-q)%5];
    
    cout << total << endl;
    return 0;
}
