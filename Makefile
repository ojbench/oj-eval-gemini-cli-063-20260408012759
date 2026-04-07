SRCS := $(wildcard *.cpp)

code: $(SRCS)
	if [ -n "$(SRCS)" ]; then g++ -O3 -std=c++17 $(SRCS) -o code; else touch code; fi