#include<iostream>
#include<string.h>
using namespace std;
class student;
class employee{
	int id,age;
	char firstname[6];
	char lastname[10];
	char address[7];
	public:
		void getdata(){
			cout<<"employee details"<<endl;
			cout<<"enter id"<<endl;
			cin>>id;
			cout<<"enter age"<<endl;
			cin>>age;
			cout<<"enter first name"<<endl;
			cin>>firstname;
            cout<<"enter last name"<<endl;
			cin>>lastname;
			cout<<"enter the address"<<endl;
			cin>>address;
		}
		friend void check(employee,student);
		
};
class student{
	char name[6];
	char address1[7];
	char type[10] ;
	char course[20];
	public:
		void getdata1(){
		cout<<"student detaikls"<<endl;
		cout<<"enter name"<<endl;
		cin>>name;
		cout<<"enter address"<<endl;
		cin>>address1;
		cout<<"enter type"<<endl;
		cin>>type;
		cout<<"enter the course name"<<endl;
		cin>>course;
	    }
	    friend void check(employee,student);
						
};

void check(employee em1 , student st1){
	cout<<"function called";
	cout<<em1.address<<endl;
	cout<<st1.address1<<endl;
	cout<<em1.firstname<<endl;
	cout<<st1.name<<endl;
	if(em1.address == st1.address1){
	
		cout<<"NOT VALID"<<endl;
		cout<<"if executed"<<endl;
	}
	else if(em1.firstname == st1.name){
		cout<<"NOT 2 VALID"<<endl;
		cout<<"if executed"<<endl;
    }
    else{
    	cout<<"exit";
	}
}
int main(){
	employee e1;
	student s1;
	e1.getdata();
	s1.getdata1();
	check(e1,s1);	
}



