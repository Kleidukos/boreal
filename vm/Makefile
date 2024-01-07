build: ## Build the project
	@touch meson.build
	@meson compile -C build -j $(PROCS)

clean: ## Remove compilation artifacts
	@meson compile -C build --clean

style: ## Run the code styler (clang-format)
	@ninja -C build clang-format 

help:
	@grep -E '^[a-zA-Z_-]+:.*?## .*$$' $(MAKEFILE_LIST) | awk 'BEGIN {FS = ":.* ?## "}; {printf "\033[36m%-30s\033[0m %s\n", $$1, $$2}'

PROCS := $(shell nproc)

.PHONY: all $(MAKECMDGOALS)

.DEFAULT_GOAL := help
