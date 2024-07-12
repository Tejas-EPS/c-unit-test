# Define test component directories
TEST_DIRS := $(wildcard */)

# Print directories for verification
$(info Directories: $(TEST_DIRS))

# Default rule: run all tests
.PHONY: all $(TEST_DIRS) clean
all: $(TEST_DIRS)

# Run tests in each directory
$(TEST_DIRS):
	@echo "Running tests in $@"
	-$(MAKE) -C $@

# Clean tests in each directory
clean:
	@echo "Cleaning tests in directories: $(TEST_DIRS)"
	@$(foreach DIR, $(TEST_DIRS), echo "Cleaning $(DIR)"; -$(MAKE) -C $(DIR) clean;)


