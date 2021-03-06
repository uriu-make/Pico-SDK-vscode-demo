# Generated Cmake Pico project file

cmake_minimum_required(VERSION 3.13)

set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 17)

# initalize pico_sdk from installed location
# (note this can come from environment, CMake cache etc)

# Pull in Raspberry Pi Pico SDK (must be before project)
include(pico_sdk_import.cmake)

project(test C CXX ASM)

# Initialise the Raspberry Pi Pico SDK
pico_sdk_init()

# Add executable. Default name is the project name, version 0.1

add_executable(test test.cpp )

pico_set_program_name(test "test")
pico_set_program_version(test "0.1")

pico_enable_stdio_usb(test 0)
pico_enable_stdio_uart(test 0)
# Add the standard library to the build
target_link_libraries(
    test pico_stdlib 
    # pico_stdio
    pico_bootsel_via_double_reset
    )
target_compile_definitions(
    test PRIVATE
    # PICO_STDIO_USB_RESET_INTERFACE_SUPPORT_RESET_TO_BOOTSEL
    # PICO_STDIO_USB_ENABLE_RESET_VIA_VENDOR_INTERFACE
    )

pico_add_extra_outputs(test)

