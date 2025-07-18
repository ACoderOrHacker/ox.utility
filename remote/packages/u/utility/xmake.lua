package("utility")
    set_kind("library", {headeronly = true})
    set_description("Utility Tools Library")

    add_urls("https://github.com/ACoderOrHacker/ox.utility.git")
    add_versions("0.1.0", "6bd5f07afa561cb9f6a9e261e4c9bbe2b9db724a")

    on_install(function (package)
        import("package.tools.xmake").install(package, configs)
    end)
