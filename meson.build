project('bitsim', 'cpp',
  version : '0.1',
  default_options : ['warning_level=3',
                     'cpp_std=c++14'])

raylibdep = dependency('raylib')

raylibcpp = include_directories('raylib-cpp/include')
include = include_directories('include')

sources = files('src/init.cpp', 'src/bitsim.cpp')

exe = executable('bitsim', sources,
  install : true, dependencies : raylibdep, include_directories : [raylibcpp, include])

test('basic', exe)
