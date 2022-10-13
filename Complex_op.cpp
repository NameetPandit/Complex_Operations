#include<iostream>
using namespace std;

class Complex {

private:
	int real1,img1,real2,img2;
public:
	void getdata()
	{
		cout<<"Enter the value of first real element:";
		cin>>real1;
		cout<<"Enter the value of first imaginary element:";
		cin>>img1;
		cout<<"Enter the value of second real element:";
		cin>>real2;
		cout<<"Enter the value of second imaginary element:";
		cin>>img2;
	}
	void add() {
	
	int sum = (real1+real2+img1+img2);
	cout<<sum<< "+" <<"i";
}
	void subtract() {
		int difference= (real2-real1) + (img2-img1);
		cout<<difference<<"+"<<"i";
	}
	void multiply() {
		int real_product = real1*real2 + img1*img2*-1;
		int img_product = real1*img1 + img1*real2;
		cout<< real_product + img_product<<"+"<<"i";
	}
	
	};
int main()
{
	Complex complex;
	int choice;
	cout<<"1. Press 1 for addition";
	cout<<"2. Press 2 for subtraction";
	cout<<"3. Press 3 for multiplication";
	cout<<"4. Exit ";
	cin>>choice;
	
	switch(choice)
	{
		case 1:
		
			complex.getdata();
			complex.add();
			break;
		case 2:
			complex.getdata();
			complex.subtract();
			break;
		case 3:
			complex.getdata();
			complex.multiply();
			break;
		case 4:
			cout<<"You have exited the process";
		}
	
	return 0;
			
	}

