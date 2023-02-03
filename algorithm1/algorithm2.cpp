#include <iostream>
#include <string>
using namespace std;
/*********Constants********/
const short CAPITAL_START = 65;
const short CAPITAL_END = 90;
const short SMALL_START = 97;
const short SMALL_END = 122;
/*******My Enums*********/
enum enWeekDays
{
    sun = 1,
    mon = 2,
    tues = 3,
    wed = 4,
    thres = 5,
    fri = 6,
    sat = 7,
};

/*********My Functions**********/
int showWeekDaysMenue()
{
    int day;
    cout << "\n************************************************\n";
    cout << "\t######### WEEK DAYS ##########\n";
    cout << "************************************************\n\n";
    cout << "Enter Day Number: \n";
    cout << "- Sunday = (1) " << endl;
    cout << "- Monday = (2) " << endl;
    cout << "- Tuesday = (3) " << endl;
    cout << "- Wedensday = (4) " << endl;
    cout << "- Thuresday = (5) " << endl;
    cout << "- Friday = (6) " << endl;
    cout << "- Satuerday = (7) " << endl;
    cout << "Please Enter The Number Of Day: ";
    cin >> day;

    return day;
}
enWeekDays setWeekDays(int day)
{
    enWeekDays weekDay = enWeekDays(day);
    return weekDay;
}
string getWeekDay(enWeekDays days)
{
    switch (days)
    {
    case enWeekDays::sun:
        return "Sunday";
        break;
    case enWeekDays::mon:
        return "Monday";
        break;
    case enWeekDays::tues:
        return "Tuesday";
        break;
    case enWeekDays::wed:
        return "Wedensday";
        break;
    case enWeekDays::thres:
        return "Thuresday";
        break;
    case enWeekDays::fri:
        return "Friday";
        break;
    case enWeekDays::sat:
        return "Saturday";
        break;
    default:
        return "You Have Entered A Wrong Day Numbeer";
        break;
    }
}
void printDayOfAweek()
{

    cout << "\t today is ==> " + getWeekDay(setWeekDays(showWeekDaysMenue()));
    cout << "\n**************************************************\n";
} /*******main Function*********/
int askANumberFromUser()
{
    int number = 0;
    do
    {
        cout << "Please Enter A Number: ";
        cin >> number;

    } while (number <= 0);

    return number;
}
void printNumbersFromOneToN(int number)
{
    for (int i = 1; i <= number; i++)
    {
        cout << "number => " << i << endl;
    }
}
void printNumbersFromNToOne(int number)
{
    for (int i = number; i >= 1; i--)
    {
        cout << "Numbers => " << i << endl;
    }
}
void someOddNumbersFromOneToN(int number)
{
    int result = 0;
    for (int i = 1; i <= number; i++)
    {
        if (i % 2 != 0)
        {
            result += i;
            cout << result << endl;
        }
    }
}
void sumEvenNumbers(int number)
{
    int result = 0;
    for (int i = 1; i <= number; i++)
    {
        if (i % 2 == 0)
        {
            result += i;
        }
    }
    cout << result;
}
void factorialNumbersFromOneToN(int number)
{
    unsigned int result = 1;

    for (int i = 1; i <= number; i++)
    {
        result *= i;
        cout << result << endl;
    }
}
void poweOfTwoThreeFour(int number)
{
    cout << number * number << endl
         << number * number * number << endl
         << number * number * number * number << endl;
}
void powerOfM(int number)
{

    unsigned int result = 1;
    int power;
    cout << "Enter The Power: ";
    cin >> power;

    for (int i = 1; i <= power; i++)
    {
        result *= number;
    }
    cout << "(" << number << ") Power Of  (" << power << ") is => " << result << endl;
}
void printLettersFromAToZ()
{
    int small = 97;
    for (short i = 65; i <= 90; i++)
    {

        cout << char(i) << " " << char(small++) << endl;
    }
}
void repeateCapitalLetters()
{
    for (int i = CAPITAL_START; i <= CAPITAL_END; i++)
    {
        for (int j = CAPITAL_START; j <= CAPITAL_END; j++)
        {
            cout << char(i) << char(j) << endl;
        }
    }
}
void numbersTriangle()
{
    for (int i = 1; i <= 10; i++)
    {

        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << "\n";
    }
}
void numbersUpsidDownTriangle()
{
    for (int i = 10; i >= 0; i--)
    {

        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << "\n";
    }
}
void printTriangleStars()
{
    for (int i = 1; i <= 10; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
}
void printUpsideDownTriangleStars()
{
    for (int i = 10; i >= 0; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
}
void lettersOneByOne()
{
    char result;
    for (int i = CAPITAL_START; i <= CAPITAL_END; i++)
    {
        for (int j = CAPITAL_START; j <= i - 1; j++)
        {
            cout << char(j) << " ";
        }

        cout << endl;
    }
}
void numbersUpsideDown()
{
    for (int i = 1; i <= 10; i++)
    {

        for (int j = i; j <= 10; j++)
        {
            cout << j;
        }
        cout << endl;
    }
}
void breakeNumber()
{
    int numbers[10];
    for (int i = 1; i <= 10; i++)
    {
        numbers[i] = askANumberFromUser();
        cout << "You Entered => " << numbers[i] << endl;
        if (numbers[i] == 3)
        {
            break;
        }
        cout << "Hers is Some code..\n*******\n*****" << endl; // if you hit 3 this line will not executed
    }
    cout << "Number 3 Not Allowed See You Later :)" << endl;
}
void findNumberInArray()
{
    int arr[10] = {1, 5, 45, 10, 20, 14, 8, 96, 4, 78};
    int searchFor = 20;
    for (int i = 1; i <= 10; i++)
    {
        cout << "We Are At Itration no: " << i + 1 << endl;
        if (searchFor == arr[i])
        {
            cout << "Number " << searchFor << " Found At Postion: " << i + 1 << endl;
            break;
        }
    }
}

/*********** Main Function *********/
int main()
{
    // printDayOfAweek();
    // printNumbersFromOneToN(askANumberFromUser());
    // printNumbersFromNToOne(askANumberFromUser());
    // someOddNumbersFromOneToN(askANumberFromUser());
    // sumEvenNumbers(askANumberFromUser());
    // factorialNumbersFromOneToN(askANumberFromUser());
    // poweOfTwoThreeFour(askANumberFromUser());
    // powerOfM(askANumberFromUser());
    // printLettersFromAToZ();
    // repeateCapitalLetters();
    // numbersTriangle();
    // numbersUpsidDownTriangle();
    // printTriangleStars();
    // printUpsideDownTriangleStars();
    // lettersOneByOne();
    // numbersUpsideDown();
    // breakeNumber();
    findNumberInArray();
    return 0;
}