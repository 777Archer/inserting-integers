/*David Archer
Inserting Integers*/

#include <iostream>
#include "Set.h"
#include <vector>

using namespace std;

int main()
{
	Set<unsigned int> s1, s2, s3;
	int choice, setChoice;
	unsigned int element;
	do
	{
		cout << "1. Add elements to set1" << endl;
		cout << "2. Add elements to set2" << endl;
		cout << "3. Remove an element from set1" << endl;
		cout << "4. Remove an element from set2" << endl;
		cout << "5. Do a union of set1 and set2 into set3" << endl;
		cout << "6. Do an intersection of set1 and set2 into set3" << endl;
		cout << "7. Print set1, set2, and set3" << endl;
		cout << "8. Quit" << endl;
		cout << "Enter a choice (1-8): ";
		cin >> choice;

		if (choice == 1)
		{
			cout << "Enter positive integers to insert in set1(0 to exit): ";
			do {
				cin >> element;
				if (element > 0) 
				{
					s1.add(element);
				}
			} while (element > 0);

		}
		else if (choice == 2)
		{
			cout << "Enter positive integers to insert in set2(0 to exit): ";
			do {
				cin >> element;
				if (element > 0) 
				{
					s2.add(element);
				}
			} while (element > 0);

		}
		else if (choice == 3)
		{
			cout << "Enter an element to remove: ";
			cin >> element;
			s1.remove(element);
		}
		else if (choice == 4)
		{
			cout << "Enter an element to remove: ";
			cin >> element;
			s2.remove(element);
		}
		else if (choice == 5)
		{
			s3 = s1 + s2;
		}
		else if (choice == 6)
		{
			s3 = s1 - s2;
		}
		else if (choice == 7)
		{
			cout << "Which set to print? ";
			cin >> setChoice;

			if (setChoice == 1)
				cout << "Set 1 has " << s1.getCurrentSize() << " elements of: " << endl << s1 << endl;
			else if (setChoice == 2)
				cout << "Set 2 has " << s2.getCurrentSize() << " elements of: " << endl << s2 << endl;
			else if (setChoice == 3)
				cout << "Set 3 has " << s3.getCurrentSize() << " elements of: " << endl << s3 << endl;
		}
		else if (choice != 8)
			cout << "Invalid choice" << endl;

	} while (choice != 8);

	return 0;
}