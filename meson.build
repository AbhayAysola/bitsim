project('bitsim', 'cpp',
  version : '0.1',
  default_options : ['warning_level=3',
                     'cpp_std=c++14'])

raylibdep = dependency('raylib')

exe = executable('bitsim', 'bitsim.cpp',
  install : true, dependencies : raylibdep)

test('basic', exe)
