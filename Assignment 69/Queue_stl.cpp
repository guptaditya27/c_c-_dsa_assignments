#include<iostream>
using namespace std;
#include<algorithm>
#include<stdio.h>
#include<string>
#include<queue>

int main()
{
   queue<int> Q1;
   queue<char> Q2;
   queue<string> Q3;
   
   // Declare a queue of integers
   std::queue<int> q;

   // Using push() to add elements
   q.push(10);
   q.push(20);
   q.push(30);

   std::cout << "Front element: " << q.front() << std::endl; // Using front()
   std::cout << "Back element: " << q.back() << std::endl;   // Using back()
   
   // Using size() to get the number of elements
   std::cout << "Queue size: " << q.size() << std::endl;

   // Remove elements using pop()
   q.pop();
   std::cout << "After pop, front element: " << q.front() << std::endl;

   // Check if the queue is empty
   if (q.empty()) {
       std::cout << "Queue is empty" << std::endl;
   } else {
       std::cout << "Queue is not empty" << std::endl;
   }


   return 0;
}