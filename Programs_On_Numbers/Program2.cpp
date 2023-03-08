// Accept one number from user and check whether is divisible by 5 or not

#include <iostream>

using namespace std;

class Numbers
{
	public:
		int Value;
		bool Flag;

		Numbers()
		{
			Value = 0;
			Flag = false;
		}
		
	void Accept()
	{
		cout<<"Enter the Number :\n";
		cin>>Value;
	}


	void Check()
	{
		if(Value % 5 == 0)
		{
			Flag = true;
		}
		else
		{
			Flag = false;
		}
	}

	void Display()
	{
		if(Flag == true)
		{
			cout<<Value<<" is divisible by 5"<<"\n";
		}
		else
		{
			cout<<Value<<" is Not divisible by 5"<<"\n";
		}
	}	
};


int main()
{


	Numbers obj;

	obj.Accept();

	obj.Check();

	obj.Display();



	return 0;
}