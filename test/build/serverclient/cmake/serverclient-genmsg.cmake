# generated from genmsg/cmake/pkg-genmsg.cmake.em

message(STATUS "serverclient: 0 messages, 1 services")

set(MSG_I_FLAGS "-Istd_msgs:/opt/ros/noetic/share/std_msgs/cmake/../msg")

# Find all generators
find_package(gencpp REQUIRED)
find_package(geneus REQUIRED)
find_package(genlisp REQUIRED)
find_package(gennodejs REQUIRED)
find_package(genpy REQUIRED)

add_custom_target(serverclient_generate_messages ALL)

# verify that message/service dependencies have not changed since configure



get_filename_component(_filename "/home/hmxroot/Documents/ros/test/src/serverclient/srv/addints.srv" NAME_WE)
add_custom_target(_serverclient_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "serverclient" "/home/hmxroot/Documents/ros/test/src/serverclient/srv/addints.srv" ""
)

#
#  langs = gencpp;geneus;genlisp;gennodejs;genpy
#

### Section generating for lang: gencpp
### Generating Messages

### Generating Services
_generate_srv_cpp(serverclient
  "/home/hmxroot/Documents/ros/test/src/serverclient/srv/addints.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/serverclient
)

### Generating Module File
_generate_module_cpp(serverclient
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/serverclient
  "${ALL_GEN_OUTPUT_FILES_cpp}"
)

add_custom_target(serverclient_generate_messages_cpp
  DEPENDS ${ALL_GEN_OUTPUT_FILES_cpp}
)
add_dependencies(serverclient_generate_messages serverclient_generate_messages_cpp)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/hmxroot/Documents/ros/test/src/serverclient/srv/addints.srv" NAME_WE)
add_dependencies(serverclient_generate_messages_cpp _serverclient_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(serverclient_gencpp)
add_dependencies(serverclient_gencpp serverclient_generate_messages_cpp)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS serverclient_generate_messages_cpp)

### Section generating for lang: geneus
### Generating Messages

### Generating Services
_generate_srv_eus(serverclient
  "/home/hmxroot/Documents/ros/test/src/serverclient/srv/addints.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/serverclient
)

### Generating Module File
_generate_module_eus(serverclient
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/serverclient
  "${ALL_GEN_OUTPUT_FILES_eus}"
)

add_custom_target(serverclient_generate_messages_eus
  DEPENDS ${ALL_GEN_OUTPUT_FILES_eus}
)
add_dependencies(serverclient_generate_messages serverclient_generate_messages_eus)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/hmxroot/Documents/ros/test/src/serverclient/srv/addints.srv" NAME_WE)
add_dependencies(serverclient_generate_messages_eus _serverclient_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(serverclient_geneus)
add_dependencies(serverclient_geneus serverclient_generate_messages_eus)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS serverclient_generate_messages_eus)

### Section generating for lang: genlisp
### Generating Messages

### Generating Services
_generate_srv_lisp(serverclient
  "/home/hmxroot/Documents/ros/test/src/serverclient/srv/addints.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/serverclient
)

### Generating Module File
_generate_module_lisp(serverclient
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/serverclient
  "${ALL_GEN_OUTPUT_FILES_lisp}"
)

add_custom_target(serverclient_generate_messages_lisp
  DEPENDS ${ALL_GEN_OUTPUT_FILES_lisp}
)
add_dependencies(serverclient_generate_messages serverclient_generate_messages_lisp)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/hmxroot/Documents/ros/test/src/serverclient/srv/addints.srv" NAME_WE)
add_dependencies(serverclient_generate_messages_lisp _serverclient_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(serverclient_genlisp)
add_dependencies(serverclient_genlisp serverclient_generate_messages_lisp)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS serverclient_generate_messages_lisp)

### Section generating for lang: gennodejs
### Generating Messages

### Generating Services
_generate_srv_nodejs(serverclient
  "/home/hmxroot/Documents/ros/test/src/serverclient/srv/addints.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/serverclient
)

### Generating Module File
_generate_module_nodejs(serverclient
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/serverclient
  "${ALL_GEN_OUTPUT_FILES_nodejs}"
)

add_custom_target(serverclient_generate_messages_nodejs
  DEPENDS ${ALL_GEN_OUTPUT_FILES_nodejs}
)
add_dependencies(serverclient_generate_messages serverclient_generate_messages_nodejs)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/hmxroot/Documents/ros/test/src/serverclient/srv/addints.srv" NAME_WE)
add_dependencies(serverclient_generate_messages_nodejs _serverclient_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(serverclient_gennodejs)
add_dependencies(serverclient_gennodejs serverclient_generate_messages_nodejs)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS serverclient_generate_messages_nodejs)

### Section generating for lang: genpy
### Generating Messages

### Generating Services
_generate_srv_py(serverclient
  "/home/hmxroot/Documents/ros/test/src/serverclient/srv/addints.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/serverclient
)

### Generating Module File
_generate_module_py(serverclient
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/serverclient
  "${ALL_GEN_OUTPUT_FILES_py}"
)

add_custom_target(serverclient_generate_messages_py
  DEPENDS ${ALL_GEN_OUTPUT_FILES_py}
)
add_dependencies(serverclient_generate_messages serverclient_generate_messages_py)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/hmxroot/Documents/ros/test/src/serverclient/srv/addints.srv" NAME_WE)
add_dependencies(serverclient_generate_messages_py _serverclient_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(serverclient_genpy)
add_dependencies(serverclient_genpy serverclient_generate_messages_py)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS serverclient_generate_messages_py)



if(gencpp_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/serverclient)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/serverclient
    DESTINATION ${gencpp_INSTALL_DIR}
  )
endif()
if(TARGET std_msgs_generate_messages_cpp)
  add_dependencies(serverclient_generate_messages_cpp std_msgs_generate_messages_cpp)
endif()

if(geneus_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/serverclient)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/serverclient
    DESTINATION ${geneus_INSTALL_DIR}
  )
endif()
if(TARGET std_msgs_generate_messages_eus)
  add_dependencies(serverclient_generate_messages_eus std_msgs_generate_messages_eus)
endif()

if(genlisp_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/serverclient)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/serverclient
    DESTINATION ${genlisp_INSTALL_DIR}
  )
endif()
if(TARGET std_msgs_generate_messages_lisp)
  add_dependencies(serverclient_generate_messages_lisp std_msgs_generate_messages_lisp)
endif()

if(gennodejs_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/serverclient)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/serverclient
    DESTINATION ${gennodejs_INSTALL_DIR}
  )
endif()
if(TARGET std_msgs_generate_messages_nodejs)
  add_dependencies(serverclient_generate_messages_nodejs std_msgs_generate_messages_nodejs)
endif()

if(genpy_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/serverclient)
  install(CODE "execute_process(COMMAND \"/usr/bin/python3\" -m compileall \"${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/serverclient\")")
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/serverclient
    DESTINATION ${genpy_INSTALL_DIR}
  )
endif()
if(TARGET std_msgs_generate_messages_py)
  add_dependencies(serverclient_generate_messages_py std_msgs_generate_messages_py)
endif()
