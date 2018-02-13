//www.programmercave.blogspot.com
#include <iostream>
#include <vector>
#include <algorithm>

void add(std::vector<int>& A,
         std::vector<int>& B,
         std::vector<int>& C)
{
   int size_A = A.size();
   int size_B = B.size();
   int max_size = (size_A >= size_B) ? size_A : size_B;

   int carry = 0, sum = 0;

   int i = size_A - 1, j = size_B - 1, k = max_size;
   C.resize(max_size + 1);

   std::reverse(A.begin(), A.end());
   std::reverse(B.begin(), B.end());

   for (; k > 0; --k)
   {
      int a = (i >= 0) ? A[i--] : 0;
      int b = (j >= 0) ? B[j--] : 0;
      sum = a + b + carry;

      switch(sum)
      {
         case 0: carry = 0; C[k] = 0; break;
         case 1: carry = 0; C[k] = 1; break;
         case 2: carry = 1; C[k] = 0; break;
         case 3: carry = 1; C[k] = 1; break;
         default: std::cout << "Something wrong happened"; break;
      }
   }
  C[0] = carry;

  //least significant bit at index 0
  std::reverse(C.begin(), C.end());
}

void enter_bits(std::vector<int>& vec, int size)
{
   for (int i = size - 1; i >= 0; i--)
       std::cin >> vec[i];
}

void show_bits(const std::vector<int>& vec)
{
   for (int i = vec.size() - 1; i >= 0; i--)
       std::cout << vec[i];
}

int main()
{
   int n1, n2;
   std::cout << "Enter the  number of bits for first binary numbers \n";
   std::cin >> n1;
   std::cout << "Enter the  number of bits for second binary numbers \n";
   std::cin >> n2;

   std::vector<int> A(n1);
   std::vector<int> B(n2);
   std::vector<int> C;

   //least significant bit is stored at index 0
   //most significant bit is stored at last index
   std::cout << "Enter bits for first binary number \n";
   enter_bits(A, n1);

   std::cout << "Enter bits for second binary number \n";
   enter_bits(B, n2);

   std::cout << "First number    : ";
   show_bits(A);

   std::cout << "\nSecond number   : ";
   show_bits(B);

   add(A, B, C);

   std::cout << "\nResult          : ";
   show_bits(C);
   std::cout << "\n";
}
