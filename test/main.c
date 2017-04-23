// Copyright 2017 The Tree-Force Authors. All rights reserved.
// Use of this source code is governed by a MIT-style
// license that can be found in the LICENSE file.

// Description: run all tests

#include "../test/util.c"
#include "../test/metrics_test.c"


int main(void)
{
	printf("\n");
	print_ok("################# STARTING TESTS #################");
	
	printf("\n");
	print_ok("+METRIC TESTS:");
	metrics_test_groups();


	return 0;
}
