#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	double discriminant, eqn, a, b, c, root1, root2;
	cout<<" enter the value of a, b and c respectively";
	cin>>a;
	cin>>b;
	cin>>c;
	discriminant= b*b-4*a*c;
	if(discriminant<0)
	{
	   cout<<"imaginary root";
}
	else if(discriminant==0)
	{
		eqn= (-b/(2*a));
	cout<<eqn;
	}
	else(discriminant>0);
	{
		  root1= (-b+sqrt(discriminant))/(2*a);
	root2= (-b-sqrt(discriminant))/(2*a);
	cout<<"root1="<<root1<<endl;
	cout<<"root2="<<root2<<endl;
	}
	return 0;
 	
	
}

