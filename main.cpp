#include <iostream>

using namespace std;

int main()
{
cout << "a." << endl;

int result = 0;
for (int i = 1; i <= 10; i++) { result = result + i; }
cout << result << endl;


cout << endl << "b." << endl;

result = 1;
for (int i = 1; i <= 10; i++) { result = i - result; }
cout << result << endl;


cout << endl << "c." << endl;

result = 1;
for (int i = 5; i > 0; i--) { result = result * i; }
cout << result << endl;


cout << endl << "d." << endl;

result = 1;
for (int i = 1; i <= 10; i = i * 2) { result = result * i; }
cout << result << endl;


   return 0;
}