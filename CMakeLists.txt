cmake_minimum_required(VERSION 3.7)
project(exercise2)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES removeNthFromEnd/removeNthFromEnd.cpp removeNthFromEnd/removeNthFromEnd.h postorderTraversal/postorderTraversal.cpp postorderTraversal/postorderTraversal.h twoSum/twoSum.cpp twoSum/twoSum.h removeElement/removeElement.cpp addTwoNumbers/addTwoNumbers.cpp lengthOfLongestSubstring/lengthOfLongestSubstring.cpp reverseInteger/reverseInteger.cpp palindromeNumber/palindromeNumber.cpp validParentheses/validParentheses.cpp removeDuplicatesfromSortedArray/removeDuplicatesfromSortedArray.cpp removeElements/27.removeElement.cpp "35.Search Insert Position/searchInsertPosition.cpp" "38. Count and Say/countAndSay.cpp" "50. Pow(x, n)/Pow(x, n).cpp" "53. Maximum Subarray/maximumSubarray.cpp" "58. Length of Last Word/lengthofLastWord.cpp" "83. Remove Duplicates from Sorted List/removeDuplicatesfromSortedList.cpp" "100. Same Tree/sameTree.cpp")
add_executable(exercise2 ${SOURCE_FILES} removeNthFromEnd/removeNthFromEnd.cpp removeNthFromEnd/removeNthFromEnd.h)