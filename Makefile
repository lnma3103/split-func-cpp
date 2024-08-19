MyAnh: main.cpp func.cpp
	@if test -d build; then echo "Da ton tai thu muc build!"; else echo "Thu muc build khong ton tai. Tao thu muc build!"; mkdir build; fi
	g++ main.cpp func.cpp -o ./build/MyAnh
	./build/MyAnh