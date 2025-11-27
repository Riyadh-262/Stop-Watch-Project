# Stop-Watch-Project
# Simple Console Countdown Timer (STOP_WATCH_PROJECT.c)

This project is a basic command-line application written in C that functions as a **countdown timer**. Despite being named "STOP WATCH" in the code, it counts *up* from $00:00:00$ until it reaches a user-defined target time.

It is designed to run in a console environment that supports non-standard libraries and ANSI escape codes for screen clearing.

## ✨ Features

* **Time Input:** Accepts target time in Hours, Minutes, and Seconds.
* **Real-time Simulation:** Uses a 1-second delay to simulate accurate time progression.
* **Dynamic Display:** Clears the console screen and updates the time display continuously.
* **Audible Alerts:** Generates a "beep" sound on every second, minute, and hour turnover (using the bell character `\a`).
* **Format:** Displays time in `HH:MM:SS` format.

## ⚠️ Important Note on Dependencies

This code uses several **non-standard** functions (`getch()`, `Sleep()`, and a custom `clrscr()` macro).

* To compile this on **Windows**, you might need to ensure you are linking to the necessary libraries that provide `Sleep()`.
* To compile this on **Linux/macOS**, you may need to replace `Sleep(1000)` with `sleep(1)` or `usleep(1000000)` and ensure the `clrscr()` macro works with your terminal.

## 🛠️ Prerequisites

* A C compiler (like GCC).
* A console/terminal that supports standard C libraries and ANSI escape sequences.

## 🚀 How to Compile and Run

1.  **Save the code:** Save the provided C code into a file named `STOP_WATCH_PROJECT.c`.

2.  **Compile the program** using a C compiler (e.g., GCC). You may need to adjust compilation flags based on your environment, especially for the `Sleep` function.

    ```bash
    # Standard compilation (may require library linking for Sleep)
    gcc STOP_WATCH_PROJECT.c -o timer_app
    ```

3.  **Run the executable:**

    ```bash
    ./timer_app
    ```

## 📖 Usage

1.  When prompted, enter the **target** time you want the timer to count up to.
    ```
    Enter Hour Minute Second: 0 5 0 
    ```
    (The timer will count up to 5 minutes.)

2.  The console will continuously display the time counting up:
    ```
    ####### STOP WATCH #######

             00:00:01

    ##########################
    ```
    (The screen will refresh every second.)

3.  The program terminates when the displayed time ($h:m:s$) matches the target time (`hour:minute:second`).
