/*
 * @Author       : Zihao Zhao
 * @E-mail       : 18212020051@fudan.edu.cn
 * @Company      : Fudan University, iBiCAS
 * @Date         : 2020-09-09 14:13:29
 * @LastEditors  : Zihao Zhao
 * @LastEditTime : 2020-09-09 14:17:37
 * @FilePath     : /data-layout-transformer/Blob.cpp
 * @Description  : 
 * 
 * 
 */

#include "Blob.h"

template<typename TYPE>
void Blob<TYPE>::init(unsigned int size) {
  _value = (TYPE *)calloc(size, sizeof(TYPE));
  void *value = _value;
  size_t s = size;

  _p = reinterpret_cast<TYPE*>(value);
  _size = size;
}