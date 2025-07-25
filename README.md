# CBX Shell (WIC Edition)

CBX Shell is a Windows Shell Extension that shows thumbnail previews for image archive files (CBZ/CBR/ZIP/RAR) in File Explorer.

This fork replaces GDI+ with **Windows Imaging Component (WIC)** to support modern image formats like **WebP** or **JPEG XL**.

---

## Changes

- Added support for `.webp`, `.avif`, `.heic` and `.jxl` thumbnails inside `.cbz` / `.zip` archives
- Switched from GDI+ to **WIC-based decoding**
- Supports additional formats (e.g. AVIF, HEIC, JXL) if WIC codecs are installed

---

## Notes

- Requires **Windows 10 or later**
- No setup installer — just overwrite the existing installation or use `regsvr32` manually
- The Manager component is not currently supported or compiled
- Created for personal use due to the lack of upstream updates
- To compile, you need to install WTL, using vcpkg
```
vcpkg install wtl
```
