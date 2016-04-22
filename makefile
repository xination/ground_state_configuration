all:ground_state

ground_state:ground_state.o
	g++ -o ground_state ground_state.o

ground_state.o:ground_state.cpp
	g++ -c -ggdb ground_state.cpp


