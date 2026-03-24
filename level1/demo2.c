#include<stdio.h>
typedef struct{
    char rect[100];
    float length;
    float width;
}Rectangle;

Rectangle input();
float calculate_area(Rectangle rect);
void compare_area(Rectangle r1,Rectangle r2, Rectangle r3);

int main()
{
    Rectangle r1, r2, r3;

    printf("Enter the details of rectangle 1: \n");
    r1 = input();

    printf("Enter the details of rectangle 2: \n");
    r2 = input();

    printf("Enter the details of rectangle 3: \n");
    r3 = input();

    compare_area(r1,r2,r3);
    return 0;

}

Rectangle input(){

    Rectangle r;

    printf("Enter the name of the rectangle: \n");
    scanf("%s",r.rect);

    printf("Enter the length: \n");
    scanf("%f",&r.length);

    printf("Enter the width: \n");
    scanf("%f", &r.width);

    return r;
}

float calculate_area(Rectangle rect){
    return rect.length * rect.width; 
}

void compare_area(Rectangle r1,Rectangle r2, Rectangle r3){
    float a1 = calculate_area(r1);
    float a2 = calculate_area(r2);
    float a3 = calculate_area(r3);

    printf("Area of %s is %.2f\n", r1.rect, a1);
    printf("Area of %s is %.2f\n", r2.rect, a2);
    printf("Area of %s is %.2f\n", r3.rect, a3);

    if(a1>a2 && a1>a3){
        printf("Rectangle 1 is the largest");
    }else if(a2>a3 && a2>a1){
        printf("Rectangle 2 is the largest");
    }else if(a3>a2 && a3>a1){
        printf("Rectangle 3 is the largest");
    }else if(a1==a2 && a1>a3){
        printf("Rectangle 1 and Rectangle 2 is the largest");
    }else if(a1==a3 && a1>a2){
        printf("Rectangle 1 and Rectangle 3 is the largest");
    }else if(a2==a3 && a2>a1){
        printf("Rectangle 1 and Rectangle 2 is the largest");
    }else{
        printf("All the three rectangles are equal");
    }   
}