/*
 * @Author       : Zihao Zhao
 * @E-mail       : 18212020051@fudan.edu.cn
 * @Company      : Fudan University, iBiCAS
 * @Date         : 2020-09-09 14:13:36
 * @LastEditors  : Zihao Zhao
 * @LastEditTime : 2020-09-09 14:53:21
 * @FilePath     : /data-layout-transformer/src/Blob.h
 * @Description  : 
 */

#ifndef __BLOB_H__
#define __BLOB_H__

#include <iostream>
#include "stdlib.h"

using namespace std;

template<typename TYPE>
class Blob {
public:
  Blob(unsigned int size);
  Blob(unsigned int size, unsigned int alignment);
  Blob(void *start_addr, unsigned int size);

  inline TYPE *get() { return _p; }
  void randomize();
  void regular_init();
  void init_from_array(const TYPE* array, unsigned int array_size);
  void init_from_file(const TYPE* array, unsigned int array_size);
  inline TYPE get(int i) { return _p[i]; }
  inline unsigned long long get_size() {  return _size; }

private:
  void *_value;
  TYPE *_p;
  unsigned int _size;

  void init(unsigned int size);
};

#endif