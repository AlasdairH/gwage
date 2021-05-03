# output
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)



file(GLOB SOURCES
include/*.h
src/*.cpp
external/glad/include/glad/*.h
external/glad/include/KHR/*.h
external/glad/src/*.c
)

add_executable(gwage ${SOURCES})

add_subdirectory(external/glfw)
target_link_libraries(gwage glfw)

find_package(OpenGL REQUIRED)
target_link_libraries(gwage OpenGL::GL)

target_include_directories(gwage PUBLIC include)
target_include_directories(gwage PUBLIC external/glad/include)
target_include_directories(gwage PUBLIC external/glfw/include)

set(CMAKE_SUPPRESS_REGENERATION true)
