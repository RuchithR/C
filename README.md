# Blackjack Simulator
Random project that came to my mind to practice C programming.
## Features
- Full 52-card deck with suits (Spades, Hearts, Clubs, Diamonds) and ranks (Ace-10, J/Q/K)
- Uses **Chinese Remainder Theorem** for uniform card generation.
- Ace handling (soft 11, auto-reduce to 1 if bust >21)
- Player decisions: Hit/Stand (Y/N input)
- **Split option** when first two cards match (basic casino rule simulation)
- Random dealer score (16-20) for quick playtesting
## How to Play
1. Compile: `gcc blackjack.c -o blackjack -lm`
2. Run: `./blackjack`
3. Follow prompts:
   - Enter `y`/`Y` to **hit**, `n`/`N` to **stand**
   - Split option appears if first two cards match
4. Win/Draw/Loss determined vs. random dealer total

## Tech Stack
- **C** (core implementation)
- `srand()`/`rand()` for deck randomization
- `scanf()` for real-time player input handling
