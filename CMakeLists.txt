cmake_minimum_required(VERSION 3.20)
set(CMAKE_CXX_STANDARD 23)

# Project
project("Hm" VERSION 0.0)

######### Link libraries #########

# SDL2
add_subdirectory("${PROJECT_SOURCE_DIR}/Deps/SDL")
link_libraries("${PROJECT_SOURCE_DIR}/Build/Deps/SDL/SDL3.lib")
include_directories("${PROJECT_SOURCE_DIR}/Deps/SDL/include")

# SDL2_image
add_subdirectory("${PROJECT_SOURCE_DIR}/Deps/SDL_image")
link_libraries("${PROJECT_SOURCE_DIR}/Build/Deps/SDL_image/SDL3_image.lib")
include_directories("${PROJECT_SOURCE_DIR}/Deps/SDL_image/include")

# Need to be built as a STATIC library
# Project files
include_directories("${PROJECT_SOURCE_DIR}/Include")
add_library("Hm" STATIC
            "${PROJECT_SOURCE_DIR}/Include/Hm/Entity.hpp"
            "${PROJECT_SOURCE_DIR}/Src/Framework/Entity.cpp"
            "${PROJECT_SOURCE_DIR}/Include/Hm/EntityManager.hpp"
            "${PROJECT_SOURCE_DIR}/Src/Framework/EntityManager.cpp"
            "${PROJECT_SOURCE_DIR}/Include/Hm/Game.hpp"
            "${PROJECT_SOURCE_DIR}/Src/Framework/Game.cpp"
            "${PROJECT_SOURCE_DIR}/Include/Hm/Input.hpp"
            "${PROJECT_SOURCE_DIR}/Src/Framework/Input.cpp"
            "${PROJECT_SOURCE_DIR}/Include/Hm/Physics.hpp"
            "${PROJECT_SOURCE_DIR}/Src/Framework/Physics.cpp"
            "${PROJECT_SOURCE_DIR}/Include/Hm/Polygons.hpp"
            "${PROJECT_SOURCE_DIR}/Src/Framework/Polygons.cpp"
            "${PROJECT_SOURCE_DIR}/Include/Hm/Renderer.hpp"
            "${PROJECT_SOURCE_DIR}/Src/Framework/Renderer.cpp"
            "${PROJECT_SOURCE_DIR}/Include/Hm/ResourceLoader.hpp"
            "${PROJECT_SOURCE_DIR}/Src/Framework/ResourceLoader.cpp"
            "${PROJECT_SOURCE_DIR}/Include/Hm/Scene.hpp"
            "${PROJECT_SOURCE_DIR}/Src/Framework/Scene.cpp"
            "${PROJECT_SOURCE_DIR}/Include/Hm/SceneManager.hpp"
            "${PROJECT_SOURCE_DIR}/Src/Framework/SceneManager.cpp"
            "${PROJECT_SOURCE_DIR}/Include/Hm/Sprite.hpp"
            "${PROJECT_SOURCE_DIR}/Src/Framework/Sprite.cpp"
            "${PROJECT_SOURCE_DIR}/Include/Hm/Vector2.hpp"
            "${PROJECT_SOURCE_DIR}/Src/Framework/Vector2.cpp"
            "${PROJECT_SOURCE_DIR}/Include/Hm/Window.hpp"
            "${PROJECT_SOURCE_DIR}/Src/Framework/Window.cpp"
            )

######################## Testing

# Hm | Link the framework to the testing project
link_libraries("${PROJECT_SOURCE_DIR}/build/Hm.lib")

############ Examples
project("Testing")
add_executable("Testing" Examples/Testing/Src/main.cpp)
project("Pong")
add_executable("Pong" Examples/Pong/Src/main.cpp)

