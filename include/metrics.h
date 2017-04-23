/* Copyright 2017 The Tree-Force Authors. All rights reserved.
Use of this source code is governed by a MIT-style
license that can be found in the LICENSE file.

Description: ID3 algorithm to create a tree*/


#ifndef METRICS_H
#define METRICS_H

#include <string.h>
#include <stdint.h>
#include "structs.h"


float entropy(int *labels, int *indexPosition);
float gini(int *labels, int *indexPosition);



#endif /*STRUCTS_H*/