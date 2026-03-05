#include<stdio.h>
void input(int n, float arr[n]){
 printf("Enter the number of values:");
 scanf("%d",&n);
for(i=o;i<n;i++){
 printf("Enter the value at index %d",n);
 scanf("%.2f", &arr[i]);
}
int find_max_index(int n, float arr[n]){
 int i, max_index = 0;
 for(i = 1; i < n; i++){
  if(arr[i] > arr[max_index]){
    max_index = i;
   }
  }
 return max_index;
}
void output(float arr[], int max_index){
    printf("Maximum value = %.2f\n", arr[max_index]);
    printf("Index of maximum value = %d\n", max_index);
}
int main(){
  int main()
{
    int n, max_index;
    float arr[100];
    printf("Enter number of elements:");
    scanf("%d", &n);
    input(n, arr);
    max_index = find_max_index(n, arr);
    output(arr, max_index);
    return 0;
}

