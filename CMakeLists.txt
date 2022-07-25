cmake_minimum_required(VERSION 3.20)

# Project
project("Hm" VERSION 0.0)


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

# SDL2: Disable install
set(SDL2_DISABLE_INSTALL ON)

# SDL2: Build shared
set(SDL_STATIC OFF)
set(SDL_SHARED ON)
set(BUILD_SHARED_LIBS ON)

# SDL2: Linux options
set(SDL_WAYLAND ON)

# SDL2 Image: Disable install
set(SDL2IMAGE_INSTALL OFF)

# SDL2 Image: Build shared
set(SDL2IMAGE_DEPS_SHARED ON)

# SDL2 Image: disable samples and tests
set(SDL2IMAGE_SAMPLES OFF)
set(SDL2IMAGE_TESTS OFF)

# SDL2: Add dir
add_subdirectory("${PROJECT_SOURCE_DIR}/Deps/SDL")

# SDL2 Image: add dir
add_subdirectory("${PROJECT_SOURCE_DIR}/Deps/SDL_image")