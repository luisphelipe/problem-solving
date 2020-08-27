#include <iostream>
#include <vector>
using namespace std;


int main(){
    string s;
    cin >> s;
    vector<int> rv(s.size());
    for (int i = 0; i < rv.size()-1; i++)
	rv[i] = (s[i] == s[i+1] ? 1 : 0);
    for (int i = rv.size()-2; i >= 0; i--)
	rv[i] += rv[i+1];
    
    int n, a, b, sum;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
	scanf("%d %d", &a, &b);
	printf("%d\n", rv[a-1] - rv[b-1]);
    }
}
