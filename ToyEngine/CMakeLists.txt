project(ToyEngine)

include(../qtconfig.cmake)
include(../module.cmake)

include_directories(
    .
    ..
)

# 获取当前目录下的所有文件，放到CUR_DIRS中
find_cur_all_files(CUR_DIRS)

# 将CUR_DIRS中的文件按照目录归类
source_group_by_dir(CUR_DIRS)

# 排除单个文件
#list(REMOVE_ITEM CUR_DIRS 
#    ${PROJECT_ROOT_DIR}/xxxx.cpp
#)

#设置连接库目录
#link_directories()

# 设置连接库名
#link_libraries()

add_definitions(-DEXPORT_TOY_ENGINE)

add_library(${PROJECT_NAME} SHARED ${CUR_DIRS})

find_package(Qt5
    COMPONENTS
    core 
    gui 
    widgets
    REQUIRED
)

# 对应vs中项目依赖
# add_dependencies(
#     ${PROJECT_NAME}
#     other_project_name
#     other_project_name
# )

# 同link_libraries，但必须在add_executable，add_library之后
target_link_libraries(${PROJECT_NAME}  PRIVATE
    Qt5::Core 
    Qt5::Gui 
    Qt5::Widgets 
)