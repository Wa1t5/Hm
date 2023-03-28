cmake_minimum_required(VERSION 3.20)
set(CMAKE_CXX_STANDARD 23)

# Project
project("Hm" VERSION 0.0)

######### Link libraries #########

# SDL2
find_package(SDL2 CONFIG REQUIRED)
link_libraries(
    $<TARGET_NAME_IF_EXISTS:SDL2::SDL2main>
    $<IF:$<TARGET_EXISTS:SDL2::SDL2>,SDL2::SDL2,SDL2::SDL2-static>
)

# SDL2_image
find_package(SDL2_image CONFIG REQUIRED)
link_libraries(
    $<IF:$<TARGET_EXISTS:SDL2_image::SDL2_image>,SDL2_image::SDL2_image,SDL2_image::SDL2_image-static>
)

# Need to be built as a STATIC library
# Project files
add_library("Hm" STATIC
            "${PROJECT_SOURCE_DIR}/Include/Entity.hpp"
            "${PROJECT_SOURCE_DIR}/Src/Framework/Entity.cpp"
            "${PROJECT_SOURCE_DIR}/Include/EntityManager.hpp"
            "${PROJECT_SOURCE_DIR}/Src/Framework/EntityManager.cpp"
            "${PROJECT_SOURCE_DIR}/Include/Game.hpp"
            "${PROJECT_SOURCE_DIR}/Src/Framework/Game.cpp"
            "${PROJECT_SOURCE_DIR}/Include/Input.hpp"
            "${PROJECT_SOURCE_DIR}/Src/Framework/Input.cpp"
            "${PROJECT_SOURCE_DIR}/Include/Physics.hpp"
            "${PROJECT_SOURCE_DIR}/Src/Framework/Physics.cpp"
            "${PROJECT_SOURCE_DIR}/Include/Polygons.hpp"
            "${PROJECT_SOURCE_DIR}/Src/Framework/Polygons.cpp"
            "${PROJECT_SOURCE_DIR}/Include/Renderer.hpp"
            "${PROJECT_SOURCE_DIR}/Src/Framework/Renderer.cpp"
            "${PROJECT_SOURCE_DIR}/Include/ResourceLoader.hpp"
            "${PROJECT_SOURCE_DIR}/Src/Framework/ResourceLoader.cpp"
            "${PROJECT_SOURCE_DIR}/Include/Scene.hpp"
            "${PROJECT_SOURCE_DIR}/Src/Framework/Scene.cpp"
            "${PROJECT_SOURCE_DIR}/Include/SceneManager.hpp"
            "${PROJECT_SOURCE_DIR}/Src/Framework/SceneManager.cpp"
            "${PROJECT_SOURCE_DIR}/Include/Sprite.hpp"
            "${PROJECT_SOURCE_DIR}/Src/Framework/Sprite.cpp"
            "${PROJECT_SOURCE_DIR}/Include/Vector2.hpp"
            "${PROJECT_SOURCE_DIR}/Src/Framework/Vector2.cpp"
            "${PROJECT_SOURCE_DIR}/Include/Window.hpp"
            "${PROJECT_SOURCE_DIR}/Src/Framework/Window.cpp"
            )

######################## Testing

# Hm | Link the framework to the testing project
link_libraries("${PROJECT_SOURCE_DIR}/build/Hm.lib")
include_directories("${PROJECT_SOURCE_DIR}/Include/Game.hpp")

project("Testing")
add_executable("Testing" Testing/main.cpp)
