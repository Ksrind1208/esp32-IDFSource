# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.5)

file(MAKE_DIRECTORY
  "D:/SystemFile/EspIDF/Espressif/frameworks/esp-idf-v5.2.2/components/bootloader/subproject"
  "D:/Documents/File_code/esp32IDFCode/projectIntern/build/bootloader"
  "D:/Documents/File_code/esp32IDFCode/projectIntern/build/bootloader-prefix"
  "D:/Documents/File_code/esp32IDFCode/projectIntern/build/bootloader-prefix/tmp"
  "D:/Documents/File_code/esp32IDFCode/projectIntern/build/bootloader-prefix/src/bootloader-stamp"
  "D:/Documents/File_code/esp32IDFCode/projectIntern/build/bootloader-prefix/src"
  "D:/Documents/File_code/esp32IDFCode/projectIntern/build/bootloader-prefix/src/bootloader-stamp"
)

set(configSubDirs )
foreach(subDir IN LISTS configSubDirs)
    file(MAKE_DIRECTORY "D:/Documents/File_code/esp32IDFCode/projectIntern/build/bootloader-prefix/src/bootloader-stamp/${subDir}")
endforeach()
if(cfgdir)
  file(MAKE_DIRECTORY "D:/Documents/File_code/esp32IDFCode/projectIntern/build/bootloader-prefix/src/bootloader-stamp${cfgdir}") # cfgdir has leading slash
endif()
