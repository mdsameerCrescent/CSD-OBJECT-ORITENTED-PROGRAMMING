#include <iostream>
using namespace std;

class Phone{
	string ModelName;
	string ReleaseYear;
	string CompanyName;
	
	public:
		Phone(string mName,string rYear,string cName){
			ModelName = mName;
			ReleaseYear = rYear;
			CompanyName = cName;
			cout << "Phone object created with model: " << ModelName << ", released in: " << ReleaseYear << ", by: " << CompanyName << endl;	
		}
		
		~Phone(){
			cout<<" "<<endl;
			cout<<"Destructor Called For The Model "<< ModelName <<". The Object Is Being Destroyed!"<<endl;
		}
		
		void displayInfo(){
			cout<<" "<<endl;
			cout<<"ModelName: "<<ModelName<<endl;
			cout<<"ReleaseYear: "<<ReleaseYear<<endl;
			cout<<"CompanyName: "<<CompanyName<<endl;
			cout<<" "<<endl;
		}
};

int main(){
	cout<<"Object Being Created...."<<endl;
	Phone Phone("iPhone 16e","2025","Apple,inc");
	Phone.displayInfo();
	cout<<"The Program is Closing!";
	return 0;
}
