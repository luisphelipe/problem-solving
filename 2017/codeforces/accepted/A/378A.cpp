#include <iostream>
using namespace std;


int main(){
    int a, b, i, q=0, w=0, e=0;
    scanf("%d %d", &a, &b);
    for (i = 1; i <=6; i++) {
	if (abs(a-i) < abs(b-i)) q++;
	else if(abs(a-i) == abs(b-i)) w++;
	else e++;
    }
    cout << q << " " << w << " " << e << endl;
}
