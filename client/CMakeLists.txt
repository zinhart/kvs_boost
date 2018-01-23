include_directories(./include)
set(SRCS src/client.cc)
add_executable(client ${SRCS})
target_link_libraries(client common)

