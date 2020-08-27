#include <iostream>
#define MAX 100000
using namespace std;


int main(){
    int s, arr[9];
    bool correct=false;
    for(int i=0; i<9; i++) scanf("%d", arr+i);
    for(int i=1; !correct; i++){
	correct=true;
	arr[0] = i;
	s = arr[0] + arr[1] + arr[2];
	arr[4] = s - arr[3] - arr[5];
	arr[8] = s - arr[6] - arr[7];
	if(arr[4] < 1 || arr[5] > MAX) correct=false;
	if(arr[8] < 1 || arr[8] > MAX) correct=false;
	if(arr[0] + arr[4] + arr[8] != s) correct=false;
    }

    for(int i=1; i < 10; i++) 
	printf("%d %s", arr[i-1], (i%3 == 0? "\n" : ""));
}
