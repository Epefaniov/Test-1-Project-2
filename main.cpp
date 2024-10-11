#include <iostream>
#include <cmath> 


using namespace std;


int main() {
    int choice;
    double num1, num2, result;

  
    do {
      
      cout <<"Select an operation:\n";
      cout <<"1. Add\n";
      cout <<"2. Subtract\n";
      cout <<"3. Multiply\n";
      cout <<"4. Divide\n";
      cout <<"5. Power\n";
      cout <<"6. Exit\n";
      cout <<"Enter your choice: ";
      cin >> choice;


      if (choice == 6) {
           break;
      
      }

      cout <<"Enter the first number: ";
      cin >> num1;
      cout <<"Enter the second number: ";
      cin >> num2;


      switch (choice) {
        case 1:
            result = num1 + num2;
            cout << "Result: " << result << endl;
            break;
        case 2:
            result = num1 - num2;
            cout << "Result: " << result << endl;
            break;
        case 3:
            result = num1 * num2;
            cout << "Result: " << result << endl;
            break;
        case 4:
            if (num2 != 0) {
                result = num1 / num2;
                cout << "Result: " << result << endl;
            } else {
                cout << "Error: Division by zero is not allowed." << endl;
            
            }
            break;
        case 5:
            result = pow(num1, num2);
            cout << "Result: " << result << endl;
            break;
        default:
            cout << "Invalid choice. Please try again." << endl;


      }

      cout << endl;

    } while (true);

    cout << "Calculator exited." << endl;
    return 0;


}
      
        
        
        
            
      