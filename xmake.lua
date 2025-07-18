set_xmakever("2.2.2")
set_project("utility")
set_version("0.1.0")
set_languages("c++03")

includes("@builtin/xpack")
add_includedirs("include")

add_rules("mode.debug", "mode.release")

target("utility")
    set_kind("headeronly")

    add_headerfiles("include/(**.hpp)")
    add_rules("utils.install.cmake_importfiles")
    add_rules("utils.install.pkgconfig_importfiles")
target_end()

option("enable-tests")
    set_default(false)
    target("test")
        set_kind("binary")

        add_files("tests/test.cpp")

        on_install(function (target)
        
        end)
    target_end()
option_end()

xpack("utility")
    set_description("Utility Tools Library")

    add_targets("utility")
xpack_end()
