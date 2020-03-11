#include <iostream>
#include <Windows.h>
#include <string>

using namespace std;

int main(void){
	int count = 0;

	for(int i=0;i<24;i++){
		for(int j=0;j<60;j++){
			for(int f=0;f<60;f++){
				count++;
				cout << i << ":" << j << ":" << f << "µÚ" << count << "´ÎÏëÄã" << endl;
				Sleep(1000);
			}
		}
	}
	system("pause");
	return 0;
}