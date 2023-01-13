project('bitsim', 'cpp',
  version : '0.1',
  default_options : ['warning_level=3',
                     'cpp_std=c++14'])

raylibdep = dependency('raylib')

raylibcpp = include_directories('raylib-cpp/include')

exe = executable('bitsim', 'bitsim.cpp',
  install : true, dependencies : raylibdep, include_directories : raylibcpp)

test('basic', exe)
