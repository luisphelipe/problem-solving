#include <stdio.h>
#include <stdlib.h>


// Return array of size n
int *new_list(int n){
    int *list = (int*) malloc(n * sizeof(int)); 
    for(int i = 0; i < n; i++) list[i] = 0;
    return list;
}

// Insertion sort
void insertion_sort(int *list, int length){
    int temp, i, q;
    for(i = 1; i < length; i++){
	temp = list[i];
	for(q = i; q > 0 && list[q-1] > temp; q--)
	    list[q] = list[q-1];
	list[q] = temp;
    }
}

int main(){
    int n, fs, *list, total=0;
    scanf("%d %d", &n, &fs);

    list = new_list(n);
    for(int i = 0; i < n; i++) scanf("%d", list+i);
    insertion_sort(list, n);

    for(int i = n-1; fs > 0; i--){
	fs -= list[i];
	total++;
    }

    printf("\n%d\n", total);
    return 0;
}
