#include <iostream>

using namespace std;

int main()
{
    int age;
    string answer;

    cout << " Enter your age : ";
    cin >>age;
    cout <<endl;
    cout << " Are you a customer club member? (yes/no) : ";
    cin >>answer;
    cout <<endl;

    if ( age<=12 || age>=60 ) {
        cout << " Your cinema ticket is 10$ " <<endl;
    }
    else if ((age>12 && age<=18)&& (answer=="yes" || answer=="Yes")) {
     cout << " Your cinema ticket is 12$ " <<endl;
    }
        else if ((age>12 && age<=18)&& (answer=="no" || answer=="No")) {
     cout << " Your cinema ticket is 15$ " <<endl;
    }
    else if ((age<60 && age>18) && (answer=="yes" || answer=="Yes")) {
       cout << " Your cinema ticket is 20$ " <<endl;
    }
        else if ((age<60 && age>18) && (answer=="No" || answer=="no")) {
       cout << " Your cinema ticket is 25$ " <<endl;
    }

    return 0;
}
