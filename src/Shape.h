/*
 * @Author       : Zihao Zhao
 * @E-mail       : 18212020051@fudan.edu.cn
 * @Company      : Fudan University, iBiCAS
 * @Date         : 2020-09-09 14:34:20
 * @LastEditors  : Zihao Zhao
 * @LastEditTime : 2020-09-09 15:10:48
 * @FilePath     : /data-layout-transformer/src/Shape.h
 * @Description  : 
 */

#ifndef __SHAPE_H__
#define __SHAPE_H__

#include <iostream>
#include <vector>
#include "Index.h"

using namespace std;

class Shape {
public:
  Shape(vector<unsigned int> shape_int);

  inline Index get(unsigned int i) { return shape[i]; }
  int size() { return shape.size(); }
  
  Index operator [](int i) { return shape[i]; }
private:
  vector<Index> shape;

};

#endif