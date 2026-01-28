// Given a set of numbers, return the additive inverse of each. Each positive becomes negatives, and the negatives become positives

#include <vector>

std::vector<int> invert(std::vector<int> values)
{
  int len=values.size();
   for(int i=0;i<len;i++)
     {
     values[i]=-(values[i]);
   }
    return values;
}