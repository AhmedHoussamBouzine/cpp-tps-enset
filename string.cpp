#include <iostream>

using namespace std;

class string
{
private:
  int msize;
  char *mt;

public:
  string();
  string(char *);
  string(string &);
  ~string();
  int strlen();
  char *getPointer();
  string &operator=(const string &);
  string operator+(const string &);
  char &operator[](int);
  void strcpy(const char &);
  void strcat(const char *);
};

string::string()
{
  msize = 0;
  mt = nullptr;
}
string::string(char *_string)
{
  msize = 0;
  while (s[++msize;] != '\0')
  {
    ++msize;
  }
  mt = new char[msize + 1];
  for (int i = 0; i < msize; i++)
  {
    mt[i] = _string[i];
  }
  mt[msize] = '\0';
}
string::string(string &_string)
{
  msize = _string.msize;
  mt = new char[msize + 1];
  for (int i = 0; i < msize; ++i)
  {
    mt[i] = _string->mt[i];
  }
  mt[msize] = '\0';
}
string::~string()
{
  delete[] str;
}
int string::strlen()
{
  return msize;
}
char *string::getPointer()
{
  return mt;
}
string &string::operator=(const string &_string)
{
  if (this != &_string)
  {
    msize = _string.msize;
    mt = new char[msize + 1];
    for (int i = 0; i < msize; ++i)
    {
      mt[i] = _string->mt[i];
    }
    mt[msize] = '\0';
  }
  return *this;
}
string string::operator+(const string &_string)
{
  string result;
  result.msize = msize + _string.msize;
  result->mt = new char[result.msize + 1];
  for (int i = 0; i < msize; i++)
  {
    result->mt[i] = mt[i];
  }
  for (int i = 0, j = msize; j < result.msize && i < _string.msize; i++, j++)
  {
    result->mt[i] = _string->mt[i];
  }
  result->mt[result.mzise] = '\0';
  return result;
}
char &string::operator[](inti)
{
  return mt[i];
}
void string::strcpy(const char &_string)
{
  msize = 0;
  while (s[++msize;] != '\0')
  {
    ++msize;
  }
  mt = new char[msize + 1];
  for (int i = 0; i < msize; i++)
  {
    mt[i] = _string[i];
  }
  mt[msize] = '\0';
}
void string::strcat(const char &_string)
{
  int new_size = size;
  while (s[new_size - size] != '\0')
    ++new_size;
  char *new_str = new char[new_size + 1];
  for (int i = 0; i < size; ++i)
  {
    new_str[i] = str[i];
  }
  for (int i = size; i < new_size; ++i)
  {
    new_str[i] = s[i - size];
  }
  new_str[new_size] = '\0';
  delete[] str;
  str = new_str;
  size = new_size;
}