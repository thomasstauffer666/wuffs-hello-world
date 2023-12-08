
Wuffs is a memory-safe programming language for Wrangling Untrusted File Formats Safely. https://github.com/google/wuffs

# Install Wuffs

- wget https://github.com/google/wuffs/archive/refs/heads/main.zip
- unzip main.zip
- cd wuffs-main
- go install -v ./cmd/wuffs*
- export PATH=$PATH:$HOME/go/bin

# Build & Run

- make
- ./setget

To start playing around, a simple idea is to just modify the set function inside `setget.wuffs` and add e.g. `+ 2`.
