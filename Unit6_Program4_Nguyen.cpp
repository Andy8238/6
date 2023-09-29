// Andy Nguyen, Programming Fundamentals 1, Replit
#include <iostream>
#include <algorithm> 
#include "accounts.h"
using namespace std;

void printArray(int array[], int size) {
for (int i = 0; i < size; i++) {
cout << array[i] << "";
}
cout << endl;
}

int main()
{
int myArray[7] = {1,2,3,4,5,6,7};
sort(accountBalances, accountBalances + maxAccounts);
reverse(accountBalances, accountBalances + maxAccounts);
printArray(accountBalances, maxAccounts);
return 0;
}
