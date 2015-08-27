default: all

prepare:
	mkdir -p ./_build 

all: prepare
	cd ./_build && cmake .. && make 2>&1 | tee log

config: prepare
	cd ./_build && ccmake ..

run:
	./_build/example/hello
