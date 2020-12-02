# Hackfest - Advanced Fuzzing Workshop

**Start here** -> https://github.com/antonio-morales/Hackfest_Advanced_Fuzzing_Workshop/blob/main/Hackfest%20Workshop%20Slides.pdf

## Previous editions
- EkoParty => https://github.com/antonio-morales/EkoParty_Advanced_Fuzzing_Workshop

## Requirements

All you need for the workshop is:
- A **Telegram account**. You will need it to use it to send me your **questions/solutions**
- A running Linux system with an internet connection
- Latest version of **AFL++** installed on the system (https://github.com/AFLplusplus/AFLplusplus#building-and-installing-afl). You can download AFL++ source code at https://github.com/AFLplusplus/AFLplusplus/releases.

### Virtual machine

You also can find an **.OVF virtual machine** with everything already set up for the workshop [here](https://drive.google.com/file/d/1UydxinlwKD847JHdbenO5gv7Xy7p3vJO/view?usp=sharing)

- VM credentials: fuzz/fuzz

After booting the VM, open a terminal and go to 
	```Desktop -> WORKSHOP -> Fuzz 0 -> unrtf```

Then, type:

	afl-fuzz -i ./tests -o afl-output  -- ./bin/unrtf --verbose -P ./lib/unrtf/ @@

If all it's ok, you'll be able to see a lot of AFL crashes :)

## Rules

- It's a CTF-style hands-on workshop.
- There will be 3 different challenges. The goal is to find a reproducible bug on each of them.
- We're looking for exploitable vulnerabilities. In order to be the winner of a challenge, you must provide a crash/PoC. "Theoretical bugs" or code warnings are not welcome, sorry.
- Challenges are intended to be solved by fuzzing, but creative approaches will be encouraged.
- During the workshop you will be able to ask me any questions you might have (**via Telegram at** xxxxxxxxxxxxx). Please **don't share solutions while the challenge is live**.
- I will give you some hints and tips before and during the challenge.
- After each challenge, I will show my solution and I will explain it to you.
- There may be more than one correct solution.


### Awards

The winner of each challenge will receive a coupon to spend in [GitHub Shop](https://github.myshopify.com/). Second place will also be awarded.

## Fuzz Challenge 1 - ESIF RELOAD (V2.0) [45 minutes]

Build:

    gcc HackFest1.c -lcrypto -lssl -w -o hackfest1

Run:

    ./hackfest1 ./AFL/afl_in/file1 output.ppm

## Fuzz Challenge 2 - QSSLANG (Quite Stupid Structured Language) [50 minutes]
Build:

    gcc HackFest2.c -w -o hackfest2

Run:

    ./hackfest2 Example.xml


## Fuzz Challenge 3 - My sweet parser

