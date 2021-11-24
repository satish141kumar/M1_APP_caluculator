/**
 * @file mypro.h
 * @author Click to eat 
 * @brief 
 * @version 0.1
 * @date 2021-11-24
 * @copyright Copyright (c) 2021
 */
#include <stdio.h>
#include <string.h>
/**
 * @brief  signup details before placing order
 * inludes user name, age, password, email, 
 */
struct details {
	char uname[100];
	int age;
	char password[100];
	char email[100];
	char mobile[10];
};
/**
 * @brief selecting items according to hotels
 * @param first_food shall select the 1st food item 
 * and its quantity
 */
struct hotels {
	char hotel[100];
	char first_food[20];
	char second_food[20];
	char third_food[20];
	char fourth_food[25];
	int first, second, third, fourth;
};

int validate(); /*validate the signup /login credentials*/

