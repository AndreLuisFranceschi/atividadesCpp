#include <iostream>

using namespace std;

int main(){
	
	for(int i=1; i<=10; i++){
		cout << "TABUADA DO " << i << endl;
		for(int j=1; j<=10; j++){
			cout << i << " * " << j << " = " << i*j << endl;
		}
	}
	
	return 0;
}
