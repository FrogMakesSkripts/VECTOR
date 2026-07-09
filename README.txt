g++ -std=c++20 -static -static-libgcc -static-libstdc++ -DUNICODE -D_UNICODE -Irendering_engine/DX3D/include (Get-ChildItem -Recurse -Filter *.cpp).FullName -o VECTOR.exe
