#include<stdio.h>
typedef struct{
    float length;
    float width;
    float area;
} Rectangle;

void input(int n, Rectangle rects[n]); 
void calculate_area(int n, Rectangle rects[n]); 
int findLargestArea(int n, Rectangle rects[n]); 
void output(int largestIndex, Rectangle rects[], int n);

int main(){
    int n;

    printf("Enter the number of rectangles:");
    scanf("%d",&n);

    Rectangle rects[n];

    input(n, rects);
    calculate_area(n, rects);
    int largestIndex = findLargestArea(n, rects);
    output(largestIndex, rects, n);

}

void input(int n, Rectangle rects[n]){
    int i; 
    for(i=0;i<n;i++){
        printf("\nRectangle %d:\n", i + 1);
        printf("Enter length:");
        scanf("%f", &rects[i].length);
        printf("Enter width:");
        scanf("%f", &rects[i].width);
    }
}
void calculate_area(int n, Rectangle rects[n]){
    int i;
    for(i=0;i<n;i++){
        rects[i].area =rects[i].length*rects[i].width;
    }
}
int findLargestArea(int n, Rectangle rects[n]){
    int largestIndex=0, i;
    for(i=1;i<n;i++){
        if(rects[i].area > rects[largestIndex].area){
            largestIndex = i; 
        }
    }
    return largestIndex;
}

void output( int largestIndex, Rectangle rects[], int n){
        printf("Areas of Rectangles:\n"); 
        for (int i = 0; i < n; i++) {
            printf("Rectangle %d Area = %.2f\n", i + 1, rects[i].area);
        }

    printf("\nRectangle with Largest Area:\n");
    printf("Rectangle %d, Length = %.2f, Width = %.2f, Area = %.2f\n",
           largestIndex + 1,
           rects[largestIndex].length,
           rects[largestIndex].width,
           rects[largestIndex].area);
}
 