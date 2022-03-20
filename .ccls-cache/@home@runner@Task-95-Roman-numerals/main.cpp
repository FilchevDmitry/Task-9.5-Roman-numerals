#include <iostream>
using namespace std;
int main() 
{
  cout << "Roman numerals" << endl;
  int num, num1, num2, num3, num4;
  cout << "Enter a number from 0 to 3999 : ";
  cin >> num;
  while (num < 0 || num > 3999) 
	{
    cout << "Error" << endl;
    cout << "Enter a number from 0 to 3999 : ";
    cin >> num;
  }
  num1 = (num / 1000) % 10;
  num2 = (num / 100) % 10;
  num3 = (num / 10) % 10;
  num4 = num % 10;
  for (int i = 0; i <= num1 + 1; i++) 
		{
    	if (num1 == 0)
        break;
    	else
      	cout << "M";
        --num1;
    }
  if (num2 != 0) 
	{
  	if (num2 == 4)
      	cout << "CD";
    else if (num2 == 5)
        cout << "D";
    else if (num2 == 9)
        cout << "CM";
    else if (num2 > 5) 
		{
      cout << "D";
      for (int j = 6; j <= num2; ++j) 
			{
				 cout << "C";
      }
    } 
		else 
		{
    	for (int j = 0; j < num2; j++) 
			{
        cout << "C";
      }
    }
  }
  if (num3 != 0) 
	{
  	if (num3 == 4)
      cout << "XL";
    else if (num3 == 5)
      cout << "L";
    else if (num3 == 9)
      cout << "XC";
    else if (num3 > 5) 
		{
      cout << "L";
      for (int j = 6; j <= num3; ++j) 
			{
        cout << "X";
      }
    } 
		else 
		{
    	for (int j = 0; j < num3; j++) 
			{
        cout << "X";
      }
    }
  }
  if (num4 != 0) 
	{
  	if (num4 == 4)
      cout << "IV";
    else if (num4 == 5)
      cout << "V";
    else if (num4 == 9)
      cout << "IX";
    else if (num4 > 5) 
		{
      cout << "V";
      for (int j = 6; j <= num4; ++j) 
			{
        cout << "I";
      }
    } 
		else 
		{
      for (int j = 0; j < num4; j++) 
			{
        cout << "I";
			}
		}
  }
}
