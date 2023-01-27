add_requires("raylib")

target("bitsim")
set_kind("binary")
add_files("src/*.cpp")
add_includedirs("raylib-cpp/include")
add_includedirs("include")
add_packages("raylib")
