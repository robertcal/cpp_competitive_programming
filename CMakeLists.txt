cmake_minimum_required(VERSION 3.13)
project(cpp_competitive_programming)

set(CMAKE_CXX_STANDARD 14)

#以下を参考に、STLコンテナの中身が見えるように設定
#https://pleiades.io/help/clion/configuring-debugger-options.html
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -static-libstdc++")
set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -gdwarf-3")
set(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -gdwarf-3")

add_executable(A AtCoder/ABC/173/A.cpp)
add_executable(B AtCoder/ABC/173/B.cpp)
add_executable(C AtCoder/ABC/034/C.cpp)
add_executable(D AtCoder/ABC/173/D.cpp)
add_executable(E AtCoder/ABC/173/E.cpp)
add_executable(F AtCoder/ABC/173/F.cpp)
add_executable(G CodeJam/2020/Qualification_Round/Parenting_Partnering_Returns.cpp)


add_executable(H AtCoder/others/past202005/H.cpp)