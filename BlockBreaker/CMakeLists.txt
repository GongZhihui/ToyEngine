project(BlockBreaker)
include(../module.cmake)

include_directories(
    # .
    ..
)
# link_directories(
#     ${CMAKE_ARCHIVE_OUTPUT_DIRECTORY}
# )

find_cur_all_files(CUR_DIRS)
source_group_by_dir(CUR_DIRS)

add_executable(${PROJECT_NAME} ${CUR_DIRS})
target_link_libraries(${PROJECT_NAME}
   ToyEngine
)
