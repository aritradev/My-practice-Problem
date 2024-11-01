#include <iostream>
using namespace std;

#include <string>

int main(){
  string text="ababbabaa",pattern="abaa";
  int n = text.length();
  int m = pattern.length();
  int i = 0; // index for text
  int j = 0; // index for pattern

  while (i < n && j < m)
  {
    if (text[i] == pattern[j])
    {
      i++;
      j++;
    }
    else
    {
      cout<<"NOT match in index "<<i+1<<endl;
      i = i - j + 1;
      j = 0;
    }
  }

  if (j == m)
  {
   cout<<endl<<endl<<"MATCH IN INDEX "<< i - j<<endl;; // Match found at index i - j
  }
  else
  {
    return -1; // No match found
  }
}
