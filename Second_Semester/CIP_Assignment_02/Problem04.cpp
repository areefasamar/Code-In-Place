#include<iostream>
#include<string>
using namespace std;
class Car{
	private:
	string brand;
	float speed;
	int maxspeed;
	
	public:
		Car(string b, int max){
			brand = b;
			maxspeed = max;
			speed =0;
		}
		
		void accelerate(int delta){
			if ( speed + delta <= maxspeed){
				speed = speed + delta;
			}
			else{
				speed = maxspeed;
			}
		}
		
		void brake(int delta){
			if ( speed - delta >= 0){
				speed = speed - delta;
			}
			else{
				speed = 0;
			}
		}
		
		void displaystatus(){
			cout << brand << " Status -> Current Speed: " << speed << " km/h" << endl;
		}
};

int main(){
	Car C1("Toyota",180);
	
	cout << "--- Testing Acceleration ---" << endl;
	C1.accelerate(50);
	C1.displaystatus();
	C1.accelerate(100);
	C1.displaystatus();
	C1.accelerate(60);
	C1.displaystatus();
	
	cout << "\n--- Testing Braking ---" << endl;
	C1.brake(200);
	C1.displaystatus();
	return 0;
}