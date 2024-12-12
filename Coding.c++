// Simple Calculator

// #include<iostream>
// using namespace std;
// int main(){
//     int a;
//     cout<<"1.Addition\n2.Subtraction\n3.Multiplication\n4.Division"<<endl;
//     cout<<"Enter Your Number=";
//     cin>>a;
//     switch(a)
//     {
//         case 1:
//         {
//         int b,c;
//         cout<<"Enter Your 1st Number=";
//         cin>>b;
//         cout<<"Enter your 2nd Number=";
//         cin>>c;
//         int d=b+c;
//         cout<<"The Addition of "<<b<<" and "<<c<<" is="<<d<<endl;
//         break;
//         }

//         case 2:
//         {
//         int b,c;
//         cout<<"Enter Your 1st Number=";
//         cin>>b;
//         cout<<"Enter your 2nd Number=";
//         cin>>c;
//         int d=b-c;
//         cout<<"The Subtraction of "<<b<<" and "<<c<<" is="<<d<<endl;
//         break;
//         }

//         case 3:
//         {
//         int b,c;
//         cout<<"Enter Your 1st Number=";
//         cin>>b;
//         cout<<"Enter your 2nd Number=";
//         cin>>c;
//         int d=b*c;
//         cout<<"The Multiplication of "<<b<<" and "<<c<<" is="<<d<<endl;
//         break;
//         }

//         case 4:
//         {
//         int b,c;
//         cout<<"Enter Your 1st Number=";
//         cin>>b;
//         cout<<"Enter your 2nd Number=";
//         cin>>c;
//         int d=b/c;
//         cout<<"The Division of "<<b<<" and "<<c<<" is="<<d<<endl;
//         break;
//         }

//         default:
//         {
//         cout<<"Enter Correct Input!!"<<endl;
//         break;
//         }
//     }
//     return 0;
// }

// odd or even

// #include<iostream>
// using namespace std;
// int  main(){
//     int a;
//     cout<<"Enter Your No=";
//     cin>>a;
//     if(a%2==0){
//         cout<<"Even No. "<<a<<endl;
//     }
//     else{
//         cout<<"Odd No. "<<a<<endl;
//     }
//     return 0;
// }


// Number Gussing game

// #include <iostream>
// #include <cstdlib>
// #include <ctime>
// using namespace std;

// void numberGuessingGame() {
//     cout << "Welcome to the Number Guessing Game!\n";
//     cout << "I have picked a number between 1 and 10. Can you guess it?\n";
//     srand(static_cast<unsigned int>(time(0)));

//     int number = rand() % 10 + 1;
//     int attempts = 0;
//     int guess;

//     while (true) {
//         cout << "Enter your guess: ";
//         cin >> guess;
//         if (guess == number) {
//             cout << "Congratulations! You guessed the number " << number << " correctly in " << attempts << " attempts.\n";
//             break;
//         } else if (guess < number) {
//             cout << "Too low! Try again.\n";
//         } else {
//             cout << "Too high! Try again.\n";
//         }
//         attempts++;
//     }
// }

// int main() {
//     numberGuessingGame();
//     return 0;
// }


// Multiplication Table

// #include<iostream>
// using namespace std;
// int main(){
//    int n;
//    cout<<"Enter Your Number = ";
//    cin>>n; 
//     cout<<"Table of "<<n<<" is :"<<endl;
//     for(int i=1;i<=10;i++){
//         int product=n*i;
//        cout<<n<<" * "<<i<<" = "<<product<<endl;
//     }
// return 0;
// }

// Fibonacci Seies of N

#include <iostream>
using namespace std;

void printFibonacci(int n) {
    if (n <= 0) {
        cout << "Please enter a positive integer." << endl;
        return;
    }

    long long first = 0, second = 1, next;
    for (int i = 1; i <= n; ++i) {
        cout << first << " ";
        next = first + second;
        first = second;
        second = next;
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Enter the number of terms: ";
    cin >> n;
    printFibonacci(n);
    return 0;
}