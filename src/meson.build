# Add all the files needed here
initial_src = [
    'main.c'
]

# if there are any subdirectories, add the subdirectories here,
# and append the subdir variable to initial_src. Repeat in subdir also.

# subdirectory 'lib'
subdir('lib')
# add the initial source to 'lib'
initial_src += lib


# WARN: DO NOT ADD ANYTHING TO 'src' VARIABLE
src = []

# populating the src variable
foreach src_file : initial_src
    src += ('src/' + src_file)
endforeach
