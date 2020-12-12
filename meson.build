# Project information:
#   name: salvador
#   lang: C
#   vern: 0.1
#   default_options: 
#   - warning level = 3 to show all warnings

project(
  'salvador',
  'c',
  version : '0.1',
  default_options : [
    'warning_level=3'
  ]
)

# declare the subdirectory 'src', this provides 
# the variable 'src'
subdir('src')

# declare the executable to 'exe'
exe = executable(
  'salvador',
  src,
  install : true
)

# test the value
test(
  'basic',
  exe
)
