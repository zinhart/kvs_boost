include_directories(./include)
set(SRCS src/server.cc)
add_executable(server ${SRCS})
target_link_libraries(server common)
