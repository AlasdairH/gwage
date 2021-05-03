# output
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

file(GLOB SOURCES
    include/*.h
    src/*.cpp
)

add_executable(gwage ${SOURCES})

target_include_directories(gwage PUBLIC include)
