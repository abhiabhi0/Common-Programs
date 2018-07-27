#include <iostream>
#include <vector>
#include <map>

template<class T>
void findElement(std::vector<T>& vec, int k)
{
      std::map<T, int> count;
      for(T x : vec)
      {
        count[x]++;
      }

      typename std::map<T, int>::iterator itr;
      for(itr = count.begin(); itr != count.end(); itr++)
      {
        if(itr->second == k)
        {
          std::cout << itr->first <<'\n';
          return;
        }
      }
      std::cerr << "No such element \n ";
}

int main()
{
      std::vector<char> v;
      v.push_back('r');
      v.push_back('t');
      v.push_back('q');
      v.push_back('r');
      v.push_back('u');
      v.push_back('q');
      v.push_back('s');
      int k;
      std::cout << " Enter the number of repetitions you want : ";
      std::cin >> k;
      std::cout << "The smallest element that has " << k <<" reptition is : ";
      findElement(v, k);
}
