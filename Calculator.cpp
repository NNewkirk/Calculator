#include <iostream>
using namespace std;
/*This is a basic calculator in C++ to accompany the Python version.
  I'm primarily making this to get something up on GitHub to create a C++ repository.*/

//This function is used to output the sum, I used this because if I put the sum after the if function runs then it will print even if an incorrect operation was written
void sum1(double sum)
{
	cout << "Your sum is " << sum << " \n";
}

int main()
{
	cout << "Hello, Welcome to Newkirk's C++ calculator!\n";
	int cont = 1;
	double a, b, sum;
	string operation, foperation;

	while (cont == 1)
		{
		cout << "What operation would you like to do today.\n Division, Multiplication, Addition, Subtraction\n";

		cin >> operation;

		cout << "Input your variable for a:: ";
		cin >> a;
		cout << "Input your variable for b:: ";
		cin >> b;
		//This if function performs whichever operation the user types in
		if (operation._Equal("Addition"))
		{
			sum = a + b;
			cont = 2;
			sum1(sum);
		}
		else if (operation._Equal("Subtraction"))
		{
			sum = a - b;
			cont = 2;
			sum1(sum);
		}
		else if (operation._Equal("Division"))
		{
			sum = a / b;
			cont = 2;
			sum1(sum);
		}
		else if (operation._Equal("Multiplication"))
		{
			sum = a * b;
			cont = 2;
			sum1(sum);
		}
		else
		{
			cout << "Operation did not compute, please try again... \n";
			cont = 1;
		}
		//This prompts the user if they want to continue using the calculator
		if(cont == 2)
		{
			cout << "Would you like to do another operation, type 1 for yes and 0 for no:: \n";
			cin >> cont;

			while (cont != 1 && cont != 0)
			{
				cout << "Would you like to do another operation \ntype 1 for yes and 0 for no:: \n";
				cin >> cont;

				if (cont != 1 && cont != 0)
				{
					cout << "Did not compute, please try again:: \n";
				}
			}

		}

		}
}