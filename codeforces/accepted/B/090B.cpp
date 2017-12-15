#include <iostream>
using namespace std;


int main(){
    int n, m;
    char ch, mat[100][101];
    bool flag;
    scanf("%d %d", &n, &m);

    for (int i = 0; i < n; i++){
	scanf("%s", mat+i);	    
    }

    for (int i = 0; i < n; i++){
	for (int q = 0; q < m; q++){
	    flag = true;
	    ch = mat[i][q];

	    for (int w = 0; w < n && flag; w++){
		if (ch == mat[w][q] && w != i){
		    flag = false;
		}
	    }

	    for (int w = 0; w < m && flag; w++){
		if (ch == mat[i][w] && w != q)
		    flag = false;
	    }

	    if (flag) printf("%c", ch);
	}
    }
}
