#include "Time.h"
#include <math.h>

Time::Time(char* date, char* entryclock) {
	this->hour = entryclock[0] - 48;
	if (sizeof(entryclock) == 5) {
		this->hour = this->hour * 10 + entryclock[1] - 48;
		this->minute = (entryclock[3] - 48) * 10 + entryclock[4] - 48;
	}
	else {
		this->minute = (entryclock[2] - 48) * 10 + entryclock[3] - 48;
	}
	this->day = (date[0] - 48) * 10 + (date[1] - 48);
	this->month = (date[3] - 48) * 10 + (date[4] - 48);
	this->year = (date[6] - 48) * 10 + (date[7] - 48);
}
std::string Time::getTime() const {
	std::string str = std::to_string(this->hour);
	str += '.';
	if (this->minute < 10) str += '0';
	str+= std::to_string(this->minute);
	return str;
}
int Time::getDate() const {
	return this->day + this->month * 100 + this->year * 10000;
}

bool Time::operator<(const Time& x) const {
	double powermultiplier = 1;
	int score1 = this->minute + this->hour*pow(100, powermultiplier++) +
				 this->day*pow(100, powermultiplier++) + this->month*pow(100, powermultiplier++) +
				 this->year*pow(100, powermultiplier);
	powermultiplier = 1;
	int score2 = x.minute + x.hour*pow(100, powermultiplier++) +
				 x.day*pow(100, powermultiplier++) + x.month*pow(100, powermultiplier++) +
				 x.year*pow(100, powermultiplier);

	return score1 < score2;

}	 		
bool Time::operator>(const Time& x) const {
	double powermultiplier = 1;
	int score1 = this->minute + this->hour*pow(100, powermultiplier++) +
		this->day*pow(100, powermultiplier++) + this->month*pow(100, powermultiplier++) +
		this->year*pow(100, powermultiplier);
	powermultiplier = 1;
	int score2 = x.minute + x.hour*pow(100, powermultiplier++) +
		x.day*pow(100, powermultiplier++) + x.month*pow(100, powermultiplier++) +
		x.year*pow(100, powermultiplier);
	return score1 > score2;
}	 
bool Time::operator==(const Time& x) const {
	double powermultiplier = 1;
	int score1 = this->minute + this->hour*pow(100, powermultiplier++) +
		this->day*pow(100, powermultiplier++) + this->month*pow(100, powermultiplier++) +
		this->year*pow(100, powermultiplier);
	powermultiplier = 1;
	int score2 = x.minute + x.hour*pow(100, powermultiplier++) +
		x.day*pow(100, powermultiplier++) + x.month*pow(100, powermultiplier++) +
		x.year*pow(100, powermultiplier);
	return score1 == score2;
}