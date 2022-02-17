#include<stdio.h>
#include<math.h>
float circle();
float triangle();
float pentagon();
float trapezoid();
char cr();
int main()
{
circle();
triangle();
pentagon();
trapezoid();
cr();
} 
	float circle(){
float r;
float s;
printf("find area of circle.\n");
printf("r = ");
scanf("%f",&r);
s=3.14159*r*r;
printf("area of circle = 3.14159*%.2f*%.2f = %.2f\n",r,r,s);
	return 0;
}
	float triangle(){
		float a;	//a are the sides of triangle a=a=a
		float s;
		printf("\nfind area of triangle.\n");
		printf("all sides are represented by a\n");
		printf("a = ");
		scanf("%f",&a);
		s= 0.43*a*a; // 0.43 = v3/4 = 1.73/4
		printf("area of traingle = v3/4*%.3f*%.3f = %.2f\n",a,a,s);
		return 0;
	}
	float pentagon(){
		float a;
		float s;
		printf("\nfind area of pentagon\n");
		printf("all sides are represented by a\n");
		printf("a = "); // all sides are equal.
		scanf("%f",&a);
		s= (sqrt(5 * ( 5 + 2 * (sqrt(5)))) * a * a) / 4;  // 5 * a^2 * tan54 / 4
		printf("area of pentagon = (5 * %.2f * %.2f * tan54) / 4 = %.2f\n",a,a,s);
		return 0;
		
	}
	float trapezoid(){
		float a,b,h,c;
		float s;
		printf("\nfind area of trapezoid.\n");
		printf("a is the upside of trapezoid.\n");
		printf("a = ");
		scanf("%f",&a);
		printf("\nb is the downside of trapezoid.\n");
		printf("b = ");
		scanf("%f",&b);
		printf("\nh is the highest between a and b.\n");
		printf("h = ");
		scanf("%f",&h);
		c = a+b;
		s = 0.5*c*h;
		printf("area of trapezoid = 1/2 * %.3f * %.3f = %.2f",c,h,s);
		return 0;
	}
	char cr(){
		printf("\n                                             cedit: Ekthaviphonh THONGPHET\n");
		printf("\n                                                                   THANK YOU");
	}
