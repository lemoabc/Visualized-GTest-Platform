add_executable(ModuleBTest
    main.cpp
    ModuleBTest.cpp
    StringUtilBasicTest.cpp
    StringUtilTrimTest.cpp
    StringUtilSplitJoinTest.cpp
)

target_link_libraries(ModuleBTest
    PRIVATE
    ModuleB
    GTest::gtest
    # GTest::gtest_main
)

set_target_properties(ModuleBTest PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin"
)

install(TARGETS ModuleBTest
    RUNTIME DESTINATION bin
)