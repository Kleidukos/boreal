build: ## Build the project
	@cd boreal-daemon/tree-sitter-boreal && tree-sitter g
	@cabal build all

install: ## Install the binaries in the user local path
	@cabal install exe:boreald
	@cabal install exe:boreal

clean: ## Remove compilation artifacts
	@cabal clean

repl: ## Start a REPL
	@cabal repl --enable-multi-repl all

watch: ## Start a reloading REPL
	@ghcid -c "cabal repl all --enable-multi-repl all"

test: ## Run the test suite
	@cd boreal-daemon/tree-sitter-boreal && tree-sitter t
	@cabal test all

regen-golden: ## Re-generate the golden tests
	@cabal test boreal-test --test-options="--accept"

lint: ## Run the code linter (HLint)
	@find boreal-client boreal-api boreal-daemon/app boreal-daemon/compiler boreal-daemon/test/BorealTest \
			boreal-daemon/test/*.hs  -name "*.hs" \
			| xargs -P $(PROCS) -I {} hlint --refactor-options="-i" --refactor {}

style: ## Run the code styler (stylish-haskell)
	@cabal-fmt -i boreal-*/*.cabal
	@find boreal-client boreal-api boreal-daemon/app boreal-daemon/compiler boreal-daemon/test/BorealTest \
			boreal-daemon/test/*.hs -name "*.hs" \
			| xargs -P $(PROCS) -I {} fourmolu -q --mode inplace {}

tags: ## Run ghc-tags for CTAGS
	@ghc-tags -c boreal-daemon/app boreal-daemon/compiler boreal-daemon/driver boreal-daemon/test/BorealTest \
			boreal-daemon/test/*.hs boreal-client boreal-api

help:
	@grep -E '^[a-zA-Z_-]+:.*?## .*$$' $(MAKEFILE_LIST) | awk 'BEGIN {FS = ":.* ?## "}; {printf "\033[36m%-30s\033[0m %s\n", $$1, $$2}'

PROCS := $(shell nproc)

.PHONY: all $(MAKECMDGOALS)

.DEFAULT_GOAL := help
