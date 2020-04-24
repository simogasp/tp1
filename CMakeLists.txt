cmake_minimum_required(VERSION 3.10)
project(tp1 VERSION 0.1 LANGUAGES C CXX)

set(CMAKE_CXX_STANDARD 11)

set(OpenGL_GL_PREFERENCE "GLVND")
find_package(OpenGL REQUIRED)
message(STATUS "OPENGL_gl_LIBRARY: ${OPENGL_gl_LIBRARY}")
find_package(GLUT REQUIRED)

add_executable(helloteapot helloteapot.cpp)
target_include_directories(helloteapot PUBLIC ${OPENGL_INCLUDE_DIR} ${GLUT_INCLUDE_DIR})
target_link_libraries(helloteapot PUBLIC ${OPENGL_opengl_LIBRARY} ${OPENGL_glu_LIBRARY} ${GLUT_LIBRARIES})
#target_link_libraries(helloteapot OpenGL::OpenGL OpenGL::GLU GLUT::GLUT)

add_executable(moreteapots moreteapots.cpp)
target_include_directories(moreteapots PUBLIC ${OPENGL_INCLUDE_DIR} ${GLUT_INCLUDE_DIR})
target_link_libraries(moreteapots PUBLIC ${OPENGL_opengl_LIBRARY} ${OPENGL_glu_LIBRARY} ${GLUT_LIBRARIES})
#target_link_libraries(moreteapots OpenGL::OpenGL OpenGL::GLU GLUT::GLUT)

#add_executable(navigator navigator.cpp)
#target_link_libraries(navigator OpenGL::OpenGL OpenGL::GLU GLUT::GLUT)