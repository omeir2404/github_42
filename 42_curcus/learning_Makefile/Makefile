NAME = libft.a



.PHONY: all say_hello generate clean

all: say_hello generate

say_hello:
	@echo "whazaaaap"

generate:
	@echo "creating empty text files..."
	touch file-{1..1000}.txt

clean:
	@echo "cleaning up..."
	@rm *.txt
	@echo "done!"

hello: hello.c
	gcc hello.c -o hi


TEXT = "42 is awesome"

rule_a:
	@echo $(TEXT)