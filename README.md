<div align="center">
  <img src="imgs/logo.png" width="320px" alt="Maze Escape">
</div>
<br>

<div align="center">
  <img src="https://custom-icon-badges.demolab.com/github/last-commit/marsdevx/maze-escape?logoColor=white&labelColor=2C2C2C&label=Last%20Commit&color=8A2BE2&logo=mark-github" alt="Last Commit">
  <img src="https://custom-icon-badges.demolab.com/static/v1?logoColor=white&labelColor=2C2C2C&label=Platforms&message=macOS%20|%20Linux&color=D32F2F&logo=device-desktop" alt="Platforms">
  <br>
  <img src="https://custom-icon-badges.demolab.com/static/v1?logoColor=white&labelColor=2C2C2C&label=Languages&message=C%20language&color=748ADB&logo=file-code" alt="Languages">
  <img src="https://custom-icon-badges.demolab.com/static/v1?logoColor=white&labelColor=2C2C2C&label=Genre&message=Puzzle&color=F47F42&logo=goal" alt="Genre">
  <img src="https://custom-icon-badges.demolab.com/static/v1?logoColor=white&labelColor=2C2C2C&label=Assets&message=%206%20&color=15CDD3&logo=file-media" alt="Assets">
  <img src="https://custom-icon-badges.demolab.com/static/v1?logoColor=white&labelColor=2C2C2C&label=Levels&message=%204%20&color=00C853&logo=filter" alt="Levels">
</div>

---

# 🧩 Maze Escape

This project is a simple **2D puzzle game** built for educational purposes using the **C language** and the **MiniLibX Graphics Library**. Designed to run on **Linux** and **macOS**, this open-source project showcases the basics of **game development** with **C**.

*	**2D game** using **XPM** images as assets.
*	Includes 6 different asset packs and 4 challenging levels.
*	A perfect introduction to game development with C language.
*	Lightweight and easy to customize for learning.

Explore how C can bring games to life with this opensource puzzle game!

---

## 🖼️ Preview

<div align="center">
  <img src="imgs/preview.png" alt="Preview">
</div>

---

## 🛠️ Installation

To install this project, Launch the Terminal app on your system, and run the commands below. <br>
  - If a pop-up appears prompting you to download the Xcode Command Line Tools after the first command, click “Download” and then run the first command again.

###  macOS

1. **Clone repo**
```bash
git clone https://github.com/marsdevx/maze-escape.git ~/Downloads/Maze-Escape
```

2. **Compile project**
```bash
cd ~/Downloads/Maze-Escape && make macos
```

### 🐧 Linux

1. **Clone repo**
```bash
git clone https://github.com/marsdevx/maze-escape.git ~/Downloads/Maze-Escape
```

2. **Compile project**
```bash
cd ~/Downloads/Maze-Escape && make linux
```

---

## 🚀 Usage

1. **Navigate to the Game Directory**
```bash
cd ~/Downloads/Maze-Escape
```

2. **Run the Game**
```bash
./maze_escape levels/lvl1 textures/pacman
```

3. **Customize Your Game**

You can modify the level and texture by changing the corresponding arguments in the command:

- Levels: Replace `levels/lvl1` with one of the following:
  - `levels/lvl1`
  - `levels/lvl2`
  - `levels/lvl3`
  - `levels/lvl4`
- Textures: Replace `textures/pacman` with one of the following:
  - `textures/pacman`
  - `textures/adventurer`
  - `textures/chicken`
  - `textures/pokemon`
  - `textures/space-ship`
  - `textures/time-adventure`

---

## ⚙️ Advanced Options

### Add Your Own Map

You can add custom maps to the game, as long as they follow these rules:

1. The map must be a `.ber` file.
2. The map can only contain the following characters:

| CHAR | OBJECT        |
|------|---------------|
| 1    | Wall          |
| C    | Collectible   |
| E    | Exit          |
| P    | Player        |
| 0    | Background    |

#### Example of a valid map

```
11111111111
10000P1C001
11111011101
10001000001
101011111E1
11111111111
```

### Add Your Own Textures

You can add custom textures to the game, as long as they follow these rules:

1. The `textures` folder must contain **exactly 5 files**.
2. All files must be in the `.xpm` format.
3. The files must be named as follows:
   - `bg.xpm` (background)
   - `exit.xpm` (exit point)
   - `item.xpm` (collectible items)
   - `player.xpm` (player character)
   - `wall.xpm` (walls)

---

## 📋 License

All the code contained in this repo is licensed under the [MIT License](LICENSE)

```
MIT License

Copyright (c) 2025 marsdevx

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
```