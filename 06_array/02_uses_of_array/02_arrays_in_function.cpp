#include <iostream>

double getTotal(double prices[], int size);
int main() {

    double prices[] = {22.34, 34.32, 43.54, 234.45, 4532.34};
    int size = sizeof(prices)/sizeof(prices[0]);
    double total = getTotal(prices, size);

    std::cout << "Rs." << total;

    return 0;
}

double getTotal(double prices[], int size){

    double total = 0;

    // for (int i = 0; i < (sizeof(prices)/sizeof(prices[0])); i++)
    // This will not work because we are not working with the array anymore, we are working with the pointer
    // that is pointing on the address of where the array begins, this function has no idea how big the array is anymore.
    // Since, this funtion doesn't know hwo big the array is, we can explitically let this funtion know how big the array is.
    for (int i = 0; i < size; i++)
    {
        total += prices[i]; 
    }
    return total;
        
}