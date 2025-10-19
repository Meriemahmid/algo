#include <stdio.h>
{
  int add ( int a, int b){
    return a+b;
  }
}
{
  int max ( int a, int b){
    if (a>b){
      max = a
    }
    else {
      max = b
    }
    return max;
  }
}
{
  float averge (int arr [], int n){
    int f = 0; 
    for( int i = 0; i < n; i++){
      f = f + arr [i];
    }
    averge = f/n;
    return averge;
  }
}
int main () {
  int n; printf("give n:"); scanf("%d",&n);
  int tab[n];
  printf("give the matrix elements:",
    for(int i = o; i < n; i++){
    scanf("%d",&tab[i]);
    }
  int max = max ( tab [0], tab [1])
   for (int i = 2; i < n; i++){
    max = max (max, tab [i]);
   }
  printf("max = %d";max);
  float averge = averge ( tab [], n);
  return 0;
}
