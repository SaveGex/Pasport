#include "Pasport.h"

Pasport::Pasport(
	std::string name, std::string surname, std::string middle_name, 
	char sex, std::string Nationality, 
	int YearofB, int MonthofB, int DayofB, 
	int YearofE, int MonthofE, int DayofE, 
	int YearofI, int MonthofI, int DayofI) 
	: FullName(name, surname, middle_name),
	sex{ sex },
	Nationality{ Nationality },
	DateofBirth(YearofB, MonthofB, DayofB),
	DateofExpiry(YearofE, MonthofE, DayofE),
	DateofIssue(YearofI, MonthofI, DayofI) {}

Pasport::Pasport() 
	: FullName("", "", ""),
	sex(' '),
	Nationality(""),
	DateofBirth(),
	DateofExpiry(),
	DateofIssue() {}


void Pasport::Set_Sex(char sex) {
	this->sex = sex;
}

void Pasport::Set_Date_Birth() {
	this->DateofBirth.Set_Date();
}

void Pasport::Set_Date_Expiry() {
	this->DateofExpiry.Set_Date();
}

void Pasport::Set_Date_Issue() {
	this->DateofIssue.Set_Date();
}

std::string Pasport::display()
{
	std::string result = "Full name: " + FullName.display() + "" + DateofBirth.display() + " nationality: " + Nationality + DateofExpiry.display() + DateofIssue.display() + " sex: " + sex;
	return result;
}


Date::Date(int year, int month, int day) : year{ year }, month{ month }, day{ day } {}

Date::Date() : Date(0, 0, 0) {}

void Date::Set_Date() {
	std::cout << "Write year: ";
	std::cin >> this->year;
	std::cout << "Write month: ";
	std::cin >> this->month;
	std::cout << "Write day: ";
	std::cin >> this->day;

}

std::string Date::display(){
	std::string result = " date: " + std::to_string(year) +'.' + std::to_string(month) + '.' + std::to_string(day);
	return result;
}

std::string Name::display() {
	std::string result = " Name: " + name + " Surname: " + surname + " Middle name: " + middle_name;
	return result;
}
