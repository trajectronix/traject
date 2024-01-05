## Compiler Support
- GCC >= 13
- Clang >= 17
- Microsoft Visual C++ cl >= 19.36.32522

## C++ standard library support
- GCC libstdc++
- LLVM libc++
- MSVC STL

## Architecture Support
- alpha
- i686
- x86_64
- arm
- aarch64
- riscv
- riscv64
- powerpc64
- wasm32-wasi
- mips-abi32
- mips-abin32
- mips-abi64
- avr
- ia64
- loongarch64
- xtensa-esp32
- All other architectures should work, they just aren't tested due to time not being infinite.

## Platform Support
- Windows 10/12
- Windows Server 2019
- Linux
- BSD platforms (Including FreeBSD, NetBSD, OpenBSD)
- Apple Darwin (MacOS)
- Apple IOS
- Microsoft DOS
- FreeDOS
- Barebone (No any operating system.)
- Cygwin/MSYS2
- Android
- Wine
- Wine GCC
- ReactOS
- Nintendo DS (devkitPro)
- Webassembly
- Managarm
- Vinix
- limine Bootloader
- AVR
- Banana
- LemonOS
- Any other platform (if you want me to support it, tell me, including your own OS)

## Legacy Windows Version Support
**You need define `_WIN32_WINNT` and `_WIN32_WINDOWS` version by yourself.**
```bash
xmake f -p mingw --mingwmsr=[WIN10/WIN7/...]
```
On Windows 95 or 95 Plus! you can enable `-O3` but not `-Ofast`. You'll also need `msvcrt.dll`.
- Windows 95
- Windows 95 Plus!
- Windows Nashville
- Microsoft Memphis
- Windows 98 FE
- Windows 98 SE
- Windows ME
- Microsoft Neptune
- Windows NT
- Windows Odyssey
- Windows 2000
- Windows Whistler
- Windows XP
- Windows Server 2003
- Windows Longhorn
- Windows Vista
- Windows Server 2008
- Windows Vienna
- Windows 7
- Windows 8
- Windows 8.1
- Windows Home Server 2011
- Windows Server 2012
- Windows Server 2016
- Windows 11

## Legacy Windows Version Support with DJGPP toolchain
- Windows 1.0
- Windows 2.0
- Windows 3.0
- Windows 3.1
- Microsoft Chicago
- Windows 95
- Windows 95 Plus!
- Microsoft Memphis
- Windows 98 FE
- Windows 98 SE
- Windows ME


## Supported C++ standard library 
- GCC libstdc++
- LLVM libc++
- MSVC STL

## Remote Debugger Support
- WinDbg
- Visual Studio Debugger
- DbgViewer
- Android ADB
