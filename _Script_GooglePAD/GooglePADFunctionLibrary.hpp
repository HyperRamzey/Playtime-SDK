#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\BlueprintFunctionLibrary.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_GooglePAD {
#pragma pack(push, 1)
struct GooglePADFunctionLibrary : public _Script_Engine::BlueprintFunctionLibrary {
    static _Script_CoreUObject::Class* static_class();
    void* ShowCellularDataConfirmation();
    void* RequestRemoval(void* Name);
    void* RequestInfo(void* AssetPacks);
    void* RequestDownload(void* AssetPacks);
    void ReleaseDownloadState(int32_t State);
    void ReleaseAssetPackLocation(int32_t Location);
    int32_t GetTotalBytesToDownload(int32_t State);
    void* GetStorageMethod(int32_t Location);
    void* GetShowCellularDataConfirmationStatus(void*& Status);
    void* GetDownloadStatus(int32_t State);
    void* GetDownloadState(void* Name, int32_t& State);
    int32_t GetBytesDownloaded(int32_t State);
    void* GetAssetsPath(int32_t Location);
    void* GetAssetPackLocation(void* Name, int32_t& Location);
    void* CancelDownload(void* AssetPacks);
}; // Size: 0x28
#pragma pack(pop)
}
