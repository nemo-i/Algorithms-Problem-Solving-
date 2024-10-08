# Course-8
## All of this code i wrote it 
## Functions Overview
### 1. `int ReadNumber()`
```cpp
int ReadNumber() {
	std::cout << "Enter Number: ";
	int Number;
	std::cin >> Number;
	return Number;
}
```
- **Input:** None
- **Output:** Returns an integer that the user inputs.
- **Description:** Prompts the user to enter a number and returns that number as an integer.

### 2. `bool LeapYear(short Year)`
- **Input:** `short Year` - the year to check for leap year status.
- **Output:** Returns `true` if the year is a leap year, otherwise `false`.
- **Description:** Determines if a given year is a leap year using the standard leap year rules.
```cpp
bool LeapYear(short Year) {
	if (Year % 400 == 0) {
		return true;
	}
	if (Year % 4 == 0 && Year % 100 != 0) {
		return true;
	}
	return false;
}
```
### 3. `bool LeapYearShortVersion(short Year)`
- **Input:** `short Year` - the year to check for leap year status.
- **Output:** Returns `true` if the year is a leap year, otherwise `false`.
- **Description:** A more compact version of the leap year check using the ternary operator.
```cpp
bool LeapYearShortVersion(short Year) {
	return Year % 400 == 0 ? true : (Year % 4 == 0 && Year % 100 != 0) ? true : false;
}
```
### 4. `bool LeapYearSimplifiedVersion(short Year)`
- **Input:** `short Year` - the year to check for leap year status.
- **Output:** Returns `true` if the year is a leap year, otherwise `false`.
- **Description:** A simplified approach to determine if a year is a leap year using logical OR.
```cpp
bool LeapYearSimplifiedVersion(short Year) {
	return Year % 400 == 0 || (Year % 4 == 0 && Year % 100 != 0);
}
```
### 5. `int NumberOfDaysInYear(short Year)`
- **Input:** `short Year` - the year to calculate the number of days for.
- **Output:** Returns the total number of days in the specified year (365 or 366).
- **Description:** Returns the number of days in a year, accounting for leap years.
```cpp
int NumberOfDaysInYear(short Year) {
	return LeapYear(Year) ? 366 : 365;
}
```
### 6. `int NumberOfHoursInYear(short Year)`
- **Input:** `short Year` - the year to calculate the number of hours for.
- **Output:** Returns the total number of hours in the specified year.
- **Description:** Calculates the number of hours in a year based on the number of days.
```cpp
int NumberOfHoursInYear(short Year) {
	return NumberOfDaysInYear(Year) * 24;
}
```
### 7. `int NumberOfMinutesInYear(short Year)`
- **Input:** `short Year` - the year to calculate the number of minutes for.
- **Output:** Returns the total number of minutes in the specified year.
- **Description:** Calculates the number of minutes in a year based on the number of hours.
```cpp
int NumberOfMinutesInYear(short Year) {
	return NumberOfHoursInYear(Year) * 60;
}
```
### 8. `int NumberOfSecondsInYear(short Year)`
- **Input:** `short Year` - the year to calculate the number of seconds for.
- **Output:** Returns the total number of seconds in the specified year.
- **Description:** Calculates the number of seconds in a year based on the number of minutes.
```cpp
int NumberOfSecondsInYear(short Year) {
	return NumberOfMinutesInYear(Year) * 60;
}
```
### 9. `void PrintYearTimeCard()`
- **Input:** None
- **Output:** Displays the number of days, hours, minutes, and seconds in a specified year.
- **Description:** Prompts the user for a year and prints a time card with detailed time information.
```cpp
void PrintYearTimeCard() {
	short Year;
	std::cout << "Enter Year: ";
	std::cin >> Year;
	std::cout << "Number Of Days    In Year [ " << Year << " ] Is " << NumberOfDaysInYear(Year)<<std::endl;
	std::cout << "Number Of Hours   In Year [ " << Year << " ] Is " << NumberOfHoursInYear(Year) << std::endl;
	std::cout << "Number Of Minutes In Year [ " << Year << " ] Is " << NumberOfMinutesInYear(Year) << std::endl;
	std::cout << "Number Of Seconds In Year [ " << Year << " ] Is " << NumberOfSecondsInYear(Year) << std::endl;
}

```
### 10. `std::string NumberToText(int Number)`
- **Input:** `int Number` - the number to convert to text.
- **Output:** Returns the English word representation of the number.
- **Description:** Converts numbers into their corresponding textual representation.
```cpp
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
```
### 11. `short NumberOfDaysInMonth(short Month, short Year)`
- **Input:** 
  - `short Month` - the month to calculate the number of days for.
  - `short Year` - the year to account for leap years.
- **Output:** Returns the number of days in the specified month and year.
- **Description:** Calculates the number of days in a month, considering leap years for February.
```cpp
short NumberOfDaysInMonth(short Month ,short Year ) {
	short DaysInMonth[] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	return LeapYear(Year) && Month == 2? DaysInMonth[Month] +1 :DaysInMonth[Month];
}
```
### 12. `short NumberOfHoursInMonth(short Month, short Year)`
- **Input:** 
  - `short Month` - the month to calculate the number of hours for.
  - `short Year` - the year to account for leap years.
- **Output:** Returns the number of hours in the specified month and year.
- **Description:** Calculates the number of hours in a month based on the number of days.
```cpp

short NumberOfHoursInMonth(short Month, short Year) {
	return NumberOfDaysInMonth(Month, Year) * 24;
}
```
### 13. `int NumberOfMinutesInMonth(short Month, short Year)`
- **Input:** 
  - `short Month` - the month to calculate the number of minutes for.
  - `short Year` - the year to account for leap years.
- **Output:** Returns the number of minutes in the specified month and year.
- **Description:** Calculates the number of minutes in a month based on the number of hours.
```cpp
int NumberOfMinutesInMonth(short Month, short Year) {
	return NumberOfHoursInMonth(Month, Year) * 60;

}
```
### 14. `int NumberOfSecondsInMonth(short Month, short Year)`
- **Input:** 
  - `short Month` - the month to calculate the number of seconds for.
  - `short Year` - the year to account for leap years.
- **Output:** Returns the number of seconds in the specified month and year.
- **Description:** Calculates the number of seconds in a month based on the number of minutes.
```cpp
int NumberOfSecondsInMonth(short Month, short Year) {
	return NumberOfMinutesInMonth(Month, Year) * 60;
}
```
### 15. `void PrintMonthTimeCard()`
- **Input:** None
- **Output:** Displays the number of days, hours, minutes, and seconds in a specified month.
- **Description:** Prompts the user for a year and month, then prints a time card with detailed time information.
```cpp
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
```
### 16. `short DayPostionOfTheWeek(short Year, short Month, short Day)`
- **Input:** 
  - `short Year` - the year of the date.
  - `short Month` - the month of the date.
  - `short Day` - the day of the date.
- **Output:** Returns the position of the day in the week (0 for Sunday, 1 for Monday, etc.).
- **Description:** Calculates the position of the day of the week for a given date.
```cpp
short DayPostionOfTheWeek(short Year , short Month , short Day){
	short	a = (14 - Month) / 12;
	short y = Year - a;
	short m = Month + (12 * a) - 2;
	short d = (Day + y + (y / 4) - (y / 100) + (y / 400) + ((31 * m) / 12)) % 7;
	return d;
}
```
### 17. `std::string DayNameOfTheWeek(short DayPos)`
- **Input:** `short DayPos` - the position of the day in the week.
- **Output:** Returns the name of the day of the week as a string.
- **Description:** Converts the numeric day position into its corresponding day name.
```cpp
std::string DayNameOfTheWeek(short DayPos) {
	std::string daysName[] = { "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday" };
	return daysName[DayPos];
}

```
### 18. `short ReadYear()`
- **Input:** None
- **Output:** Returns a short representing the year input by the user.
- **Description:** Prompts the user to enter a year and returns that year.
```cpp
short ReadYear() {
	short year;

	std::cout << "Enter a year: ";
	std::cin >> year;
	return year;
}
```
### 19. `short ReadMonth()`
- **Input:** None
- **Output:** Returns a short representing the month input by the user.
- **Description:** Prompts the user to enter a month and returns that month.
```cpp
short ReadMonth() {
	short month;
	std::cout << "Enter a month: ";
	std::cin >> month;
	return month;
}

```
### 20. `short ReadDay()`
- **Input:** None
- **Output:** Returns a short representing the day input by the user.
- **Description:** Prompts the user to enter a day and returns that day.
```cpp
short ReadDay() {
	short day;
	std::cout << "Enter a day: ";
	std::cin >> day;
	return day;
}
```
### 21. `void PrintDateCard()`
- **Input:** None
- **Output:** Displays the date, its day order, and the name of the day.
- **Description:** Prompts the user for a date and prints the corresponding details.
```cpp
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

```
### 22. `std::string MonthName(short Month, bool ShortVersion = true)`
- **Input:** 
  - `short Month` - the month number (1-12).
  - `bool ShortVersion` - indicates whether to return the short version of the month name.
- **Output:** Returns the name of the month as a string.
- **Description:** Retrieves the full or short name of the month based on the input.
```cpp
std::string MonthName(short Month , bool ShortVersion = true) {
	std::string fullMonthsName[] = { "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December" };
	std::string shortMonthsName[] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec" };
	return ShortVersion? shortMonthsName[Month-1]:fullMonthsName[Month-1];
}


```
### 23. `std::string DayName(short Day, bool ShortVersion = true)`
- **Input:** 
  - `short Day` - the day position (0-6).
  - `bool ShortVersion` - indicates whether to return the short version of the day name.
- **Output:** Returns the name of the day as a string.
- **Description:** Retrieves the full or short name of the day based on the input.
```cpp
std::string DayName(short Day , bool ShortVersion = true){
	std::string fullDaysName[] = { "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday" };
	std::string shortDaysName[] = { "Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat" };
	return ShortVersion? shortDaysName[Day]:fullDaysName[Day];
}

```
### 24. `void PrintDashLineWithMonthNameInMiddle(std::string MonthName, short LineLength = 40)`
- **Input:** 
  - `std::string MonthName` - the name of the month to display.
  - `short LineLength` - the total length of the line.
- **Output:** None
- **Description:** Prints a line of dashes with the month name centered in the middle.
```cpp
void PrintDashLineWithMonthNameInMiddle(std::string MonthName , short LineLength = 40) {
	
	short dashBeforeMonthName = (LineLength - MonthName.length()) / 2;
	short dashAfterMonthName = LineLength - MonthName.length() - dashBeforeMonthName;
	std::cout << std::string(dashBeforeMonthName,'-') << MonthName << std::string(dashAfterMonthName,'-')<<std::endl;
}

```
### 25. `void PrintDashLine(short LineLength = 40)`
- **Input:** 
  - `short LineLength` - the total length of the line.
- **Output:** None
- **Description:** Prints a horizontal line of dashes of specified length.
```cpp
void PrintDashLine(short LineLength = 40) {
	std::cout << std::string(LineLength, '-') << std::endl;
}

```
### 26. `void PrintClanderHeader()`
- **Input:** None
- **Output:** None
- **Description:** Prints the header of the calendar with the names of the days of the week.
```cpp
void PrintClanderHeader() {
	std::string shortDaysName[] = { "Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat" };
	for (auto& i : shortDaysName)
	{
		std::cout<<std::setw(5)<<i;
	}
	std::cout << '\n';
}

```
### 27. `void GenerateCalnderDays(short* Days, short Year, short Month, short Day)`
- **Input:** 
  - `short* Days` - an array to store the days of the month.
  - `short Year` - the year of the month.
  - `short Month` - the month to generate days for.
  - `short Day` - the starting day for the month.
- **Output:** None
- **Description:** Fills the provided array with the days of the specified month and year.
```cpp
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


```
### 28. `void PrintCalnderDays(short Year, short Month)`
- **Input:** 
  - `short Year` - the year of the month.
  - `short Month` - the month to print.
- **Output:** None
- **Description:** Prints the calendar for the specified month and year.
```cpp
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
```
### 29. `void PrintCalenderCard()`

- **Input:** None
- **Output:** None
- **Description:** This function prompts the user to input a year and a month, then displays a formatted calendar for the specified month and year. It includes the month name centered at the top, followed by a header that lists the days of the week, and finally, the days of the month laid out in a grid format.
```cpp
void PrintCalenderCard() {
	short year = ReadYear();
	short month = ReadMonth();
	PrintDashLineWithMonthNameInMiddle(MonthName(month));
	PrintClanderHeader();
	PrintCalnderDays(year, month);
	PrintDashLine();
}

```

### 30. `void PrintCharacterBeforeAndAfterText(std::string Text, char Char = '-' , short LineLength = 40)`
- **Input:** 
  - `std::string Text` - the text to be printed.
  - `char Char` - the character to be printed before and after the text (default is '-').
  - `short LineLength` - the total length of the line (default is 40).
- **Output:** None
- **Description:** Prints the specified text centered with a given character padding it on both sides to fit the specified line length.
```cpp
void PrintCharacterBeforeAndAfterText(std::string Text, char Char = '-' , short LineLength = 40) {
	short characterBefore = (LineLength - Text.length()) / 2;
	short characterAfter = LineLength - Text.length() - characterBefore;
	std::cout << std::string(characterBefore, Char) << Text << std::string(characterAfter, Char)<<std::endl;
}
```
### 31. `std::string GenerateCalenderTextWithYear(short Year)`
- **Input:** 
  - `short Year` - the year for which the calendar text is generated.
- **Output:** `std::string` - a string containing the calendar text with the specified year.
- **Description:** Generates a string that represents the calendar header for the specified year.
```cpp
std::string  GenerateCalenderTextWithYear(short Year){
	return "Calender - "+ std::to_string(Year);
}
```
### 32. `void PrintYearCalenderHeader(short Year)`
- **Input:** 
  - `short Year` - the year for which the calendar header is printed.
- **Output:** None
- **Description:** Prints the header for the year calendar by calling functions to print dash lines and the formatted year text.
```cpp
void PrintYearCalenderHeader(short Year) {
	PrintDashLine();
	PrintCharacterBeforeAndAfterText(GenerateCalenderTextWithYear(Year),' ');
	PrintDashLine();
}
```
### 33. `void PrintYearCalender()`
- **Input:** None
- **Output:** None
- **Description:** Reads the year, prints the year calendar header, and calls the function to print the calendar card for each month of the specified year.
```cpp
void PrintYearCalender() {
	
	short year = ReadYear();
	PrintYearCalenderHeader(year);
	for (size_t i = 1; i <= 12; i++)
	{
		PrintCalenderCard(year,i);
		
	}
}
```
### 34. `short HowManyDaysSinceStartOfTheYear(short Year, short Month, short Day)`
- **Input:** 
  - `short Year` - the year.
  - `short Month` - the month.
  - `short Day` - the day of the month.
- **Output:** `short` - the number of days since the start of the year up to the given day.
- **Description:** Calculates and returns the total number of days from the beginning of the year to the specified day.
```cpp
short HowManyDaysSinceStartOfTheYear(short Year, short Month, short Day) {
	short counter = 0;
	for (size_t i = 1; i < Month; i++)
	{
	 counter +=	NumberOfDaysInMonth(i, Year);
	}
	counter += Day;
	return counter;
}
```
### 35. `void PrintHowManyDaysSinceStartOfTheYear()`
- **Input:** None
- **Output:** None
- **Description:** Reads the day, month, and year from the user and prints the number of days that have passed since the start of the year.
```cpp
void PrintHowManyDaysSinceStartOfTheYear() {
	short day = ReadDay();
	short month = ReadMonth();
	short year = ReadYear();
	
	
	std::cout << "Number of days from the begining of the year is " << HowManyDaysSinceStartOfTheYear(year, month, day);
}
```
### 36. `void DateFromDays(short Year, short Days)`
- **Input:** 
  - `short Year` - the year.
  - `short Days` - the number of days since the beginning of the year.
- **Output:** None
- **Description:** Converts the given number of days into a date (day/month) within the specified year and prints it.

```cpp
void DateFromDays(short Year , short Days) {
	short month=1;
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

	std::cout << Days << '/' << month << "/" << Year<<'\n';
}
```
### 37. `Date AddDaysToDate(Date sDate, short Days)`
- **Input:** 
  - `Date sDate` - the starting date.
  - `short Days` - the number of days to add to the starting date.
- **Output:** `Date` - the resulting date after adding the specified number of days.
- **Description:** Adds a specified number of days to the starting date, taking into account the number of days in each year and month, and returns the new date.

```cpp
Date AddDaysToDate(Date sDate, short Days) {
    short currentYearCounter = sDate.year;
    short days = Days + HowManyDaysSinceStartOfTheYear(sDate.year, sDate.month, sDate.day);
    while (true)
    {
        short daysInYear = NumberOfDaysInYear(currentYearCounter);
        if (days > daysInYear) {
            days -= daysInYear;
            currentYearCounter++;
        }
        else
        {
            sDate = DateFromDays(currentYearCounter, days);
            break;
        }
    }
    return sDate;
}
```
### 38. `Date ReadDate()`
- **Input:** None
- **Output:** `Date` - the date object containing the year, month, and day entered by the user.
- **Description:** Reads the year, month, and day from the user and returns a `Date` object representing that date.

```cpp
Date ReadDate() {
    Date date = { 0 };
    date.year = ReadYear();
    date.month = ReadMonth();
    date.day = ReadDay();
    return date;
}
```
### 39. `void PrintDate(Date date)`
- **Input:** 
  - `Date date` - the date to be printed.
- **Output:** None
- **Description:** Prints the specified date in the format "day/month/year".

```cpp
void PrintDate(Date date) {
    std::cout << date.day << "/" << date.month << "/" << date.year << "\\n";
}
```
### 40. `void PrintAddDaysToDate()`
- **Input:** None
- **Output:** None
- **Description:** Reads a date and a number of days from the user, adds the specified number of days to the date, and prints the resulting date.

```cpp
void PrintAddDaysToDate() {
    Date readDate = ReadDate();
    short days = ReadDay();
    Date date = AddDaysToDate(readDate, days);
    PrintDate(date);
}
```
### 41. `bool DateOneLessThanDateTwo(Date sDateOne, Date sDateTwo)`
- **Input:** 
  - `Date sDateOne` - the first date to compare.
  - `Date sDateTwo` - the second date to compare.
- **Output:** `bool` - returns `true` if the first date is less than the second date, otherwise returns `false`.
- **Description:** Compares two dates and determines if the first date is earlier than the second date based on year, month, and day.

```cpp
bool DateOneLessThanDateTwo(Date sDateOne, Date sDateTwo){
	if (sDateOne.year < sDateTwo.year)return true;
	if (sDateOne.year == sDateTwo.year) {
		if (sDateOne.month < sDateTwo.month) {
			return true;
		}
		if (sDateOne.month == sDateTwo.month) {
			if (sDateOne.day < sDateTwo.day) {
				return true;
			}
		}
		
	}
	return false;
}

}
```
### 44. `void PrintDateLess()`
- **Input:** None
- **Output:** None
- **Description:** Reads two dates from the user, compares them, and prints whether the first date is less than the second date.

```cpp
void PrintDateLess() {
    Date dateOne = ReadDate();
    Date dateTwo = ReadDate();

    if (DateOneLessThanDateTwo(dateOne, dateTwo)) {
        PrintDate(dateOne);
        std::cout << " Less Than ";
        PrintDate(dateTwo);
    }
    else {
        PrintDate(dateOne);
        std::cout << " Not Less Than ";
        PrintDate(dateTwo);
    }
}
```
### 45. `bool DateEqualDateTwo(Date sDateOne, Date sDateTwo)`
- **Input:** 
  - `Date sDateOne` - the first date to compare.
  - `Date sDateTwo` - the second date to compare.
- **Output:** `bool` - returns `true` if both dates are equal, otherwise returns `false`.
- **Description:** Compares two dates and determines if they are the same based on year, month, and day.

```cpp
bool DateEqualDateTwo(Date sDateOne, Date sDateTwo) {
    return (sDateOne.year == sDateTwo.year) && (sDateOne.month == sDateTwo.month) && (sDateOne.day == sDateTwo.day);
}
```
### 46. `bool IsLastDayInMonth(Date sDate)`
- **Input:** 
  - `Date sDate` - the date to check.
- **Output:** `bool` - returns `true` if the date is the last day of the month, otherwise returns `false`.
- **Description:** Checks if the given date is the last day of the month based on the number of days in that month.

```cpp
bool IsLastDayInMonth(Date sDate) {
    return sDate.day == NumberOfDaysInMonth(sDate.month, sDate.year);
}
bool IsLastMonthInYear(Date sDate) {
	return sDate.month == 12;
}
```
### 47. `Date AddOneDayToDate(Date sDate)`
- **Input:** 
  - `Date sDate` - the date to add one day to.
- **Output:** `Date` - returns the new date with one day added.
- **Description:** Adds one day to the given date, adjusting the month and year if the current day is the last day of the month or the last day of the year.

```cpp
Date AddOneDayToDate(Date sDate) {
    Date date = {0};
    if (IsLastDayInMonth(sDate) && IsLastMonthInYear(sDate)) {
        date.year = ++sDate.year;
        date.month = 1;
        date.day = 1;
        return date;
    }
    if (IsLastDayInMonth(sDate)) {
        date.year = sDate.year;
        date.month = ++sDate.month;
        date.day = 1;
        return date;
    }
    date.year = sDate.year;
    date.month = sDate.month;
    date.day = ++sDate.day;
    return date;
}
```
### 49. `short DiffInDate(Date sDateOne, Date sDateTwo)`
- **Input:** 
  - `Date sDateOne` - the first date.
  - `Date sDateTwo` - the second date.
- **Output:** `short` - returns the difference in days between the two dates.
- **Description:** Calculates the number of days between two dates by iteratively adding one day to the first date until it equals the second date.

```cpp
short DiffInDate(Date sDateOne, Date sDateTwo) {
    int counter = 0;
    while (!DateEqualDateTwo(sDateOne, sDateTwo)) {
        sDateOne = AddOneDayToDate(sDateOne);
        counter++;
    }
    return counter;
}
```