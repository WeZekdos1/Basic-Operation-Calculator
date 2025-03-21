add_library(view SHARED view.cpp)

target_include_directories(view PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
target_link_libraries(view PRIVATE basicOp)
