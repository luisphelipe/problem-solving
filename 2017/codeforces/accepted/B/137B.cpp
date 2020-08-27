#include <algorithm>
#include <iostream>
#include <set>
using namespace std;


int main(){
    int n, u, arr[5000];
    scanf("%d", &n);
    for(int i=0; i < n; i++) scanf("%d", arr+i);
    set<int> rset(arr, arr+n);
    u = count_if(rset.begin(), rset.end(), [n](int x) {return x <= n;});
    cout << n - u << endl;
}
