#include <stdexcept>

#ifndef _VECTOR_HPP
#define _VECTOR_HPP

template <class T>
class vector {
private:
  T* _data;
  unsigned int _size;
  unsigned int _capacity;
public:
  vector();
  ~vector();
  unsigned int size();
  unsigned int capacity();
  void push_back(const T& val);
  void reserve(unsigned int n);
  T& at(unsigned int idx);
};

template <class T>
vector<T>::vector() : _size(0), _capacity(0), _data(NULL) {}

template <class T>
vector<T>::~vector() {
  delete[] _data;
}

template <class T>
unsigned int vector<T>::size() {
  return this->_size;
}

template <class T>
unsigned int vector<T>::capacity() {
  return this->_capacity;
}

template <class T>
void vector<T>::push_back(const T& val) {
  if (this->_size == this->_capacity) {
    this->reserve(this->_capacity + 1);
  }
  this->_data[this->_size++] = val;
}

template <class T>
void vector<T>::reserve(unsigned int n) {
  if (this->_capacity < n) {
    T* new_data = new T[n];
    for (int i = 0; i < this->_size; i++) {
      new_data[i] = this->_data[i];
    }
    delete[] this->_data;
    this->_data = new_data;
    this->_capacity = n;
  }
}

template <class T>
T& vector<T>::at(unsigned int idx) {
  if (idx >= this->_size) {
    throw std::out_of_range("bad index in vector::at()");
  }
  return this->_data[idx];
}

#endif
