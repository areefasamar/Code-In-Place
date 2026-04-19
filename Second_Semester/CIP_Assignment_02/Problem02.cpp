#include<iostream>
using namespace std;
class Clock{
	private:
	int hours;
	int minutes;
	
	public:
		Clock(int h, int m){
			if ((h>=0 && h<=23) && (m>=0 && m<=59)){
				hours=h;
				minutes=m;
			}
			else{
				hours=0;
				minutes=0;
			}
		}
		
		void settime(int h, int m){
			if ((h>=0 && h<=23) && (m>=0 && m<=59)){
				hours=h;
				minutes=m;
			}
			else{
				cout<<"Invalid Time!"<<endl;
				hours=0;
				minutes=0;
			}
		}
		
		void tick(){
			minutes = minutes + 1;
			if (minutes == 60){
				minutes = 0;
				hours = hours +1;
			}
			
			if ( hours == 24){
				hours = 0;
			}
		}
		
		void display(){
			if ( hours < 10){
				cout<<"0";
			}
			cout<<hours<<":";
			
			if ( minutes < 10){
				cout<<"0";
			}
			cout<<minutes<<endl;
		}
	
};

int main(){
	Clock C1(23, 58);
	cout<<"Starting Time:"<<endl;
	C1.display();
	cout<<"Clock Ticking 5 times:"<<endl;
	for( int i=1; i <= 5 ; i++ ){
		C1.tick();
		C1.display();
	}
	return 0;
}