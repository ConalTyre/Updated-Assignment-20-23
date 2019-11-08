/*
* UUDate.cpp
*
* Version information
* Author: TODO - Add your name here
* Date: TODO - Add date you started working on the code
* Description: This file is the implementation file for the UUDate class and defines (implements) the functions of the class
*
* Copyright notice -
*/


#include "UUDate.h"
#include <vector>
#include <string>
#include <array>
#include <stdio.h>
#include <sstream>

UUDate::UUDate(){
	SetYear(2000);
	SetMonth(01);
	SetDay(01);
	//Initialise the date to 01/01/2000
	//TODO - Add your implementation here
}

bool isValidYear(int year) {
	if (year > 1000 && year < 10000)
		return true;
}

bool isValidMonth(int month) {
	if (month > 0 || month < 13)
		return true;
	
}


bool isValidDay(int day) {
	return true;
}



UUDate::UUDate(int day, int month, int year){
	year = 2000;
	month = 01;
	day = 01;
	SetYear(year);
	SetMonth(month);
	SetDay(day);
}

UUDate::UUDate(std::string date) {
	//TODO - Add your implementation here
	int day, month, year;

	std::stringstream Date(date);
	std::string tempStr;
	std::vector < std::string> dateVector;
	while (std::getline(Date, tempStr, '/')) {
	dateVector.push_back(tempStr);
	}
	day = atoi(dateVector[0].c_str());
	month = atoi(dateVector[1].c_str());
	year = atoi(dateVector[2].c_str());

	SetDay(day);
	SetMonth(month);
	SetYear(year);
	

}

void UUDate::IncrementDate() {
	//TODO - Add your implementation here
	day_++;
}

int UUDate::Between(UUDate date) {
	return 0;
	//TODO - Add your implementation here
}

int UUDate::GetDay() const {
	return day_;
	//TODO - Add your implementation here
}

void UUDate::SetDay(int day) {
	if (isValidDay(day)) {
		day_ = day;
	}
}

int UUDate::GetMonth() const {
	return month_;
	//TODO - Add your implementation here
}

void UUDate::SetMonth(int month) {
	if (isValidMonth(month)) {
		month_ = month;
	}

}

int UUDate::GetYear() const {
	return year_;
	//TODO - Add your implementation here
}

void UUDate::SetYear(int year) {
	if (year >= 1000 && year < 10000) {
		year_ = year;
	}
}

std::string UUDate::GetDate() {
	//TODO - Add your implementation here

	char buffer[40] = { 0 };
	sprintf(buffer, "%02d/%02d/%02d", month_, year_);
	std::string Date = buffer;
	return Date;
}
