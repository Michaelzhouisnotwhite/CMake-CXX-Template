project(test_lib)

file(GLOB_RECURSE all_srcs *.cpp)

set(LIB_SOURCE_FILE ${all_srcs})
add_library(${PROJECT_NAME} ${LIB_SOURCE_FILE})
add_library(libs::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

target_include_directories(${PROJECT_NAME}
	# PUBLIC
	# 	$<INSTALL_INTERFACE:include>
	# 	$<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
	PRIVATE
		"../include"
		${CMAKE_CURRENT_SOURCE_DIR}
)

# include_directories(../include)
message("\ninclude dir: " ${INCLUDE_DIRECTORIES} "\n")





