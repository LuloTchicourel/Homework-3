make 1:
	g++ -Wextra -Wpedantic -std=c++14 -I Ejercicio-1/headers -o main Ejercicio-1/main.cpp Ejercicio-1/sources/*.cpp
	./main
	rm main
	rm -rf main.dSYM/
	rm -rf tester.bin