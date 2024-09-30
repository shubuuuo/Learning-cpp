#include <iostream>
#include <cmath>

void calculation(char& grade, double& result, double maths, double english, double science);

int main() {

    std::cout << "We will Determine Whether the studnet has been passed or fail using his marks." << '\n';
    
    char grade;
    double maths, english, science, result;
    std::cout << "Enter Score of the Student in Maths." << '\n';
    std::cin >> maths;
    std::cout << "Enter Score of the Student in English." << '\n';
    std::cin >> english;
    std::cout << "Enter Score of the Student in Science." << '\n';
    std::cin >> science;

    calculation(grade, result, maths, english, science);
    // std::cout << "Enter Grade of the Student." << '\n';
    // std::cin >> grade;

    switch (grade)
    {
    case 'A':
        std::cout << "Congratulations! You Scored Great!" << '\n';
        std::cout << "And Your total aggregate is " << result << '\n';
        break;
    case 'B':
        std::cout << "Congratulations! You Scored Good!" << '\n';
        std::cout << "And Your total aggregate is " << result << '\n';
        break;
    case 'C':
        std::cout << "Congratulations! You Passed!" << '\n';
        std::cout << "And Your total aggregate is " << result << '\n';
        break;
    case 'D':
        std::cout << "You Passed, But You need to do better." << '\n';
        std::cout << "And Your total aggregate is " << result << '\n';
        break;
    case 'F':
        std::cout << "Unfortunately, You Failed." << '\n';
        std::cout << "And Your total aggregate is " << result << '\n';
        break;
    default:
        std::cout << "Couldn't Give Grade." << '\n';
        break;
    }   
    return 0;
}

void calculation(char& grade, double& result, double maths, double english, double science) {
    
    result = ((maths + english + science) / 300 ) * 100;
  
    // Couldn't use 'switch' because the condition needed to an integeral type variable.

    if (result >= 90)
    {
        grade = 'A';
    } else if (result >= 75)
    {
        grade = 'B';
    }
    else if (result >= 60)
    {
        grade = 'C';
    }
    else if (result >= 35)
    {
        grade = 'D';
    }
    else if (result >= 0)
    {
        grade = 'F';
    } else
    {
        std::cout << "Can't Caculate Result. Enter Valid Marks";
    }
    
}

/*
ERRORS:

the reason you can't find the correct grade in the main() function is that 
the grade variable is passed by value to the calculation() function. 
When you pass a variable by value, a copy of that variable is created inside the function, 
meaning changes made to it within the function are not reflected in the original variable.

In your case, even though the grade is assigned inside the calculation() function, 
the main() function still holds the unmodified version of grade.

Solution:
You need to pass the grade by reference so that changes 
made inside the calculation() function are reflected in the original 
variable. You can do this by passing the grade using a pointer or a reference.
*/
