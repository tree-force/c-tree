// Copyright 2017 The Tree-Force Authors. All rights reserved.
// Use of this source code is governed by a MIT-style
// license that can be found in the LICENSE file.

// Description: definitions of structures used to build the trees




#ifndef STRUCTS_H
#define STRUCTS_H

#include <string.h>
#include <stdint.h>


enum data_type
{
	qualitative_nominal,
	qualitative_ordinal,
	quantitative_discrete,
	quantitative_continuos
};


struct node
{
	char  nodeType[32];
	char  featureName[32];
	float informationGain;
	char  featureCriteria[32];
};


struct leaf
{
	char featureName[32];
};

#endif /*STRUCTS_H*/