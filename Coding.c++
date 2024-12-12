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
#include<iostream>
using namespace std;
int main(){
    int n;
    int a=0;
    int b=1;
    int c;
    cout<<"Enter Your Nth no. = ";
    cin>>n;
    int i=0;
    while(i<n){
        cout<<a<<" ";
        a=b; 
        b=c;
        c=a;
        i++;
    }
return 0;
}
