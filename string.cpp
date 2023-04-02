#include <iostream>
#include <stdexcept>
using namespace std;

class chaine
{
private:
  int msize;
  char *mt;

public:
  chaine();
  chaine(char *);
  chaine(chaine &);
  ~chaine();
  int strlen();
  char *getMt();
  chaine &operator=(const chaine &);
  chaine operator+(const chaine &);
  bool operator==(const chaine &);
  char &operator[](int);
  void strcpy(const char *);
  void strcat(const char *);
};

chaine::chaine()
{
  msize = 0;
  mt = new char[1];
  mt[0] = '\0';
}
chaine::chaine(char *_chaine)
{
  msize = 0;
  while (_chaine[msize] != '\0')
  {
    ++msize;
  }
  mt = new char[msize + 1];
  for (int i = 0; i <= msize; i++)
  {
    mt[i] = _chaine[i];
  }
}
chaine::chaine(chaine &_chaine)
{
  msize = _chaine.msize;
  mt = new char[msize];
  for (int i = 0; i <= msize; i++)
  {
    mt[i] = _chaine.mt[i];
  }
}
chaine::~chaine()
{
  delete[] mt;
}
int chaine::strlen()
{
  return msize;
}
char *chaine::getMt()
{
  return mt;
}
chaine &chaine::operator=(const chaine &_chaine)
{
  if (this != &_chaine)
  {
    delete[] mt;
    mt = new char[msize = _chaine.msize];
    for (int i = 0; i <= msize; ++i)
    {
      mt[i] = _chaine.mt[i];
    }
  }
  return *this;
}

chaine chaine::operator+(const chaine &_chaine)
{
  chaine result;
  result.msize = msize;
  while (_chaine.mt[result.msize - msize] != '\0')
  {
    ++result.msize;
  }
  result.mt = new char[result.msize];
  for (int i = 0; i < msize; i++)
  {
    result.mt[i] = mt[i];
  }
  for (int i = msize; i <= result.msize; i++)
  {
    result.mt[i] = _chaine.mt[i - msize];
  }
  return result;
}
char &chaine::operator[](int i)
{
  if (i < 0 || i >= msize)
  {
    throw out_of_range("Index out of range");
  }
  return mt[i];
}
void chaine::strcpy(const char *_chaine)
{
  msize = 0;
  while (_chaine[msize] != '\0')
  {
    ++msize;
  }
  mt = new char[msize];
  for (int i = 0; i <= msize; i++)
  {
    mt[i] = _chaine[i];
  }
}
void chaine::strcat(const char *_chaine)
{
  chaine temp;
  temp.msize = msize;
  while (_chaine[temp.msize - msize] != '\0')
  {
    ++temp.msize;
  }
  temp.mt = new char[temp.msize];
  for (int i = 0; i < msize; i++)
  {
    temp.mt[i] = mt[i];
  }
  for (int i = msize; i <= temp.msize; i++)
  {
    temp.mt[i] = _chaine[i - msize];
  }
  delete[] mt;
  msize = temp.msize;
  mt = temp.mt;
}
bool chaine::operator==(const chaine &_chaine)
{
  if (msize != _chaine.msize)
  {
    return false;
  }
  for (int i = 0; i < msize; ++i)
  {
    if (mt[i] != _chaine.mt[i])
    {
      return false;
    }
  }
  return true;
}

int main()
{
  // test

  return 0;
}
