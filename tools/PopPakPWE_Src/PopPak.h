#pragma once

extern "C" __declspec(dllexport) int Package(const char* aPackNameC, size_t aPackName_length, const char* aDirNameC, size_t aDirName_length, bool& retFlag);

extern "C" __declspec(dllexport) int Unpackage(const char* aPackNameC, size_t aPackName_length, const char* aDirNameC, size_t aDirName_length, bool& retFlag);
