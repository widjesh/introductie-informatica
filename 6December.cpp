
// #include <iostream>


//Example 1 - Function Orders

// double calculateArea (int a, int b){
//     return a*b;
// }

// int main(){

//     using std::cout;
//     using std::cin;
//     using std::endl;
    
//     cout << "Area Calculator Initialized" << endl;
//     double area = calculateArea(5,6);
//     cout << "Area is " << area << endl;
//     return 0;
// }



//Example 2 - For Loop
// #include <iostream>

// int main() {
//     // i = i + 1
//     for (int i = 1; i <= 5; i = i + 1) { //1 , 2 , 3, 4, 5
//         std::cout << "Value of i: " << i << std::endl;
//     }
//     return 0;
// }


//Example 3 - While Loop
// #include <iostream>

// int main() {
//     int count = 0;
//     while (count < 5) {
//         std::cout << "Count: " << count << std::endl;
//         count++;
//     }
//     return 0;
// }

//Example 4 - Do-While Loop
// #include <iostream>

// int main() {
//     int num = 5;
//     do {
//         std::cout << "Number: " << num << std::endl;
//         num--; //num=num - 1
//     } while (num > 0);
//     return 0;
// }

//Example 5 - multiplication table
// #include <iostream>

// int main() {
//     int number;
//     std::cout << "Enter the number to print its multiplication table: ";
//     std::cin >> number;

//     // Multiplication table up to 10
//     std::cout << "Multiplication table of " << number << ":\n";
//     for (int i = 1; i <= 10; i++) {
//         std::cout << number << " X " << i << " = " << (number * i) << std::endl;
//     }

//     return 0;
// }


//Example 6 - boolean explanation
// #include <iostream>

// int main() {
//     bool isLoggedin = true;

//     if(isLoggedin){
//         std::cout << "Welcome to your dashboard ";
//     }else{
//         std::cout << "Invalid email/password";
//     }
   
//     return 0;
// }

#include <iostream>

int main() {
    for(int count = 0;count < 6; count = count + 3){
        std::cout <<"Hello\n";
    }
   return 0;
}
