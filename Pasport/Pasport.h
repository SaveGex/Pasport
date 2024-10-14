#pragma once

#include <string>
#include <iostream>
#pragma region Data_classes
class Name {
public:
	std::string name;
	std::string surname;
	std::string middle_name;

	Name(std::string name, std::string surname, std::string middle_name) : name{ name }, surname{ surname }, middle_name{ middle_name } {}

	// Êîíñòðóêòîð êîï³þâàííÿ
	Name(const Name& other) : name(other.name), surname(other.surname), middle_name(other.middle_name) {}

	Name& operator=(const Name& other) {
		if (this == &other) return *this;
		name = other.name;
		surname = other.surname;
		middle_name = other.middle_name;
		return *this;
	}
	std::string display() {
		std::string result = " Name: " + name + " Surname: " + surname + " Middle name: " + middle_name;
		return result;
	}
};


class Date {
private:
	int year;
	int month;
	int day;
public:
	Date(int year, int month, int day);
	Date();
	void Set_Date();
	std::string display();

};
#pragma endregion

class Pasport
{
public:
	Name FullName;
	char sex;
	std::string Nationality;
	Date DateofBirth;
	Date DateofExpiry;
	Date DateofIssue;
public:


	Pasport(std::string name, std::string surname, std::string middle_name,
		char sex, std::string Nationality,
		int YearofB, int MonthofB, int DayofB,
		int YearofE, int MonthofE, int DayofE,
		int YearofI, int MonthofI, int DayofI);

	Pasport();

	void Set_Sex(char sex);

	void Set_Date_Birth();
	void Set_Date_Expiry();
	void Set_Date_Issue();
	std::string display();
};

