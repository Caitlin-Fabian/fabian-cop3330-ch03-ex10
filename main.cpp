#include "std_lib_facilities.h"

int main()

{
    String operation;
    double num1;
    double num2;
    double res;
    
    cin >> operation >> num1 >> num2;

    if(operation == "+"){
        res = num1+num2;
    }

    else if(operation == "-"){
        res = num1 - num2;
    }

    else if(operation == "*"){
        res = num1 * num2;
    }
    
    else if(operation == "/"){
        res = num1 / num2;
    }

    cout << num1 << operation << num2 << " = " << res;

    return 0;
}
