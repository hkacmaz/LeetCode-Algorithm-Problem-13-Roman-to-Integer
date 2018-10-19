//
//  main.cpp
//  p13-roman_to_integer
//

#include <iostream>
using namespace std;

class Solution {
public:
    int romanToInt(string s) {
        int n = s.size();
        n=n-1;
        int total=0;
        
        while(n>=0)
        {
            char c = s[n];
            switch (c) {
                case 'I':
                {
                    total++;
                    n--;
                    break;
                }
                case 'V':
                {
                    if((char)s[n-1]=='I')
                    {
                        total+=4;
                        n=n-2;
                    }
                    else
                    {
                        total+=5;
                        n--;
                    }
                    
                    break;
                }
                case 'X':
                {
                    if((char)s[n-1]=='I')
                    {
                        total+=90;
                        n=n-2;
                    }
                    else
                    {
                        total+=100;
                        n--;
                    }
                    
                    break;
                }
                case 'L':
                {
                    if((char)s[n-1]=='X')
                    {
                        total+=40;
                        n=n-2;
                    }
                    else
                    {
                        total+=50;
                        n--;
                    }
                    
                    break;
                }
                case 'C':
                {
                    if((char)s[n-1]=='X')
                    {
                        total+=9;
                        n=n-2;
                    }
                    else
                    {
                        total+=10;
                        n--;
                    }
                    
                    break;
                }
                case 'D':
                {
                    if((char)s[n-1]=='C')
                    {
                        total+=400;
                        n=n-2;
                    }
                    else
                    {
                        total+=500;
                        n--;
                    }
                    
                    break;
                }
                case 'M':
                {
                    if((char)s[n-1]=='C')
                    {
                        total+=900;
                        n=n-2;
                    }
                    else
                    {
                        total+=1000;
                        n--;
                    }
                    
                    break;
                }
                default:
                    break;
            }
        }
        
        return total;
    }
};

int main() {
    
    Solution so;
    string s= "IX";
    cout << so.romanToInt(s) ;
    
    return 0;
}
