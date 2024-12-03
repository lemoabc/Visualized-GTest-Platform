add_executable(ModuleATest
    main.cpp
    ModuleATest.cpp
    ModuleATest.h
    gui/widget/button_test.cpp
    gui/menu/menu_test.cpp
)

target_link_libraries(ModuleATest
    PRIVATE
    ModuleA
    GTest::gtest
    # GTest::gtest_main
)

set_target_properties(ModuleATest PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin"
)

install(TARGETS ModuleATest
    RUNTIME DESTINATION bin
)
