/*
 * @Author       : Zihao Zhao
 * @E-mail       : 18212020051@fudan.edu.cn
 * @Company      : Fudan University, iBiCAS
 * @Date         : 2020-09-09 14:34:14
 * @LastEditors  : Zihao Zhao
 * @LastEditTime : 2020-09-09 14:50:31
 * @FilePath     : /data-layout-transformer/src/Shape.cpp
 * @Description  : 
 */

#include "Shape.h"


Shape::Shape(vector<unsigned int> shape_int){
    for (unsigned int i = 0; i < shape_int.size(); i++){
        shape.push_back(Index(i, shape_int[i]));
    }
}