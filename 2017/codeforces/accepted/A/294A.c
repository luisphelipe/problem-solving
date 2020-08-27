#include <stdio.h>
#include <stdlib.h>


// Return array of size n
int *new_list(int n){
    int *list = (int*) malloc(n * sizeof(int)); 
    for(int i = 0; i < n; i++) list[i] = 0;
    return list;
}

// Implementation of print list
void printl(int *list, int length){
    for(int i=0; i < length; i++)
	printf("%d\n", list[i]);
}

int main(){
    int n, m, *birds, l, b;
    scanf("%d", &n);
    birds = new_list(n);
    for(int i=0; i < n; i++) scanf("%d", birds+i);

    scanf("%d", &m);
    for(int i=0; i < m; i++){
	scanf("%d %d", &l, &b);
	if (l > 1) birds[l-2] += b-1;
	if (l < n) birds[l] += birds[l-1] - b;
	birds[l-1] = 0;
    }

    printl(birds, n);
    return 0;
}
