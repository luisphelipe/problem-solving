#include <iostream>
#include <set>
using namespace std;


int main(){
    int n;
    
    cin >> n;

    if (n > 26){
	cout << -1 << endl;
	return 0;
    }

    char *r = (char*) malloc(n * sizeof(char));
    scanf("%s", r);
    set<char> rs(r, r+n*sizeof(char));
    cout << n - rs.size() << endl;
}
