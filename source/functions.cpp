#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "functions.hpp"

int abs_val(int x)
{
  if (x < 0) return abs_val(x * -1);
  return x;
}

int pow(int base, int num)
{
  if (num == 0) return 1;
  return base * pow(base, num - 1);
}

int log(int base, int num)
{
  if (num == 1) return 0;
  else return log(base, num / base) + 1;
}

int chartoint(char c)
{
  int result = (int)c;
  result -= '0';
  return result;
}

char inttochar(int x)
{
  return (char)(x + '0');
}

char chr(int x)
{
  return (char)x;
}

int ord(char c)
{
  return (int)c;
}

int max(int x, int y)
{
  if (x >= y) return x; //Base case
  return max(y, x); //Check other way around
}

int max(int x, int y, int z)
{
  return max(x, max(y, z));
}

int min(int x, int y)
{
  if (x <= y) return x; //Base case
  return min(y, x); //Check the other way around
}

int min(int x, int y, int z)
{
  return min(x, min(y, z));
}

int round(double x, char c)
{
  if (x > 0) return (c == 'd') ? (int)x : (int)x + 1;
  else return (c == 'd') ? (int)x - 1 : (int)x;
}

int max(int arr[], int n)
{
  int max = arr[0];
  for (int i = 1; i < n; ++i)
  {
    if (arr[i] > max)
      max = arr[i];
  }
  return max;
}

int min(int arr[], int n)
{
  int min = arr[0];
  for (int i = 1; i < n; ++i)
  {
    if (arr[i] < min)
      min = arr[i];
  }
  return min;
}


//Done
bool all(bool arr[], int n)
{
  if(n==0) return false;
  else if (n==1) return arr[0];
  else return arr[0] && all(arr+1, n-1);
}

//Done
bool any(bool arr[], int n)
{
  if(n==0) return false;
  else return arr[0] || any(arr+1, n-1);
}

//Done
int frequency(int arr[], int n, int x)
{
  if (n == 0) return 0;
  if (arr[n] == x) return 1 + frequency(arr + 1, n - 1, x); //Add 1 to frequency if arr[n] == x
  if (arr[n] != x) return 0 + frequency(arr + 1, n - 1, x); //Don't do anything if arr[n] != x
}

//Done
long sum(int arr[], int n)
{
  return (n == 0) ? 0 : sum(arr, n - 1) + arr[n - 1]; //Add arr[n-1] as n is decreased by 1
}

int index(char str[], char substr[])
{
  int i = 0;
  int j = 0;
  while (str[i] != '\0')
  {
    if (substr[j] == '\0')
      return i - j;
    if (str[i] == substr[j])
      ++j;
    else
      j = 0;
    ++i;
  }
  if (substr[j] == '\0')
    return i - j;
  return -1;
}

bool is_sorted(int arr[], int n)
{
  if (n <= 2) return true;
  else
  {
    int increasing = 1, decreasing = 1;
    for (int i = 0; i < (n - 1); ++i)
    {
      if (arr[i] <= arr[i + 1])
        ++increasing;

      if (arr[i] >= arr[i + 1])
        ++decreasing;
    }
    return (increasing == n || decreasing == n);
  }
}