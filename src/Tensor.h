/*
 * @Author       : Zihao Zhao
 * @E-mail       : 18212020051@fudan.edu.cn
 * @Company      : Fudan University, iBiCAS
 * @Date         : 2020-09-09 14:18:16
 * @LastEditors  : Zihao Zhao
 * @LastEditTime : 2020-09-09 14:53:32
 * @FilePath     : /data-layout-transformer/src/Tensor.h
 * @Description  : 
 */

#ifndef __TENSOR_H__
#define __TENSOR_H__

#include <iostream>
#include <vector>

using namespace std;

template<typename TYPE>
class Tensor {
public:
  Tensor(vector<int> shape);

private:
  void *_value;
  TYPE *_p;
  unsigned int _size;

  void init(unsigned int size);
};

#endif