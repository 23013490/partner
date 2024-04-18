
#include <iostream>
using namespace std;

int main()
{
	
	
	
	int number1 =18;
	int number2 =20;
	int  age=0;
	int age2 =0;
	
	cout<<"choose the first one who is less than 18"<<endl;
	
	
	cin>> age;
	
	cout<<"choose the second one who is older than 20 "<<endl; 
	cin>>age2;
	
	
	if(age <= number1){
	cout << " she  is a  girl"<< endl;
	cout<<"she is cute" <<endl;
	cout <<"she is less than 18 years  old" <<endl;
	}
	else if(age2 >= number2){
	
		cout<<" he is an adult "<< endl;
		cout<<age <<"  he is married"<<endl;
		
		} else {
		cout<<"  you want a gay"<<endl;
		
		}
	
	
	return 0;
}
