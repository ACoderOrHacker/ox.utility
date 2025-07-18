package("utility")
    set_kind("library", {headeronly = true})
    set_description("Utility Tools Library")

    add_urls("https://github.com/ACoderOrHacker/ox.utility.git")
    add_versions("0.1.0", "dd9767d215a51791cecc9ae7c974a1234c33149f")

    on_install(function (package)
        import("package.tools.xmake").install(package, configs)
    end)
