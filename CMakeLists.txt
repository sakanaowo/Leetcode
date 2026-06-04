cmake_minimum_required(VERSION 4.2)
project(Leetcode)

# Cấu hình chuẩn C++17 hoặc C++20 tùy bạn chọn
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# 1. Tự động tìm tất cả các file .cpp trong thư mục gốc
file(GLOB ALL_SOURCES "*.cpp")

# 2. Vòng lặp duyệt qua từng file để tạo một hàm main độc lập
foreach(SOURCE_FILE ${ALL_SOURCES})
    # Lấy tên file không bao gồm phần mở rộng (ví dụ: "90 - Subset II")
    get_filename_component(TARGET_NAME ${SOURCE_FILE} NAME_WE)

    # Thay thế khoảng trống và ký tự đặc biệt thành dấu gạch dưới để an toàn cho target name
    string(REGEX REPLACE "[^a-zA-OR-Z0-9_]" "_" TARGET_NAME ${TARGET_NAME})

    # Tạo target chạy độc lập cho từng file
    add_executable(${TARGET_NAME} ${SOURCE_FILE})
endforeach()
