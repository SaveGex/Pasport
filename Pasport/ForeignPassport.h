#pragma once
#include "Pasport.h"
#include <vector>
#include <string>
#include <chrono>
using namespace std;

class ForeignPassport :    public Pasport{
private:
	vector<string> visas;
	string number_ForeignPassport;
	static int count;
	static void add_count() {
		count++;
	}

public:

	ForeignPassport(Pasport obj,vector<string> visas, int number) : visas{ visas }, Pasport::Pasport(obj) {
		// Отримуємо час у форматі часових точок (high_resolution_clock)
		auto now = std::chrono::high_resolution_clock::now();

		// Отримуємо час у мілісекундах
		auto duration = now.time_since_epoch();
		auto millis = std::chrono::duration_cast<std::chrono::milliseconds>(duration).count();

		number_ForeignPassport = to_string(number) + '-' + to_string(millis);
	}
	ForeignPassport() : ForeignPassport(Pasport(string(""), string(""), string(""), ' ', string(""), 0, 0, 0, 0, 0, 0, 0, 0, 0), {}, 0) {}

	string display() {

		string result = " visas: ";
		
		for (int i = 0; i < visas.size(); i++) {
			result += visas[i];
		}

		result += " identifier: " + number_ForeignPassport;

		result += FullName.display() + DateofBirth.display() + DateofExpiry.display() + DateofIssue.display();

		return result;
	}

};

