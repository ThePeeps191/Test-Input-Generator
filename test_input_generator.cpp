// generate n numbers with a range [0, N) separated by space in a seperate txt file

#include <iostream>
#include <fstream>
#include <random>
#include <ctime>
#include <string>

using namespace std;

int main() {
    int n, N;
    cin >> n >> N;
    string fileName = "test_" + to_string(n) + "_" + to_string(N)+ ".txt";
    srand(time(NULL));
    ofstream outfile;
    outfile.open(fileName, ios::out);
    outfile << n << endl;
    for (int i = 0; i < n; i++) {
        int x1 = rand(), x2 = rand();
        int x = (x1 * 10000 + x2) % N;
        if (i > 0) outfile << " ";
        outfile << x;
    }
    outfile << endl;
    outfile.close();
} 
