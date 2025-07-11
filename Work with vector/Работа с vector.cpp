#include <iostream>
#include <vector>
#include <string>

using namespace std;

int factorial(int i) {

    if (i == 1) {
        return 1;
    }
    else {
        return i * factorial(i - 1);
    }
}

string dvoich_sis(int n) {

    if (n == 0) {
        return "0";
    }
    string binari = "";

        while (n > 0) {

            binari = to_string(n % 2) + binari;

            n = n / 2;
            
        }

        return binari;
}

//int prost_numbers(int n) {
//
//    for (int i = 1; i < 100; i++) {
//        bool proverka = true;
//        for (int j = 2; j <= i / 2; j++) {
//            if ((i % j) == 0) {
//                proverka = false;
//                break;
//            }
//        }
//        if (proverka) {
//            return i;
//        }
//    }
//    return 0; 
// }

int fib(int n) {

    if (n <= 1) {
        return 1;
    }
    else {
        return fib(n - 1) + fib(n - 2);
    }
    
}


int main()
{
    
    int n; 
    cin >> n;

    vector<int> factorials;

    vector<string> dvo_chis;

    //vector<int> prost_chis;

    vector<int> fib_chis;

    for (int i = 1; i < n; i++) {
     
        factorials.push_back(factorial(i));

    }

    for (auto& v : factorials) {
        
        cout << v << " ";
    
    }

    cout << endl;

    for (int i = 0; i < n; i++) {

        dvo_chis.push_back(dvoich_sis(i));

    }

    for (auto& v : dvo_chis) {

        cout << v << " ";

    }

    cout << endl;

    for (int i = 0; i < n; i++) {

        fib_chis.push_back(fib(i));

    }

    for (auto& v : fib_chis) {

        cout << v << " ";

    }

    cout << endl<<endl;


   vector<vector<char>>  vec(10, vector<char>(10,'*'));

   vector<int>::iterator iter, iter2;

   for (int i = 0; i < vec.size(); ++i) {
       for (int j = 0; j < vec[i].size(); ++j) {
           cout << vec[i][j]<<" ";
       }
       cout << endl;
}

   char a;
   cin >> a;


   for (int i = 0; i < vec.size(); ++i) {
       for (int j = 0; j < vec[i].size(); ++j) {
           if (a == 'w') {
               vec[4][5] = '%';
           }
           else {
               vec[4][5] = '$';
           }
       }
       cout << endl;
   }


   for (int i = 0; i < vec.size(); ++i) {
       for (int j = 0; j < vec[i].size(); ++j) {
           cout << vec[i][j] << " ";
       }
       cout << endl;
   }


    //for (int i = 0; i < n; i++) {

    //    prost_chis.push_back(prost_numbers(i));

    //}

    //for (auto& v : prost_chis) {

    //    cout << v << " ";

    //}
    
    return 0;
}

