project(app)

add_executable(${PROJECT_NAME}
	main.cpp
)

target_link_libraries(${PROJECT_NAME}
	PRIVATE
		libs::test_lib
)

target_include_directories(${PROJECT_NAME} PRIVATE ../include)
message("\n" ${INCLUDE_DIRECTORIES} "\n")
