#include <iostream>
#include <fstream> // creates, reads and writes to files
#include <string>
#include <vector>
#include <utility>

using namespace std;

void output2File(const string& fileName, vector<pair<string ,int>> pairs)
{
    try{
        std::ofstream outputFile(fileName);
    if (outputFile.is_open()) {
        // iterate through vector of strings and elements 
        for (const auto& pair: pairs){
            outputFile << pair.first << "" << pair.second << std::endl;
        }
        std::cout << "Data written to the file 'output.txt'." << std::endl;
        outputFile.close();
    } 
    else{
        std::cout << "Unable to open the file." << std::endl;
    }
}
    catch (const std::exception& e){
        std::cerr << "Error opening the file for reading." << std::endl;
    }
}

// driver code 
int main()
{
    // vector<int>sizes;
    vector<pair<string ,int>> pairs;

    cout << "The size of int: " << sizeof(int) << endl;
    cout << "The size of char: " << sizeof(char) << endl;
    cout << "The size of bool: " << sizeof(bool) << endl;
    cout << "The size of short: " << sizeof(short) << endl;
    cout << "The size of long: " << sizeof(long) << endl;
    cout << "The size of unsigned long: " << sizeof(unsigned long) << endl;
    cout << "The size of size_t: " << sizeof(size_t) << endl; //unsigned long
    cout << "The size of float: " << sizeof(float) << endl;
    cout << "The size of double: " << sizeof(double) << endl;
    // add elements to the vector
    pairs.push_back({"The size of int:", sizeof(int)});
    pairs.push_back({"The size of char:", sizeof(char)});
    pairs.push_back({"The size of bool:", sizeof(bool)});
    pairs.push_back({"The size of short:", sizeof(short)});
    pairs.push_back({"The size of long:", sizeof(long)});
    pairs.push_back({"The size of unsigned long:", sizeof(unsigned long)});
    pairs.push_back({"The size of size_t: ", sizeof(size_t)});
    pairs.push_back({"The size of float:", sizeof(float)});
    pairs.push_back({"The size of double:", sizeof(double)});
   
    std::string fileName = "output.txt";
    output2File(fileName, pairs);

    return 0;
}
        
    

