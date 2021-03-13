#include <iostream>
using namespace std;
int othervalue = 4;
void changeptr(int *&param)
{
	param = &othervalue;
}
int main() {
  cout << "Passing by Reference"<<endl;
	int value = 3;
	int *ptr = &value;
	cout << "Before changing pointer "<<*ptr<<endl;
	changeptr(ptr);
	cout << "after changing pointer "<<*ptr<<endl;
}
