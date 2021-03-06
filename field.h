#ifndef FIELD_H
#define FIELD_H

#include <unistd.h>

#define MAX_X 6
#define MAX_Y 5

struct Value
{
  uint8_t val: 3;
};

class Field
{
public:
  Field();
  ~Field();

  void setValue(uint8_t x, uint8_t y, uint8_t val);
  uint8_t getValue(uint8_t x, uint8_t y) const;
  void incValue(uint8_t x, uint8_t y);
  bool isCorrect() const;
  bool isZeros() const;
  Field& operator=(Field&);
  bool operator==(Field&);

private:
  uint8_t* getField();

  Field(Field&);
  uint8_t m_Field[MAX_X][MAX_Y];
};

#endif
