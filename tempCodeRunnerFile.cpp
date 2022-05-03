// inserting into a vector
#include <iostream>
#include <vector>

int main ()
{
  std::vector<int> v (3,100);
  std::vector<int>::iterator i;

  i = v.begin();
  i = v.insert ( i , 200 );

  v.insert (i,2,300);

  i = v.begin();

  std::vector<int> anothervector (2,400);
  v.insert (i+2,anothervector.begin(),anothervector.end());

  int arr [] = { 501,502,503 };
  v.insert (v.begin(), arr, arr+3);

  
  for (i=v.begin(); i<v.end(); i++)
    std::cout << ' ' << *i;
 

  return 0;
}