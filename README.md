# Course-8
# Calendar Program

This program provides functionalities to calculate and display various time-related information for a given year and month, including leap year status, number of days, hours, minutes, and seconds. It also allows users to input a date and retrieve the corresponding day of the week.

## Functions Overview

### 1. `int ReadNumber()`
- **Input:** None
- **Output:** Returns an integer that the user inputs.
- **Description:** Prompts the user to enter a number and returns that number as an integer.

### 2. `bool LeapYear(short Year)`
- **Input:** `short Year` - the year to check for leap year status.
- **Output:** Returns `true` if the year is a leap year, otherwise `false`.
- **Description:** Determines if a given year is a leap year using the standard leap year rules.

### 3. `bool LeapYearShortVersion(short Year)`
- **Input:** `short Year` - the year to check for leap year status.
- **Output:** Returns `true` if the year is a leap year, otherwise `false`.
- **Description:** A more compact version of the leap year check using the ternary operator.

### 4. `bool LeapYearSimplifiedVersion(short Year)`
- **Input:** `short Year` - the year to check for leap year status.
- **Output:** Returns `true` if the year is a leap year, otherwise `false`.
- **Description:** A simplified approach to determine if a year is a leap year using logical OR.

### 5. `int NumberOfDaysInYear(short Year)`
- **Input:** `short Year` - the year to calculate the number of days for.
- **Output:** Returns the total number of days in the specified year (365 or 366).
- **Description:** Returns the number of days in a year, accounting for leap years.

### 6. `int NumberOfHoursInYear(short Year)`
- **Input:** `short Year` - the year to calculate the number of hours for.
- **Output:** Returns the total number of hours in the specified year.
- **Description:** Calculates the number of hours in a year based on the number of days.

### 7. `int NumberOfMinutesInYear(short Year)`
- **Input:** `short Year` - the year to calculate the number of minutes for.
- **Output:** Returns the total number of minutes in the specified year.
- **Description:** Calculates the number of minutes in a year based on the number of hours.

### 8. `int NumberOfSecondsInYear(short Year)`
- **Input:** `short Year` - the year to calculate the number of seconds for.
- **Output:** Returns the total number of seconds in the specified year.
- **Description:** Calculates the number of seconds in a year based on the number of minutes.

### 9. `void PrintYearTimeCard()`
- **Input:** None
- **Output:** Displays the number of days, hours, minutes, and seconds in a specified year.
- **Description:** Prompts the user for a year and prints a time card with detailed time information.

### 10. `std::string NumberToText(int Number)`
- **Input:** `int Number` - the number to convert to text.
- **Output:** Returns the English word representation of the number.
- **Description:** Converts numbers into their corresponding textual representation.

### 11. `short NumberOfDaysInMonth(short Month, short Year)`
- **Input:** 
  - `short Month` - the month to calculate the number of days for.
  - `short Year` - the year to account for leap years.
- **Output:** Returns the number of days in the specified month and year.
- **Description:** Calculates the number of days in a month, considering leap years for February.

### 12. `short NumberOfHoursInMonth(short Month, short Year)`
- **Input:** 
  - `short Month` - the month to calculate the number of hours for.
  - `short Year` - the year to account for leap years.
- **Output:** Returns the number of hours in the specified month and year.
- **Description:** Calculates the number of hours in a month based on the number of days.

### 13. `int NumberOfMinutesInMonth(short Month, short Year)`
- **Input:** 
  - `short Month` - the month to calculate the number of minutes for.
  - `short Year` - the year to account for leap years.
- **Output:** Returns the number of minutes in the specified month and year.
- **Description:** Calculates the number of minutes in a month based on the number of hours.

### 14. `int NumberOfSecondsInMonth(short Month, short Year)`
- **Input:** 
  - `short Month` - the month to calculate the number of seconds for.
  - `short Year` - the year to account for leap years.
- **Output:** Returns the number of seconds in the specified month and year.
- **Description:** Calculates the number of seconds in a month based on the number of minutes.

### 15. `void PrintMonthTimeCard()`
- **Input:** None
- **Output:** Displays the number of days, hours, minutes, and seconds in a specified month.
- **Description:** Prompts the user for a year and month, then prints a time card with detailed time information.

### 16. `short DayPostionOfTheWeek(short Year, short Month, short Day)`
- **Input:** 
  - `short Year` - the year of the date.
  - `short Month` - the month of the date.
  - `short Day` - the day of the date.
- **Output:** Returns the position of the day in the week (0 for Sunday, 1 for Monday, etc.).
- **Description:** Calculates the position of the day of the week for a given date.

### 17. `std::string DayNameOfTheWeek(short DayPos)`
- **Input:** `short DayPos` - the position of the day in the week.
- **Output:** Returns the name of the day of the week as a string.
- **Description:** Converts the numeric day position into its corresponding day name.

### 18. `short ReadYear()`
- **Input:** None
- **Output:** Returns a short representing the year input by the user.
- **Description:** Prompts the user to enter a year and returns that year.

### 19. `short ReadMonth()`
- **Input:** None
- **Output:** Returns a short representing the month input by the user.
- **Description:** Prompts the user to enter a month and returns that month.

### 20. `short ReadDay()`
- **Input:** None
- **Output:** Returns a short representing the day input by the user.
- **Description:** Prompts the user to enter a day and returns that day.

### 21. `void PrintDateCard()`
- **Input:** None
- **Output:** Displays the date, its day order, and the name of the day.
- **Description:** Prompts the user for a date and prints the corresponding details.

### 22. `std::string MonthName(short Month, bool ShortVersion = true)`
- **Input:** 
  - `short Month` - the month number (1-12).
  - `bool ShortVersion` - indicates whether to return the short version of the month name.
- **Output:** Returns the name of the month as a string.
- **Description:** Retrieves the full or short name of the month based on the input.

### 23. `std::string DayName(short Day, bool ShortVersion = true)`
- **Input:** 
  - `short Day` - the day position (0-6).
  - `bool ShortVersion` - indicates whether to return the short version of the day name.
- **Output:** Returns the name of the day as a string.
- **Description:** Retrieves the full or short name of the day based on the input.

### 24. `void PrintDashLineWithMonthNameInMiddle(std::string MonthName, short LineLength = 40)`
- **Input:** 
  - `std::string MonthName` - the name of the month to display.
  - `short LineLength` - the total length of the line.
- **Output:** None
- **Description:** Prints a line of dashes with the month name centered in the middle.

### 25. `void PrintDashLine(short LineLength = 40)`
- **Input:** 
  - `short LineLength` - the total length of the line.
- **Output:** None
- **Description:** Prints a horizontal line of dashes of specified length.

### 26. `void PrintClanderHeader()`
- **Input:** None
- **Output:** None
- **Description:** Prints the header of the calendar with the names of the days of the week.

### 27. `void GenerateCalnderDays(short* Days, short Year, short Month, short Day)`
- **Input:** 
  - `short* Days` - an array to store the days of the month.
  - `short Year` - the year of the month.
  - `short Month` - the month to generate days for.
  - `short Day` - the starting day for the month.
- **Output:** None
- **Description:** Fills the provided array with the days of the specified month and year.

### 28. `void PrintCalnderDays(short Year, short Month)`
- **Input:** 
  - `short Year` - the year of the month.
  - `short Month` - the month to print.
- **Output:** None
- **Description:** Prints the calendar for the specified month and year.

### Example Usage

1. To check if a year is a leap year:
   ```cpp
   short year = ReadYear();
   bool isLeap = LeapYear(year);
