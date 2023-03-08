// Accept one number from user if number is less than 10 then print "Hello" otherwise print "Demo".

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
		if(Value < 10)
		{
			cout<<"Hello"<<"\n";
		}
		else
		{
			cout<<"Demo"<<"\n";
		}
	}
};



int main()
{
	Numbers obj;

	obj.Accept();
	obj.Display();


	return 0;
}