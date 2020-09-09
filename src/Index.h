/*
 * @Author       : Zihao Zhao
 * @E-mail       : 18212020051@fudan.edu.cn
 * @Company      : Fudan University, iBiCAS
 * @Date         : 2020-09-09 14:26:50
 * @LastEditors  : Zihao Zhao
 * @LastEditTime : 2020-09-09 15:02:12
 * @FilePath     : /data-layout-transformer/src/Index.h
 * @Description  : 
 */

#ifndef __INDEX_H__
#define __INDEX_H__

#include <iostream>

using namespace std;

class Index {
public:
    Index(unsigned int order, unsigned int size);
  

    operator unsigned int(){ return _size; }

private:
  unsigned int _order;
  unsigned int _size;

  void init(unsigned int size);
};

#endif