#include <iostream>
#include <string>
using namespace std;

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
}
/*******main Function*********/
int main()
{
    printDayOfAweek();
    return 0;
}