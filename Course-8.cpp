
#include <iostream>
#include<string>
#include<iomanip>
int ReadNumber() {
	std::cout << "Enter Number: ";
	int Number;
	std::cin >> Number;
	return Number;
}
bool LeapYear(short Year) {
	if (Year % 400 == 0) {
		return true;
	}
	if (Year % 4 == 0 && Year % 100 != 0) {
		return true;
	}
	return false;
}

bool LeapYearShortVersion(short Year) {
	return Year % 400 == 0 ? true : (Year % 4 == 0 && Year % 100 != 0) ? true : false;
}

bool LeapYearSimplifiedVersion(short Year) {
	return Year % 400 == 0 || (Year % 4 == 0 && Year % 100 != 0);
}

int NumberOfDaysInYear(short Year) {
	return LeapYear(Year) ? 366 : 365;
}
int NumberOfHoursInYear(short Year) {
	return NumberOfDaysInYear(Year) * 24;
}
int NumberOfMinutesInYear(short Year) {
	return NumberOfHoursInYear(Year) * 60;
}
int NumberOfSecondsInYear(short Year) {
	return NumberOfMinutesInYear(Year) * 60;
}

void PrintYearTimeCard() {
	short Year;
	std::cout << "Enter Year: ";
	std::cin >> Year;
	std::cout << "Number Of Days    In Year [ " << Year << " ] Is " << NumberOfDaysInYear(Year)<<std::endl;
	std::cout << "Number Of Hours   In Year [ " << Year << " ] Is " << NumberOfHoursInYear(Year) << std::endl;
	std::cout << "Number Of Minutes In Year [ " << Year << " ] Is " << NumberOfMinutesInYear(Year) << std::endl;
	std::cout << "Number Of Seconds In Year [ " << Year << " ] Is " << NumberOfSecondsInYear(Year) << std::endl;
}
std::string NumberToText(int Number) {
	std::string FromOneToNineteen[] = { "", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen" };
	std::string FactorialOfTen[] = { "", " ", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety" };

	if (Number == 0) {
		return " ";
	}
	if (Number >= 1 &&  Number <= 19) {
		return  FromOneToNineteen[Number] + " ";
	}
	if (Number >= 20 && Number <= 100) {
		return FactorialOfTen[Number / 10] +" "+ NumberToText(Number % 10);
	}
	if (Number >= 100 && Number <= 999) {
		return NumberToText(Number/100) +"Hundred " + NumberToText(Number % 100);
	}
	if (Number >= 1000 && Number <= 1000000) {
		return NumberToText(Number / 1000) + "Thousand " + NumberToText(Number % 1000);
	}
	if (Number >= 1000000 && Number <= 1000000000) {
		return NumberToText(Number / 1000000) + "Million " + NumberToText(Number % 1000000);
	}
	return "Not Bound";
}

short NumberOfDaysInMonth(short Month ,short Year ) {
	short DaysInMonth[] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	return LeapYear(Year) && Month == 2? DaysInMonth[Month] +1 :DaysInMonth[Month];
}

short NumberOfHoursInMonth(short Month, short Year) {
	return NumberOfDaysInMonth(Month, Year) * 24;
}

int NumberOfMinutesInMonth(short Month, short Year) {
	return NumberOfHoursInMonth(Month, Year) * 60;

}
int NumberOfSecondsInMonth(short Month, short Year) {
	return NumberOfMinutesInMonth(Month, Year) * 60;
}
void PrintMonthTimeCard() {
	short Year;
	std::cout << "Enter Year: ";
	std::cin >> Year;
	short Month;
	std::cout << "Enter Month: ";
	std::cin >> Month;
	std::cout << "Number Of Days    In Month [ " << Month << " ] Is " << NumberOfDaysInMonth(Month,Year) << std::endl;
	std::cout << "Number Of Hours   In Month [ " << Month << " ] Is " << NumberOfHoursInMonth(Month, Year) << std::endl;
	std::cout << "Number Of Minutes In Month [ " << Month << " ] Is " << NumberOfMinutesInMonth(Month, Year) << std::endl;
	std::cout << "Number Of Seconds In Month [ " << Month << " ] Is " << NumberOfSecondsInMonth(Month, Year) << std::endl;
}



short DayPostionOfTheWeek(short Year , short Month , short Day){
	short	a = (14 - Month) / 12;
	short y = Year - a;
	short m = Month + (12 * a) - 2;
	short d = (Day + y + (y / 4) - (y / 100) + (y / 400) + ((31 * m) / 12)) % 7;
	return d;
}

std::string DayNameOfTheWeek(short DayPos) {
	std::string daysName[] = { "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday" };
	return daysName[DayPos];
}

short ReadYear() {
	short year;

	std::cout << "Enter a year: ";
	std::cin >> year;
	return year;
}
short ReadMonth() {
	short month;
	std::cout << "Enter a month: ";
	std::cin >> month;
	return month;
}
short ReadDay() {
	short day;
	std::cout << "Enter a day: ";
	std::cin >> day;
	return day;
}
void PrintDateCard() {
	short year  = ReadYear();
	short month = ReadMonth();
	short day = ReadDay();
	short dayPos = DayPostionOfTheWeek(year, month, day);
	std::string dayName = DayNameOfTheWeek(dayPos);
	std::cout << "Date      :" << day << "/" << month << "/" << year<<std::endl;
	std::cout << "Day Order :" << dayPos<<std::endl;
	std::cout << "Day Name  :" << dayName<<std::endl;

}

std::string MonthName(short Month , bool ShortVersion = true) {
	std::string fullMonthsName[] = { "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December" };
	std::string shortMonthsName[] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec" };
	return ShortVersion? shortMonthsName[Month-1]:fullMonthsName[Month-1];
}
std::string DayName(short Day , bool ShortVersion = true){
	std::string fullDaysName[] = { "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday" };
	std::string shortDaysName[] = { "Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat" };
	return ShortVersion? shortDaysName[Day]:fullDaysName[Day];
}

void PrintDashLineWithMonthNameInMiddle(std::string MonthName , short LineLength = 40) {
	
	short dashBeforeMonthName = (LineLength - MonthName.length()) / 2;
	short dashAfterMonthName = LineLength - MonthName.length() - dashBeforeMonthName;
	std::cout << std::string(dashBeforeMonthName,'-') << MonthName << std::string(dashAfterMonthName,'-')<<std::endl;
}
void PrintDashLine(short LineLength = 40) {
	std::cout << std::string(LineLength, '-') << std::endl;
}

void PrintClanderHeader() {
	std::string shortDaysName[] = { "Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat" };
	for (auto& i : shortDaysName)
	{
		std::cout<<std::setw(5)<<i;
	}
	std::cout << '\n';
}

void GenerateCalnderDays(short* Days, short Year,short Month,short Day) {
	short startDayOfMonth = DayPostionOfTheWeek(Year, Month, Day);
	short daysInMonth = NumberOfDaysInMonth(Month,Year);
	short counter = 1;
	for (size_t i = 0; i < 35; i++)
	{
		if ((i >= startDayOfMonth) && (counter <= daysInMonth)) {
			Days[i] = counter;
			counter++;
		}
		else
		{
			Days[i] = 0;
		}
		
	}
	
}

void PrintCalnderDays(short Year,short Month) {
	short days[35];
	GenerateCalnderDays(days,Year,Month,1);
	for (size_t i = 0; i < 35; i++)
	{
		if (days[i] != 0) {
			std::cout << std::setw(5) << days[i];
		}
		else
		{
			std::cout << std::setw(5) << "";
		}
		if (i % 7 == 6 && i != 34) { // New line after each complete week, avoid extra line at the end
			std::cout << "\n";
		}
		
	}
	std::cout << '\n';
}
void PrintCalenderCard(short Year,short Month) {
	//short year = ReadYear();
	//short month = ReadMonth();
	PrintDashLineWithMonthNameInMiddle(MonthName(Month));
	PrintClanderHeader();
	PrintCalnderDays(Year, Month);
	PrintDashLine();
}
void PrintCharacterBeforeAndAfterText(std::string Text, char Char = '-' , short LineLength = 40) {
	short characterBefore = (LineLength - Text.length()) / 2;
	short characterAfter = LineLength - Text.length() - characterBefore;
	std::cout << std::string(characterBefore, Char) << Text << std::string(characterAfter, Char)<<std::endl;
}

std::string  GenerateCalenderTextWithYear(short Year){
	return "Calender - "+ std::to_string(Year);
}
void PrintYearCalenderHeader(short Year) {
	PrintDashLine();
	PrintCharacterBeforeAndAfterText(GenerateCalenderTextWithYear(Year),' ');
	PrintDashLine();
}

void PrintYearCalender() {
	
	short year = ReadYear();
	PrintYearCalenderHeader(year);
	for (size_t i = 1; i <= 12; i++)
	{
		PrintCalenderCard(year,i);
		std::cout<<'\n';
	}
}

short HowManyDaysSinceStartOfTheYear(short Year, short Month, short Day) {
	short counter = 0;
	for (size_t i = 1; i < Month; i++)
	{
	 counter +=	NumberOfDaysInMonth(i, Year);
	}
	counter += Day;
	return counter;
}
void PrintHowManyDaysSinceStartOfTheYear() {
	short day = ReadDay();
	short month = ReadMonth();
	short year = ReadYear();

	std::cout << "Number of days from the begining of the year is " << HowManyDaysSinceStartOfTheYear(year, month, day)<<std::endl;
}

struct  Date
{
	short year;
	short month;
	short day;
};
Date DateFromDays(short Year , short Days) {
	short month=1;
	Date date = {0};
	for (size_t i = 1; i <= 12; i++)
	{

		short daysInMonth = NumberOfDaysInMonth(i, Year);
		if ((Days > 28) && (Days > daysInMonth)) {
			Days -= daysInMonth;
			month ++;
		}
		else
		{
			break;
		}
		
		

	}
	date.year = Year;
	date.month = month;
	date.day = Days;
		return date;
}
// hello test somthing in git
int main()
{

	//PrintHowManyDaysSinceStartOfTheYear();
	DateFromDays(ReadYear(),ReadDay());
}

