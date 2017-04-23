# compiler and libraries
CC=gcc
OPTIONS= -g -O2 -fpic

# folders of the project
INCLUDE = ./include
SRC=./src
BUILD= ./build
TEST= ./test
RESOURCES= ./resources


############################# c-tree modules #############################

init:
	mkdir $(BUILD)

clean:
	rm -rf $(BUILD)

metrics:
	@echo "COMPILING METRICS: "
	$(CC) -c $(SRC)/metrics.c -o $(BUILD)/metrics.o $(OPTIONS) 
	@echo "\n"

tests:
	@echo "COMPILING TESTS: "
	$(CC) -c $(TEST)/main.c  -o $(BUILD)/main.o
	$(CC) $(BUILD)/*.o  -o $(BUILD)/program
	@echo "\n"	




############################# c-tree builds ##############################
all: clean init metrics


test: clean init metrics  tests
	@echo "\n\n"
	@echo "RUNNING TESTS: "
	$(BUILD)/program


