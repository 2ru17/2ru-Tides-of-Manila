Description:  Changelog Files for the turn-based game "Tides of Manila: A Merchant's Quest" 
Programmed by: <Neil Jr. L. Gutang>
Last modified: 2024-11-21
*Changelogs were done before the creation of this git repo*

# Change Log
All notable changes to this project will be documented in this file.

The format is based on [Keep a Changelog](http://keepachangelog.com/)
and this project adheres to [Semantic Versioning](http://semver.org/).

## [2.4.1] - 2024-11-21
### Changed
- Changed a function where it only increments when travelling to another place, not when cancelling

## [2.3.0] - 2024-11-07

### Added
- Added a Loading Bar Line

### Changed
- Modified game mechanics so that turns only increment when traveling.
- Updated UI elements for better user experience.

### Fixed
- Resolved bug related to the new game mechanic change where turns only increment during travel. 


## [2.2.5] - 2024-11-05

### Added
- Cancel button for traveling ports.
- Graphics for buy, sell, and travel screens.
- New line after each option for improved readability.
- New lines (`\n`) after every turn for clarity.

### Changed
- Centered game title.
- Centered boat in navigation.
- Converted navigation options to table format.

### Testing
- Bug hunting.
- Developed a PDF with test cases.

## [2.1.3] - 2024-11-04

### Changed
- [GAMEBACKEND.C] [GAMEBACKEND.H]  
  Removed `clearInputBuffer()` in functions to allow infinite loops.

## [2.0.0] - 2024-11-02

### Added
- [GAMEBACKEND.C]  
  Upgraded the game UI (formatting improvements).  
  Added buy and sell graphics.

### Fixed
- [GAMEBACKEND.C]  
  Fixed the day counter and `getDifficulty` function to prevent the possibility of a storm at the start of the game.

## [1.2.7] - 2024-10-21

### Changed
- [GAMEBACKEND.C]  
  Updated the buy and sell function to allow 'X' for transaction cancellation.

### Fixed
- [GAMEBACKEND.C]  
  Fixed return handling in buy and sell functions to prevent infinite loops during transactions.

## [1.2.6] - 2024-10-20

### Added
- [MAIN.C]  
  Created `main.c` for testing completed functions.
- [GAMEBACKEND.C]  
  Added a function to prevent infinite loops without using `getChar()`.

### Changed
- [GAMEBACKEND.C]  
  Implemented defined values from `gamebackend.h` properly.  
  Revised code to prevent early returns.

## [1.2.3] - 2024-10-19

### Added
- [GAMEBACKEND.C]  
  Defined functions included in the header file.

### Changed
- [GAMEBACKEND.H]  
  Re-added defined values for use in `gamebackend.c`.

### Fixed
- [GAMEBACKEND.C]  
  Removed and reformatted functions due to project restrictions, including `getChar()` and improper use of `break` and `continue`.

## [1.2.2] - 2024-10-18

### Added
- [GAMEBACKEND.C]  
  Defined functions in the header file.

### Changed
- [GAMEBACKEND.H]  
  Removed unnecessary functions that could be integrated into others.

## [1.2.0] - 2024-10-15

### Added
- [GAMEBACKEND.H]  
  Added new, manageable functions.

### Changed
- [GAMEBACKEND.H]  
  Merged previous header files into a single file for easier tracking.

## [1.1.5] - 2024-10-13

### Added
- [MAIN.C]  
  Created `main.c` to test functions.
- [GAMEPROCESS.H]  
  Added `showStormOccurence()` function for random storm events.

### Fixed
- [DESIGN.C]  
  Fixed rendering issues in the terminal.
- [PRICES.C]  
  Fixed functions handling random pricing.

## [1.1.0] - 2024-10-10

### Added
- [DESIGN.C]  
  Added ASCII art for the user interface.
- [PRICES.C]  
  Applied project specifications for market prices based on location.
- [GAMEPROCESS.C]  
  Defined functions for core game processes (e.g., navigation, buy screen).

## [1.0.0] - 2024-10-08

### Added
- [DESIGN.H]  
  Added designer functions for the user interface.
- [PRICES.H]  
  Defined values according to project specifications.
- [GAMEPROCESS.H]  
  Created functions for game processes (e.g., navigation, buy screen).

 
