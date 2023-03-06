/*#include<bits/stdc++.h>
#include<iostream>
using namespace std;
bool checkAnagram(string a, string b){
   int len1= a.length();
   int len2= b.length();
   if(len1!= len2) {
      return false;
   }
   unordered_map <char,int> mp;
   for(int i=0;i<a.size();i++) {
      mp[a[i]]++;
      mp[b[i]]--;
   }
   for(auto it:mp){
      if(it.second) return false;
   }
   return true;
}
int main(){
  string one,two;
  cout<<"Enter the string1"<<endl;
  cin>>one;
  cout<<"Enter the string2"<<endl;
  cin>>two;
   cout<< checkAnagram(one,two)<<endl;
   return 0;
} 

//Explanation − String ‘b’ has more characters than the string ‘a’ and thus we can say that the length of the string is different. Thus we return False. */

#include <iostream>
#define SIZE(arr) (sizeof(arr) / sizeof(arr[0]))
using namespace std;
void mergeSortedArrays(int *arr1, int n1, int *arr2, int n2, int *result){
   int i, j, k;
   i = 0;
   j = 0;
   k = 0;
   while (i < n1 && j < n2) {
      if (arr1[i] < arr2[j]) {
         result[k] = arr1[i];
         ++k;
         ++i;
      } else {
         result[k] = arr2[j];
         ++k;
         ++j;
      }
   }
   while (i < n1) {
      result[k] = arr1[i];
      ++k;
      ++i;
   }
   while (j < n2) {
      result[k] = arr2[j];
      ++k;
      ++j;
   }
}
void dispalyArray(int *arr, int n){
   for (int i = 0; i < n; ++i) {
      cout << arr[i] << " ";
   }
   cout << endl;
}
int main(){
   int arr1[] = {10, 15, 17, 20};
   int arr2[] = {5, 9, 7, 13, 19};
   int result[SIZE(arr1) + SIZE(arr2)];
   cout << "First sorted array:" << endl;
   dispalyArray(arr1, SIZE(arr1));
   cout << "Second sorted array:" << endl;
   dispalyArray(arr2, SIZE(arr2));
   mergeSortedArrays(arr1, SIZE(arr1), arr2, SIZE(arr2), result);
   cout << "Final sorted array:" << endl;
   dispalyArray(result, SIZE(result));
   return 0;
} 