#include<list>
#include<iostream>
using namespace std;

int main()
{
	list<int> x;
	x.push_back(2);	//->ush to list
	x.push_back(4);
	x.push_back(20); //->pop out
	x.pop_back();
	list<int>::iterator i;
	for(i=x.begin();i!=x.end();i++)
	{
		cout<<"\n"<<*i;
	}
	return 0;
}
