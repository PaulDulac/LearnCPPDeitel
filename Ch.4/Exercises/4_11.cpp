/* Exercise 4.11 in deitel
 * Identify and correct the errors in the code snippets
 * Author: Paul Dulac
 */

 #include <iostream>
 using namespace std;

 int main()
 {
 	int age;
 	cout << "Please enter your age: ";
 	cin >> age;
 	
 	if ( age >= 65 )
 		cout << "Age is greater than or equal to 65" << endl;
 	else
 		cout << "Age is less than 65" << endl;

 	return 0;
 }