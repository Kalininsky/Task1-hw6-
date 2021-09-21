
#include <iostream>


// task 1

void separation()
{
	std::cout << "//===Homework===//\n\n";
}

 int main()
{
 
     separation();

    int * HwArr;
    int n;
    std::cout << "Enter your number: ";
    std::cin >> n;
    HwArr = new int[n];
    int temp = 1;
    std::cout << "Array: ";
    for (size_t i = 0; i < n; i++)
    {
        HwArr[i] = temp;
        std::cout << HwArr[i] << " ";
        temp *= 2;
    }

    delete[] HwArr;

    return 0;
       
 }




