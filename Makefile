file_name=$(src)
out=$(basename $(file_name))
all: $(out)
.clean:
	rm $(out)
$(out):
	g++ -o $(out) $(file_name)
	./$(out)
