#include<stdio.h>
int main(){
	//khai bao va khoi tao cac bien canh hinh vuong chieu dai chieu rong hinh chu nhat ban kinh hinh tron
	float long_side, large_side, radius, square_edge;
	//khai bao hang so PI la 3.14
	const float PI = 3.14;
	printf("nhap do dai hinh vuong :");
	scanf("%f", &square_edge);
	
	printf("nhap chieu dai hinh chu nhat :");
	scanf("%f", &long_side);
	
	printf("nhap chieu rong hinh chu nhat :");
	scanf("%f", &large_side);
	
	printf("nhap ban kinh hinh tron :");
	scanf("%f", &radius);
	
	float square_perimeter = square_edge * 4;
	float square_area = square_edge * square_edge;
	
	float rectangle_perimeter = (long_side + large_side) * 2;
	float rectangle_area = long_side * large_side;
	
	float circle_perimeter = radius * 2 * PI;
	float circle_area = radius * radius * PI;
	
	printf("Chu vi va dien tich hinh vuong la : %f %f \n", square_perimeter , square_area);
	printf("Chu vi va dien tich hinh chu nhat la : %f %f \n", rectangle_perimeter, rectangle_area);
	printf("Chu vi va dien tich hinh tron la : %f %f \n", circle_perimeter , circle_area);
}


