package("utility")
    set_kind("library", {headeronly = true})
    set_description("Utility Tools Library")

    add_urls("https://github.com/ACoderOrHacker/ox.utility.git")
    add_versions("0.1.0", "9691db4fdd08896a95fcbdefde678a0f1a5d252e")

    on_install(function (package)
        import("package.tools.xmake").install(package, configs)
    end)

    on_test(function (package)
        assert(package:has_cxxfuncs("ox::debugbreak", {includes = "ox/utility/debugbreak.hpp"}))
        assert(package:has_cxxfuncs("ox::bytes_of<int>", {includes = "ox/utility/size.hpp"}))
    end)
