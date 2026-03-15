#include<stdio.h>
void input(int n, float arr[n]){
    int i;
    for(i=0;i<n;i++){
        printf("Enter the value at index %d");
        scanf("%f",&arr[i]);
}
int find_max_index(int n, float arr[n]){
    int i, find_max_index=0;
    for(i=1;i<n;i++){
        if(arr[i]<arr[max_index]){
            max_index=i;
        }
    }
    return max_index;
}
void output(float arr[], int max_index){
    printf("The maximum value is %f", arr[max_index]);
    printf("Index with maximum value is %d", max_index);
}
int main(){
    int n, max_index;

    printf("Enter the number of the values:\n");
    scanf("%d",&n);

    float arr[n];

    input(n,arr);
    max_index=find_max_index(n, arr);
    output(arr, n);
    return 0;
}