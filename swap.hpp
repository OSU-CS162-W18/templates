#ifndef _SWAP_HPP
#define _SWAP_HPP

// template <class T>
// void swap(T& a, T& b);

template <class T>
void swap(T& a, T& b) {
  T tmp = b;
  b = a;
  a = tmp;
}

#endif
