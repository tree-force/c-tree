// Copyright 2017 The Tree-Force Authors. All rights reserved.
// Use of this source code is governed by a MIT-style
// license that can be found in the LICENSE file.

// Description: definitions of structures used to build the trees

#include "../include/metrics.h"
#include "../test/util.c"

#define OK_TEST "\t+OK"
#define FAIL_TEST "\t-FAIL"

void test_entropy_call()
{
	int labels[5] = {1,2,3,4,5};
	int index[5] ={0,1,2,3,4};

	float test_res = entropy(labels, index);
	print_info(">>>Test entropy call");

	if (test_res)
	{
		print_ok(OK_TEST);
	}
	else
	{
		print_error(FAIL_TEST);	
	}

}

void test_entropy_value()
{
	int labels[5] = {1,2,3,4,5};
	int index[5] ={0,1,2,3,4};

	float test_res = entropy(labels, index);
	print_info(">>>Test entropy value returned");

	if (! test_res)
	{
		print_ok(OK_TEST);
	}
	else
	{
		print_error(FAIL_TEST);	
	}

}


void metrics_test_groups(void)
{
	test_entropy_call();
	test_entropy_value();
}
