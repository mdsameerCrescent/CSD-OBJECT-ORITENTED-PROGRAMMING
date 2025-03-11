#include <iostream>
using namespace std;

class iPhone{
	public:
		void Phone(){
			cout<<"Can Make Call..."<<endl;
			
		}
		
		void iMessage(){
			cout<<"Can Send Message Through Internet...."<<endl;	
		}
		
		void Internet(){
			cout<<"Can Surf Through Internet..."<<endl;
		}
		
		void iPod(){
			cout<<"Can Listen to 1000s of Music...."<<endl;
		}
	};
		
class iPhone12 : public iPhone {
public:
   	void useFaceID() {
	    cout << "Using Face ID for authentication..." << endl;
			
	}
};

class iPhone13 : public iPhone12 {
public:
    void use5G() {
        cout << "Using 5G network for fast internet speed..." << endl;
    }
};

int main() {
    iPhone13 myiPhone13;
    myiPhone13.Phone();  
    myiPhone13.iMessage(); 
    myiPhone13.useFaceID();  
    myiPhone13.use5G();      
    return 0;
}

