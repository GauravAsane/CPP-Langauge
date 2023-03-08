// Accept two numbers from user and display first number in second number of times.

#include <iostream>

using namespace std;

class Numbers 
{
	public:
		int iValue1;
		int iFreq;

	Numbers()
	{
		iValue1 = 0;
		iFreq = 0;
	}

	void Accept()
	{
		cout<<"Enter the First Number\n";
		cin>>iValue1;

		cout<<"Enter the Second Number\n";
		cin>>iFreq;
	}

	void Display()
	{
		int iCnt = 0;

		if(iFreq < 0)
		{
			cout<<"Enter Positive Frequency Number\n";
			return;
		}

		for(iCnt = 1; iCnt <= iFreq ; iCnt++)
		{
			cout<<iValue1<<"\t";
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