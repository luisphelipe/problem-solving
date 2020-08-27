#include <stdio.h>
#include <vector>
#define MAX 100010

using namespace std;

typedef struct node {
  vector<int> children;
  int value;
  int visited;
} Node;

Node arr[MAX];
int c;

int solveDepth(Node node, int id, int value) {
  if (node.value + value > c || node.visited) return 0;
  if (node.children.size() == 1 && arr[node.children[0]].visited) {
    return 1;
  }
  arr[id].visited = 1;
  int total = 0;
  for (int i : node.children) 
    total += solveDepth(arr[i], i, node.value ? value + node.value : 0);
  return total;
}

int main() {
  int v, i, a, b;
  scanf("%d %d", &v, &c);

  for (i = 1; i <= v; i++) 
    scanf("%d", &arr[i].value); 

  v--;
  while (v--) {
    scanf("%d %d", &a, &b);
    arr[a].children.push_back(b);
    arr[b].children.push_back(a);
  }

  printf("%d\n", solveDepth(arr[1], 1, 0));
  return 0;
}
