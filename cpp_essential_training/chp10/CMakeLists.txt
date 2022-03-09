cmake_minimum_required(VERSION 3.16.3)

project(chp10)

add_executable(${PROJECT_NAME} deal_cards.cpp)

add_subdirectory(deck)

target_link_libraries(${PROJECT_NAME} deck)