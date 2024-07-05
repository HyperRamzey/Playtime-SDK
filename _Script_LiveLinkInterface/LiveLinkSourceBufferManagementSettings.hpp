#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_LiveLinkInterface {
#pragma pack(push, 1)
struct LiveLinkSourceBufferManagementSettings {
    private: char pad_0[0x58]; public:
    bool get_bValidEngineTimeEnabled();
    void set_bValidEngineTimeEnabled(bool value);
    float& get_ValidEngineTime();
    float& get_EngineTimeOffset();
    double& get_EngineTimeClockOffset();
    bool get_bGenerateSubFrame();
    void set_bGenerateSubFrame(bool value);
    void* get_DetectedFrameRate();
    bool get_bUseTimecodeSmoothLatest();
    void set_bUseTimecodeSmoothLatest(bool value);
    void* get_SourceTimecodeFrameRate();
    bool get_bValidTimecodeFrameEnabled();
    void set_bValidTimecodeFrameEnabled(bool value);
    int32_t& get_ValidTimecodeFrame();
    float& get_TimecodeFrameOffset();
    double& get_TimecodeClockOffset();
    int32_t& get_LatestOffset();
    int32_t& get_MaxNumberOfFrameToBuffered();
    bool get_bKeepAtLeastOneFrame();
    void set_bKeepAtLeastOneFrame(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x58
#pragma pack(pop)
}
