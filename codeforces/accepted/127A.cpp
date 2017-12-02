#include <iostream>
#include <cmath>
using namespace std;


int main(){
    int n, k;
    double lx, ly, x, y, total=0;


    scanf("%d %d", &n, &k);
    scanf("%lf %lf", &x, &y);

    for(int i=1; i<n; ++i){
	lx = x, ly = y;
	scanf("%lf %lf", &x, &y);

	total += sqrt(pow(x-lx, 2) + pow(y-ly, 2));
    }

    printf("%.7lf\n", (total*k)/50);
    return 0;
}
