#include <iostream>
#include <string>
using namespace std;

int main()
{
    // 1. Numeric Constant or Not

    string input;
    bool numeric = true;

    cout << "1. Enter input: ";
    cin >> input;

    for (char ch : input)
    {
        if (ch < '0' || ch > '9')
        {
            numeric = false;
            break;
        }
    }

    if (numeric)
        cout << "Numeric Constant" << endl;
    else
        cout << "Not Numeric" << endl;



    // 2. Operators or Not

    cout << "\n2. Enter expression: ";
    cin >> input;

    int count = 0;

    for (char ch : input)
    {
        if (ch == '+' || ch == '-' || ch == '*' ||
            ch == '/' || ch == '%' || ch == '=')
        {
            count++;
            cout << "operator" << count << ": " << ch << endl;
        }
    }

    if (count == 0)
        cout << "No operator found" << endl;


    // 3. Comment Line or Not

    cin.ignore();

    cout << "\n3. Enter comment: ";
    getline(cin, input);

    if (input.length() >= 2 &&
        input[0] == '/' && input[1] == '/')
    {
        cout << "Single Line Comment" << endl;
    }
    else if (input.length() >= 4 &&
             input[0] == '/' && input[1] == '*' &&
             input[input.length() - 2] == '*' &&
             input[input.length() - 1] == '/')
    {
        cout << "Multiple Line Comment" << endl;
    }
    else
    {
        cout << "Not a Comment" << endl;
    }



    // 4. Identifier or Not

    cout << "\n4. Enter identifier: ";
    cin >> input;

    bool identifier = true;

    if (!((input[0] >= 'A' && input[0] <= 'Z') ||
          (input[0] >= 'a' && input[0] <= 'z') ||
          input[0] == '_'))
    {
        identifier = false;
    }

    for (int i = 1; i < input.length(); i++)
    {
        if (!((input[i] >= 'A' && input[i] <= 'Z') ||
              (input[i] >= 'a' && input[i] <= 'z') ||
              (input[i] >= '0' && input[i] <= '9') ||
              input[i] == '_'))
        {
            identifier = false;
            break;
        }
    }

    if (identifier)
        cout << "Valid Identifier" << endl;
    else
        cout << "Invalid Identifier" << endl;



    // 5. Average of Array

    int n;

    cout << "\n5. Enter array size: ";
    cin >> n;

    int arr[n];
    double sum = 0;

    cout << "Enter array elements: ";

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }

    double average = sum / n;

    cout << "Average = " << average << endl;


    // 6. Minimum and Maximum

    cout << "\n6. Minimum and Maximum" << endl;

    int minimum = arr[0];
    int maximum = arr[0];

    for (int i = 1; i < n; i++)
    {
        if (arr[i] < minimum)
            minimum = arr[i];

        if (arr[i] > maximum)
            maximum = arr[i];
    }

    cout << "Minimum = " << minimum << endl;
    cout << "Maximum = " << maximum << endl;



    // 7. First Name + Last Name

    string firstName, lastName;

    cout << "\n7. Enter first name: ";
    cin >> firstName;

    cout << "Enter last name: ";
    cin >> lastName;

    string fullName = firstName + " " + lastName;

    cout << "Full Name = " << fullName << endl;

    return 0;
}

