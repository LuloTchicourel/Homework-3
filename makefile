make 1:
	g++ -Wextra -Wpedantic -std=c++17 -I Ejercicio-1/Headers -o main Ejercicio-1/Examples/main.cpp Ejercicio-1/Sources/*.cpp
	./main
	rm main
	rm -rf main.dSYM/
	rm -rf tester.bin

make 2:
	g++ -Wextra -Wpedantic -std=c++17 -I Ejercicio-2/Headers -o main Ejercicio-2/Examples/main.cpp Ejercicio-2/Sources/*.cpp
	./main
	rm main
	rm -rf main.dSYM/
	rm -rf tester.bin

make 3:
	g++ -Wextra -Wpedantic -std=c++17 -I Ejercicio-3/Headers -o main Ejercicio-3/Examples/main.cpp Ejercicio-3/Sources/*.cpp
	./main
	rm main
	rm -rf main.dSYM/
	rm -rf tester.bin