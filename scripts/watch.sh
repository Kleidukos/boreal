#!/usr/bin/env bash

# if hash ghciwatch 2>/dev/null; then
#     ghciwatch --watch boreal-daemon --command "cabal repl boreal-daemon"
# else
    ghcid -c "cabal repl all --enable-multi-repl all"
# fi
