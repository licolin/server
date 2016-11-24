function(AUTO_FILES FOLDER FILTER PATTERN)
  if(ARGC GREATER 3)
    set(AUTO_FILES_EXCLUDE ${ARGN})
  else()
    set(AUTO_FILES_EXCLUDE)
  endif()
  file(GLOB AUTO_FILES_FILES RELATIVE ${CMAKE_CURRENT_SOURCE_DIR} "${FOLDER}/*")
  set(AUTO_FILES_FOLDER_FILES)
  foreach(AUTO_FILES_FILE ${AUTO_FILES_FILES})
    if(IS_DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}/${AUTO_FILES_FILE}")
      AUTO_FILES(${AUTO_FILES_FILE} ${FILTER} ${PATTERN} ${AUTO_FILES_EXCLUDE})
    elseif("${AUTO_FILES_FILE}" MATCHES "${PATTERN}")
      if(NOT AUTO_FILES_EXCLUDE)
        list(APPEND AUTO_FILES_FOLDER_FILES ${AUTO_FILES_FILE})
      elseif(NOT "${AUTO_FILES_FILE}" MATCHES "${AUTO_FILES_EXCLUDE}")
        list(APPEND AUTO_FILES_FOLDER_FILES ${AUTO_FILES_FILE})
      endif()
    endif()
  endforeach()
  string(REPLACE "./" "" AUTO_FILES_FILTER ${FOLDER})
  string(REPLACE "/" "\\" AUTO_FILES_FILTER ${AUTO_FILES_FILTER})
  if("${AUTO_FILES_FILTER}" STREQUAL ".")
    source_group(${FILTER} FILES ${AUTO_FILES_FOLDER_FILES})
  else()
    source_group(${FILTER}\\${AUTO_FILES_FILTER} FILES ${AUTO_FILES_FOLDER_FILES})
  endif()
  set(src ${src} ${AUTO_FILES_FOLDER_FILES} PARENT_SCOPE)
endfunction()
