# ProcMon-Pro

A simple process monitoring tool for Linux systems written in C.

## Features

- List running processes with their PIDs and names
- Display system information (OS, kernel, uptime)
- Clean terminal interface with utility functions

## Files

- `main.c` - Main program entry point
- `process_list.c/h` - Process listing functionality
- `system_info.c/h` - System information display
- `utils.c/h` - Utility functions
- `Makefile` - Build configuration

## Building

```bash
make
```

## Running

```bash
./procmon
```

## Cleaning

```bash
make clean
```
