//============================================================================
// Name        : lab2.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<fstream>
#include<sstream>
#include<string>
#define max 100
using namespace std;
class student
{
	string name,usn,branch,buffer;
	int sem;
	fstream fp;
public:
	void read()
	{
	cout<<"enter name";
	cin>>name;
	cout<<"enter usn";
	cin>>usn;
	cout<<"enter branch";
    cin>>branch;
	cout<<"enter sem";
	cin>>sem;
}
void pack()
{
	string sem1,temp;
	stringstream out;
	out<<sem;
			sem1=out.str();
				temp.erase();
	temp=usn+'|'+branch+'|'+name+'|'+sem1;
	for(int i=temp.size();i<100;i++)
			temp+='|';
					buffer+=temp;

}
void write()
{
	fstream fp;
	fp.open("data.txt",ios::out|ios::app);
	fp<<buffer;
	fp.close();
}
};
int main()
{
int choice;
student s;
cout<<"enter ur choice";
cout<<"1.insert,2.delete,3.modify";
cin>>choice;
switch(choice)
{
case 1:s.read();
       s.pack();
       s.write();
        break;
}
}

