class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int len = digits.size()-1;
   digits[len]++;
   if (digits[len] > 9)
   {
       while (digits[len] > 9)
       {
           digits[len] = 0;
           if (len != 0)
               digits[len - 1]++;
           else 
           {
                digits.insert(digits.begin(), 1);
               break;
           }
           len--;
       }
   }
         return digits;
    }
};