#include <iostream>
#define td(c) (c-'0')
using namespace std;


int fs(string num){
    int sum=0;
    for(char ch : num)
	sum += td(ch);
    return sum;
}

int ns(int num){
    int sum=0;
    while(num){
	sum += num%10;
	num /= 10;
    }
    return sum;
}

int main(){
    string num;
    cin >> num;
    int n=(num.size() > 1 ? 1 : 0), sum=fs(num);
    while (sum > 9){
	sum = ns(sum);
	n++;
    }
    cout << n << endl;
}
