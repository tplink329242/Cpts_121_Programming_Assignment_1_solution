/*******************************************************************************************

* Programmer: Guangbei Yi                                                                        *

* Class: CptS 121, Spring 2021; Programming Assignment 1                                            *

* Programming Assignment: Equation Evaluator                                                  *

* Date: January 28, 2020                                                                           *

* Description: This program solved Write a C program that evaluates the equations provided.

* https://eecs.wsu.edu/~aofallon/cpts121/progassignments/PA1.htm

*******************************************************************************************/

#define _CRT_SECURE_NO_WARNINGS 
#define PI 3.1415926
#include<stdio.h>
#include<math.h>

void PA1_Task_1_Newton_s_Second_Law_of_Motion();
void PA1_Task_2_Volume_of_a_cylinder();
int PA1_Task_3_Character_encoding();
void PA1_Task_4_Distance_between_two_points();
void PA1_Task_5_Tangent();
void PA1_Task_6_Total_resistance_of_resistors_in_parallel();
int PA1_Task_7_General_equation();

int main(int argc, char* argv[])
{
	PA1_Task_1_Newton_s_Second_Law_of_Motion();
	PA1_Task_2_Volume_of_a_cylinder();
	PA1_Task_3_Character_encoding();
	PA1_Task_4_Distance_between_two_points();
	PA1_Task_5_Tangent();
	PA1_Task_6_Total_resistance_of_resistors_in_parallel();
	PA1_Task_7_General_equation();
	return 0;
}
void PA1_Task_1_Newton_s_Second_Law_of_Motion()
{
	float mass = 0, acceleration = 0, force = 0;
	printf("******************************************************************************************\n");
	printf("Enter two floating-point values for task 1: ");
	scanf(" %f%f", &mass, &acceleration);
	force = mass * acceleration;
	printf("\nNewton_s_Second_Law: force = mass * acceleration = %f * %f = %f", mass, acceleration, force);
	printf("\n******************************************************************************************\n");
}
void PA1_Task_2_Volume_of_a_cylinder()
{
	float radius = 0, height = 0, volume_cylinder = 0;
	printf("\n******************************************************************************************\n");
	printf("Enter two floating-point type values for task 2: ");
	scanf(" %f%f", &radius, &height);
	volume_cylinder = PI * powf(radius, 2) * height;
	printf("\nVolume of a cylinder: volume_cylinder = radius^2 * height = PI * %f^2 * %f = %f", radius, height, volume_cylinder);
	printf("\n******************************************************************************************\n");
}
int PA1_Task_3_Character_encoding()
{
	char plaintext_character = 0;
	char encoded_character = 0;
	int shift = 0;
	printf("\n******************************************************************************************\n");
	printf("Enter a char you want to encode in task 3: ");
	scanf(" %c", &plaintext_character);
	printf("Enter an intger you want to use in encoding: ");
	scanf(" %d", &shift);
	if (plaintext_character + shift > 94 || plaintext_character + shift <-32)
	{
		printf("Encode Limited Reached, abording...\n");
		printf("******************************************************************************************\n");
		return 0;
	}
	//The character will become lowercase if if plaintext_character is uppercase and shift is zero.
	//If the shift is various encode will be moved as ascii ordered.
	encoded_character = plaintext_character - 65 + 97 - shift;
	printf("\nCharacter encoding: encoded_character = (plaintext_character - 'A') + 'a' - shift = (%d - 'A') + 'a' - %d = %c", plaintext_character, shift, encoded_character);
	printf("\n******************************************************************************************\n");
	return 0;
}
void PA1_Task_4_Distance_between_two_points()
{
	float x1 = 0, x2 = 0, y1 = 0, y2 = 0, distance = 0;
	printf("\n******************************************************************************************\n");
	printf("Enter 4 float type values(x1,x2,y1,y2) for task 4: ");
	scanf(" %f%f%f%f", &x1, &x2, &y1, &y2);
	distance = sqrtf(powf(x1 - x2, 2) + powf(y1 - y2, 2));
	printf("\nDistance between two points: distance = square root of ((x1 - x2)^2 + (y1 - y2)^2) = sqrt( (%f - %f) ^ 2 + (%f - %f) ^ 2 ) = %f", x1, x2, y1, y2, distance);
	printf("\n******************************************************************************************\n");
}
void PA1_Task_5_Tangent()
{
	float theta = 0, tan_theta = 0;
	printf("\n******************************************************************************************\n");
	printf("Enter a float type values for task 5: ");
	scanf(" %f", &theta);
	tan_theta = sinf(theta) / cosf(theta);
	printf("\nTangent: tan_theta = sin (theta) / cos (theta) = sin (%f) / cos (%f) = %f", theta, theta, tan_theta);
	printf("\n******************************************************************************************\n");
}
void PA1_Task_6_Total_resistance_of_resistors_in_parallel()
{
	int R1 = 0, R2 = 0, R3 = 0;
	float total_resistance = 0;
	printf("\n******************************************************************************************\n");
	printf("Enter 3 integer type values for task 6: ");
	scanf(" %d%d%d", &R1, &R2, &R3);
	total_resistance = 1.0 / (1.0 / R1 + 1.0 / R2 + 1.0 / R3);
	printf("\nTotal resistance of resistors in parallel: total_resistance = 1 / (1 / R1 + 1 / R2 + 1 / R3) = 1 / (1 / %d + 1 / %d + 1 / %d) = %f", R1, R2, R3, total_resistance);
	printf("\n******************************************************************************************\n");
}
int PA1_Task_7_General_equation()
{
	int a = 0;
	float x = 0, y = 0, z = 0, y_res = 0;
	printf("\n******************************************************************************************\n");
	printf("Enter a integer type values for task 7: ");
	scanf(" %d", &a);
	if (a % 2 == 0)
	{
		printf("a can not be even!: ");
		return 0;
	}
	printf("Enter 3 float type values for task 7: ");
	scanf(" %f%f%f", &x, &y, &z);
	y_res = (float)2 / 3 - y + z * x / (a % 2) + PI;
	printf("\nGeneral equation: y = (2 / 3) - y + z * x / (a %% 2) + PI = (2 / 3) - %f + %f * %f / (%d %% 2) + PI = %f", y, z, x, a, y_res);
	printf("\n******************************************************************************************\n");
	return 0;
}