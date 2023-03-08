// Accept number from user and check whether is Even or odd

#include <iostream>

using namespace std;

class Numbers 
{
	public:
		int Value;
		bool flag;

	Numbers()
	{
		Value = 0;
		flag = false;
	}

	void Accept()
	{
		cout<<"Enter the Number :\n";
		cin>>Value;
	}

	void CheckEven()
	{
		if(Value % 2 == 0)
		{
			flag = true;
		}
		else
		{
			flag = false;
		}
	}

	void Display()
	{
		if(flag == true)
		{
			cout<<Value<<" is Even Number"<<"\n";
		}
		else
		{
			cout<<Value<<" is odd Number"<<"\n";
		}
	}
};



int main()
{

	Numbers obj;

	obj.Accept();
	obj.CheckEven();
	obj.Display();



	return 0;
}
