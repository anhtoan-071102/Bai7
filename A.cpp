#include <iostream>
using namespace std;

char* weird_string() {
   char c[] = "123345";
   return c;
}

int main(){

	char * ch = weird_string();
	cout << ch ;
	return 0;
}