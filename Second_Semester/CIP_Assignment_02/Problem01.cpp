#include<iostream>
using namespace std;
class Temperature{
	
	private:
		
	float celsius;
	
	public:
		
		void set_temp( float temp_c ){
			if ( temp_c >= -273.15){
				celsius = temp_c;
			}
			else{
			cout<<"ERROR: Invalid Temperature!"<<endl;
			celsius = 0;
		    }
		}
		
		void get_temp(){
			float temp_k, temp_f;
			temp_k = celsius + 273.15;
			temp_f = (celsius * 9.0/5) + 32;
			cout<<"Temperatures:"<<endl;
			cout<<"Celsius: "<<celsius<<endl;
			cout<<"Kelvin: "<<temp_k<<endl;
			cout<<"Fahrenheit: "<<temp_f<<endl;
		}
		
};

int main(){
	Temperature T1;
	T1.set_temp(25);
	T1.get_temp();
	return 0;
}
