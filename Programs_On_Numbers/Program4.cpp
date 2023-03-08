// Accept number from user and print that number of * on screen

#include <iostream>

using namespace std;

class Numbers 
{
	public:
		int Value;

	Numbers()
	{
		Value = 0;
	}

	void Accept()
	{
		cout<<"Enter the Number :\n";
		cin>>Value;
	}

	void Display()
	{
		int iCnt = 0;

		for(iCnt = 1; iCnt <= Value; iCnt++)
		{
			cout<<"*\t";
		}
		cout<<"\n";
	}
};



int main()
{

	Numbers obj;

	obj.Accept();

	obj.Display();

	return 0;
}