
#include <iostream>
#include <string>
#include <cmath>
using namespace std;
void print()
{
	cout << "Muhammed Aisa";
}
string printName(string name)
{
	return name;
}
void halfNumber()
{
	int number;
	cout << "Enter Number: ";
	cin >> number;
	cout << "Half Of " << number << " = " << number / 2 << endl;
}
void sumThreeNumbers()
{
	int num1, num2, num3;
	cout << "Enter Number1: ";
	cin >> num1;
	cout << "Enter Number2: ";
	cin >> num2;
	cout << "Enter Number3: ";
	cin >> num3;

	cout << "Result Is = " << num1 + num2 + num3;
}
void averageOfThree()
{
	int num1, num2, num3;
	cout << "Enter Number1: ";
	cin >> num1;
	cout << "Enter Number2: ";
	cin >> num2;
	cout << "Enter Number3: ";
	cin >> num3;

	cout << "The Average Is: " << (num1 + num2 + num3) / 3;
}
void swapNumbers(short &num1, short &num2)
{
	short temp;

	temp = num1;
	num1 = num2;
	num2 = temp;

	cout << "\n\nAfter swaping \n\n";
	cout << "number 1 is : " << num1 << endl;
	cout << "Number 2 is : " << num2 << endl;
}
void rectangleArea()
{
	short a, b;
	cout << "Enter a: ";
	cin >> a;
	cout << "Enter b: ";
	cin >> b;

	cout << "Rectangle Area = " << a * b << endl;
}
void triangleArea()
{
	short a, h;
	cout << "Enter a: ";
	cin >> a;
	cout << "Enter h: ";
	cin >> h;

	cout << "Triangle Area = " << a / 2 * h << endl;
}
void loanInstallment()
{
	int loanAmount, monthleyPayment;

	cout << "Enter the Loan Amount : ";
	cin >> loanAmount;
	cout << "Enter Monthly Payment: ";
	cin >> monthleyPayment;

	cout << "You need : ( " << loanAmount / monthleyPayment << " Months ) To finish Your Loan installments." << endl;
}
void monthlyLoanInstaalment()
{
	int loanAmount;
	short months;

	cout << "Enter The Loan Amount : ";
	cin >> loanAmount;
	cout << "Enter monnths: ";
	cin >> months;

	cout << "You will Pay ( " << loanAmount / months << " ) per month" << endl;
}
const float PI = 3.14;
void rectAreaThroughDiagonal()
{
	short a, d;

	cout << "Enter a; ";
	cin >> a;
	cout << "Enter d: ";
	cin >> d;
	int area;

	area = a * sqrt(pow(d, 2) - pow(a, 2));
	cout << area;
}
void circleArea()
{

	short r;
	float area;
	cout << " Enter r : ";
	cin >> r;
	area = PI * pow(r, 2);
	cout << area;
}
void circleAreaThroughDiameter()
{
	float d, area;
	cout << " Enter D: ";
	cin >> d;

	area = PI * pow(d, 2) / 4;

	cout << area;
}
void circleAreaThroughSquare()
{
	float a, area;
	cout << "Enter A : ";
	cin >> a;

	area = PI * pow(a, 2) / 4;
	cout << area;
}
void circleAreaAlongTheCircumference()
{
	float l, area;
	cout << "Enter L: ";
	cin >> l;

	area = pow(l, 2) / (4 * PI);
	cout << area;
}
void circleAreaInscribedInAnIsoscelesTriangle()
{
	float a, b, area;
	cout << "Enter A: ";
	cin >> a;
	cout << "Enter B: ";
	cin >> b;

	area = PI * (pow(b, 2) / 4) * ((2 * a - b) / (2 * a + b));
	cout << area;
}
void circleAreaCircleDescribedAroundAnArbitraryTriangle()
{
	float a, b, c, p, t, area;

	cout << "Enter A: ";
	cin >> a;
	cout << "Enter B: ";
	cin >> b;
	cout << "Enter C: ";
	cin >> c;

	p = (a + b + c) / 2;
	t = (a * b * c) / (4 * sqrt(p * (p - a) * (p - b) * (p - c)));
	area = PI * pow(t, 2);

	cout << area;
}
void power()
{
	int a, b, c;
	cout << "Enter A: ";
	cin >> a;

	cout << pow(a, 2) << endl
		 << pow(a, 3) << endl
		 << pow(a, 4) << endl;
}
void powerOfN()
{
	short number, n;
	cout << "Enter Number: ";
	cin >> number;
	cout << "Ente The Poewr: ";
	cin >> n;
	cout << pow(number, n);
}
double taskDuration(short numOfDays, short numOfhours, short numOfmins, short numOfsec)
{

	double totalSeconds;
	totalSeconds = (numOfDays * pow(60, 2) * 24) + (numOfhours * pow(60, 2)) + (numOfmins * 60) + numOfsec;

	return totalSeconds;
}
void secondToDaysHoursMinutesSeconds(short days, short hours, short minutes)
{

	int secondsPerDay, secondsPerHour, secondsPerMinute, reminder, seconds;

	cout << "Enter Working Seconds: ";
	cin >> seconds;

	secondsPerDay = 24 * pow(60, 2);
	secondsPerHour = pow(60, 2);
	secondsPerMinute = 60;

	days = seconds / secondsPerDay;
	reminder = seconds % secondsPerDay;
	hours = reminder / secondsPerHour;
	reminder = reminder % secondsPerHour;
	minutes = reminder / secondsPerMinute;
	reminder = reminder % secondsPerMinute;

	seconds = reminder;

	cout << days << ":" << hours << ":" << minutes << ":" << seconds;
}

// struct stOwner {
//	string fullName = "Not defined";
//	string phone = "Not defined";
// };
// struct Car {
//	string name = "not defiend";
//	string brand = "not defined";
//	int model = NULL;
//	stOwner owner;
// };

// STRUCTS MUST ARRANGE FROM UP TO DOWN TO MAAKE THE COMPILER REACH EACH ONE IF THEY ARE NESTED
enum enGender : unsigned short
{
	no = 0,
	male = 1,
	female = 2
};
enum enMarried : unsigned short
{
	non = 0,
	single = 1,
	married = 2
};
struct stSalary
{
	int monthlySalary = 0;
	int yearlySalary = 0;
};
struct stAdress
{
	string country;
	string city;
	string BOBox;
};
struct stContact
{
	string phone;
	string instagram;
	string twetter;
};
struct stInfo
{
	string name;
	short age = 0;
	stAdress adress;
	stContact contact;
	stSalary salary;
	enGender Gender = enGender::no;		// enum
	enMarried Married = enMarried::non; // enum
};
struct stUser
{
	stInfo information;
};
void displayInfo()
{
	stUser muhammed; // nested structs

	muhammed.information.name = "Muhammed Aissa";
	muhammed.information.age = 36;
	muhammed.information.contact.phone = "0505790454";
	muhammed.information.contact.instagram = "muha_insta";
	muhammed.information.adress.country = "Saudi Arabia";
	muhammed.information.adress.city = "Abha";
	muhammed.information.salary.monthlySalary = 5000;
	muhammed.information.salary.yearlySalary = muhammed.information.salary.monthlySalary * 12;
	muhammed.information.Gender = enGender::male;
	muhammed.information.Married = enMarried::married;

	cout << "******************************************\n\n";
	cout << "Name: " << muhammed.information.name << endl
		 << "Age: " << muhammed.information.age << endl;
	cout << "Coutry: " << muhammed.information.adress.country << endl
		 << "City: " << muhammed.information.adress.city << endl;
	cout << "Phone: " << muhammed.information.contact.phone << endl
		 << "Gender: " << muhammed.information.Gender << endl
		 << "Married: " << muhammed.information.Married << endl;
	cout << "Monthly Salary Is: " << muhammed.information.salary.monthlySalary << endl
		 << "Yearly Salary Is: " << muhammed.information.salary.yearlySalary << endl;
	cout << "\n\n******************************************\n\n";
}

int main()
{
	// print();
	// rectAreaThroughDiagonal();
	// circleArea();
	// circleAreaThroughDiameter();
	// circleAreaThroughSquare()
	// circleAreaAlongTheCircumference();
	// circleAreaInscribedInAnIsoscelesTriangle();
	// circleAreaCircleDescribedAroundAnArbitraryTriangle();
	// power();
	// powerOfN();
	// cout << taskDuration(2,5,35,45);
	// secondToDaysHoursMinutesSeconds();
	// halfNumber();
	// sumThreeNumbers();
	// averageOfThree();
	// swapNumbers();
	// rectangleArea();
	// triangleArea();
	// loanInstallment();
	monthlyLoanInstaalment();
}
