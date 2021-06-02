/* 
Programmer: Kiana Vang
Date: May 28, 2021

Difficulty: Easy

Program Description:
Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to the target.

Assumption 1) Each input would have exactly one solution
Assumption 2) The same element can't be used twice
Assumption 3) The answer returned can be in any order

Note: Only the vector function within class Solution is submitted. The remaining parts are added so that I can test and debug on my own machine.

Result: 54/54 test cases passed
Runtime: 772 mms
Memory Usage: 9.9 MB

*/


#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ret;
        for (int i = 0; i < nums.size(); i++) {
            
            int counter = 0;

            while (counter < nums.size()) { // while counter < 3

                int val = nums[i] + nums[counter];
                if (i != counter && val == target) {
                    //cout << "nums[i] is: " << nums[i] << " and nums[counter] is: " << nums[counter] << endl;
                    //cout << "i is: " << i << " and counter is: " << counter <<endl;
                    //cout << "val is: " << val << endl;
                    ret.push_back(i);
                    ret.push_back(counter);
                    return ret;
                }
                counter++;
            }
        }
        return ret;
    }
    const Solution& operator= (const Solution& rightHandSide) {
        *this = rightHandSide;
        return *this;
    }
};

// overload operators
ostream& operator<<(ostream& out, const vector<int> s)
{
    for (int i = 0; i < s.size(); i++)
        out << s.operator[](i) << "  ";
    return out;
}

int main() {

    Solution s;
    vector<int> nums{ 3, 2, 4 };
    //cout << nums.size() << endl;
    vector<int> result;
	int target = 6;

    result = s.twoSum(nums, target);
    cout << result << endl;

}
