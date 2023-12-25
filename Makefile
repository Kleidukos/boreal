deps: ## Install the dependencies of the backend
	@cabal build --only-dependencies

build: ## Build the project in fast mode
	@cabal build -O0

clean: ## Remove compilation artifacts
	@cabal clean

repl: ## Start a REPL
	@cabal repl

watch: ## Start a reloading REPL
	@ghcid

test: ## Run the test suite
	@cabal test --test-show-details direct

regen-golden: ## Re-generate the golden tests
	@cabal test --test-options="--accept"

lint: ## Run the code linter (HLint)
	@find src test -name "*.hs" | xargs -P $(PROCS) -I {} hlint --refactor-options="-i" --refactor {}

style: ## Run the code styler (stylish-haskell)
	@cabal-fmt -i *.cabal
	@find src test -name "*.hs" | xargs -P $(PROCS) -I {} fourmolu -q --mode inplace {}

help:
	@grep -E '^[a-zA-Z_-]+:.*?## .*$$' $(MAKEFILE_LIST) | awk 'BEGIN {FS = ":.* ?## "}; {printf "\033[36m%-30s\033[0m %s\n", $$1, $$2}'

PROCS := $(shell nproc)

.PHONY: all $(MAKECMDGOALS)

.DEFAULT_GOAL := help
