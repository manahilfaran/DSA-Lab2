#include <iostream>;
using namespace std;
void analyze_pointer(int* ptr) {
	cout << "Memory address is :" << ptr << endl;
	cout << "Value stored is:" << *ptr << endl;

}
int main() {
	int m = 10;
	int* p = &m;
	analyze_pointer(p);

	int* j = new int(20);//heap memory storage
	analyze_pointer(j); //calling function
}