# Paddel-Ball

A Pong-style arcade game built with **C++, raylib, and CMake**, combining classic paddle-and-ball gameplay with iterative gameplay tuning and measured UI optimization.

## Development highlights

- **More challenging rallies:** the ball speeds up by **5% per successful paddle hit**, capped at **700 pixels/second** and a reset to base speed for each new rally ([PR #17](https://github.com/lemonzninja/Paddel-Ball/pull/17)).
- **~86× faster cached text measurement:** caching text widths reduced the reported cost for 11 game-over labels from **~9,861 ns to ~114 ns per frame** ([PR #16](https://github.com/lemonzninja/Paddel-Ball/pull/16)).
- **~21% lower game-over update time through layout caching:** the [PR #14](https://github.com/lemonzninja/Paddel-Ball/pull/14) benchmark measured **~48.82 ns → ~38.56 ns per call** over 10 million game-over updates, reusing layout calculations until screen dimensions changed.

*Performance figures are the recorded benchmarks for these individual changes, not whole-game frame-rate gains. The layout result describes the PR #14 implementation; the current refactored UI recalculates layout.*
