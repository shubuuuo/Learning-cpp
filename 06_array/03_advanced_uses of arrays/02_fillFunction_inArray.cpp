/*
    fill() = Fills a range of elements with a specified set of values.
                fill(begin, end, value)
*/

#include <iostream>

int main()
{

    int numbers[5];
    std::string junkfood[5];
    // fill() function with numbers.
    /*
        fill(numbers, numbers + 5, 1);

        for (int number : numbers)
        {
        std::cout << number << '\n';
        }
    */

    // Does fill() function Only works with strings?

    /*
    C++ Array Fill Function Scope
        No, the fill function in C++ does not only work with strings. 
        The fill function is a part of the C++ Standard Template Library (STL) 
        and is used to assign a specific value to all elements in a range, 
        including arrays, vectors, and other containers.

        In C++, fill can be used with various data types, such as:

        Integers: fill(arr, arr + n, 5) sets all elements of an integer array arr to 5.
        Floats: fill(arr, arr + n, 3.14) sets all elements of a float array arr to 3.14.
        Characters: fill(arr, arr + n, 'A') sets all elements of a character array arr to ‘A’.
        However, when working with strings (i.e., std::string objects), you would typically 
        use the assign method or the fill_n function (from the <algorithm> header) instead of fill. 
        This is because fill is designed for numerical types, and using it with strings might lead 
        to unexpected behavior or compiler warnings.

        For example, if you try to use fill with a std::string array like this: fill(strArr, 
        strArr + n, "hello"), the compiler might issue a warning or error, as fill expects a 
        numerical value, not a string.

        In summary, while fill can be used with various data types, it’s not 
        specifically designed for strings, and you should use alternative methods 
        (like assign or fill_n) when working with std::string objects.
    */

    // fill() function with burger
    fill(junkfood, junkfood + 5, "burger");
    for (std::string jk : junkfood)
    {
        std::cout << jk << '\n';
    }

    // Another Efficient Method.
    const int SIZE = 33;
    std::string foods[SIZE];

    fill(foods, foods + (SIZE / 3), "vadapav");
    fill(foods + (SIZE / 3), foods + (SIZE / 3) * 2, "samosapav");
    fill(foods + (SIZE / 3) * 2, foods + SIZE, "bhajipav");
    for (std::string food : foods)
    {
        std::cout << food << '\n';
    }

    return 0;
}