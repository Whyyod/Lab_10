#include <iostream>
#include <iomanip>
#include<cmath>            
#include<fstream>
#include<string>
#include<cstdlib>
using namespace std;


int main(){
   
    int count = 0;
    float sum1 = 0 ;
    float sum2 = 0 ;
    float s = 0 , m = 0;
    string textline ;
    ifstream source ;
    source.open("score.txt");
    while (getline(source,textline))
    {
        sum1 += atof(textline.c_str());
        sum2 += pow(atof(textline.c_str()),2);
    count++;
    }
    m = sum1/count  ;
    s = sqrt((sum2/count) - pow(m,2));
    cout << "Number of data = " << count << "\n";
    cout << setprecision(3);
    cout << "Mean = "<< m << endl;
    cout << "Standard deviation = " << s ;
}

