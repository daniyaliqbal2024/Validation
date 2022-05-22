#include <iostream>
#include <string>
#include <vector>
using namespace std;

/**
 * Prompt the user until they provide a non-empty that is also not whitespace
 * @param prompt - the message to show the user prompting for input
 * @param error - the error message to show the user when incorrect
 * @return the user's non-blank string
 * @throws IOException
 */
bool iswhitespace(string y)
{
	for (int i=0; i<y.length(); i++)
	{
	 if (!isspace(y[i]))
	 {
	    return false;
	 }

	}
	return true;
}

string getRequiredString(string prompt, string error)
{

	cout << prompt;
	string input;
	getline(cin, input);
    while (iswhitespace(input)== true)
	{
    	cout<<error<<endl;

    	cout<<prompt;
    	getline(cin,input);
	}
	return input;

}
int getIntegerInput(string prompt, string error)
{
	int y = 13;
		int x = 0;
		bool integer;
		string insert;

		while (true)
		{
			cout << prompt;
			getline(cin, insert);

			if (x == 2)
			{
				break;
			}

			integer = false;
			try
			{
				y = std::stoi(insert);
				integer = true;
			}
			catch (...)
			{
			}

			if (!integer)
			{
				cout << error << endl;
			}
			else
			{
				cout << y << endl;
				break;
			}
			x = x + 1;
		}
		return y;
	}

	double getDoubleInput(string prompt, string error)
	{
		int x = 0;
		double y = 3;
		bool isDouble;
		string insert;

		while (true)
		{
			cout << prompt;
			getline(cin, insert);
			if (x == 2)
			{
				break;
			}

			isDouble = false;
			try
			{
				y = std::stod(insert);
				isDouble = true;
			}
			catch (...)
			{

			}

			if (!isDouble)
			{
				cout << error << endl;
			}
			else
			{
				cout << y << endl;
				break;
			}
			x = x + 1;
		}
		return y;
	}

	int getPositiveInteger(string prompt, string error)
	{
		int y =  1000;
		int x = 0;
		bool integer = false;
		string insert;

		while (true)
		{
			cout << prompt;
			getline(cin, insert);

			if (x == 2)
			{
				break;
			}
			try
			{
				y = std::stoi(insert);
				integer = true;
			}
			catch (...)
			{

			}
			if ((integer && y <= 0) || !integer)
			{
				cout << error << endl;
			}
			else
			{
				cout << y << endl;
				break;
			}

			x = x + 1;
		}
		return 1000;
	}

	int getMinimumIntegerInput(string prompt, string error, int min)
	{
		string insert;
		bool integer = false;
		int y = -200;
		int x = 0;
		while (true)
		{
			cout << prompt;
			getline(cin, insert);

			if (x == 2)
			{
				break;
			}
			try
			{
				y = std::stoi(insert);
				integer = true;
			}
			catch (...)
			{

			}
			if ((integer && y < min) || !integer )
			{
				cout << error << endl;
			}
			else
			{
				cout << y << endl;
				break;
			}

			x = x + 1;
		}
		return -273;
	}

	vector<int> getSeveralIntegers(string prompt, string error, int count)
	{
		vector<int> values;
		int y, x = 0;
		bool integer = false;
		string insert;

		while (true)
		{
			if (!getline(cin, insert))
			{
				break;
			}
			cout << prompt;
			integer = false;
			try
			{
				y = std::stoi(insert);
				integer = true;
			}
			catch (...)
			{

			}
			if (!integer)
			{
				cout << error << endl;
			}
			else
			{
				values.push_back(y);
			}
			x = x + 1;
		}
		return values;
	}

