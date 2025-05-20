#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int a , b , c;
    cin >> a >> b >> c;
    int result[9];
    result[0] = a - (b*c);  
    result[1] =   a + b + c; 
    result[2] = a + b - c;
    result[3]= a + b * c;
    result[4] =a - b + c;  
    result[6] = a * b + c;
    result[7] = a * b - c;
    result[8] =a * b * c;
    result[5]= a - b - c;
    
      for (int i = 0; i < 9-1; i++)
      {
        if (result[i]<=result[i+1])
        {
            result[i+1] = result[i];
        }
        
      }
      


    cout << result[8] <<endl;
    return 0;
}