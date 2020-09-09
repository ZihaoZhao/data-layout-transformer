/*
 * @Author       : Zihao Zhao
 * @E-mail       : 18212020051@fudan.edu.cn
 * @Company      : Fudan University iBiCAS
 * @Date         : 2020-09-09 11:14:55
 * @LastEditors  : Zihao Zhao
 * @LastEditTime : 2020-09-09 15:11:38
 * @FilePath     : /data-layout-transformer/main.cpp
 * @Description  : 
 */

#include "stdio.h"
#include "src/Index.h"
#include "src/Shape.h"
#include "src/Blob.h"
#include "src/Tensor.h"

int main(){
    vector<Index> shape;
    shape.push_back(Index(0, 16));
    shape.push_back(Index(1, 8));
    shape.push_back(Index(2, 4));
    shape.push_back(Index(3, 32));

    Shape shape_input({16, 8, 4, 32}); 
    for (unsigned int i = 0; i < shape_input.size(); i++)
        cout << shape_input[i] << endl;
}