#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;


int main(){
    long long total=0;
    int n, v;
    scanf("%d", &n);
    vector<int> rv(n);
    for (int i = 0; i < n; i++)
	scanf("%d", &rv[i]);
    sort(rv.begin(), rv.end());
    for (int i = 0; i < n; i++)
	total += ((long long) rv[i]) * (i+2); 
    cout << total - rv.back() << endl;
}
