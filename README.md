# multithreaded-downloader

A **C++17 command-line tool** that downloads multiple files **concurrently** using **threads** and **libcurl**.

---

## Features

- Parallel downloads using C++ threads  
- Powered by **libcurl** for stable HTTP/HTTPS transfers  
- Simple command-line interface  
- Lightweight and cross-platform  
- Built with a **Makefile** for easy compilation  

---

## Project Structure
```
multithreaded-downloader/
├── bin/        # compiled exe
├── include/    # header files
├── src/        # source codes
├── Makefile    # build config
├── LICENSE     
└── README.md
``` 

## Usage
#### Note: Make sure you have `libcurl` installed on your system.
```
./bin/downloader <url1> <url2> <url3> ...
```

Each file will be downloaded concurrently into the current directory, using the filename extracted from its URL.

eg. ``` ./bin/downloader https://example.com/file1.zip https://example.com/image.jpg```

## Future Improvements
	•	Progress bar per download
	•	Resume support for interrupted downloads
	•	Config file for bulk URLs
	•	Output directory argument
