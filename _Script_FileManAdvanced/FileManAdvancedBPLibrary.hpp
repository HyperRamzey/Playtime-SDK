#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\DateTime.hpp"
#include "..\_Script_Engine\BlueprintFunctionLibrary.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct Texture2D;
}
namespace _Script_FileManAdvanced {
#pragma pack(push, 1)
struct FileManAdvancedBPLibrary : public _Script_Engine::BlueprintFunctionLibrary {
    static _Script_CoreUObject::Class* static_class();
    bool WriteFile(void* Content, void* Filename);
    bool ReadFile(void* Filename, void*& Content);
    _Script_Engine::Texture2D* LoadTextureFromFile(void* Filename);
    _Script_CoreUObject::DateTime LastModifiedTime(void* Filename);
    void* GetMainDirectory();
    void* GetLaunchDirectory();
    bool GetFilesInPath(void*& Files, void* Path, bool SearchSubfolders);
    void* GetEngineDirectory();
    bool DeleteFile(void* Filename);
    bool DeleteDirectory(void* FolderName);
    bool CreateDirectory(void* FolderName);
}; // Size: 0x28
#pragma pack(pop)
}
