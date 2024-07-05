#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MagicLeapGraphicsClientPerformanceInfo.hpp"
float& _Script_MagicLeap::MagicLeapGraphicsClientPerformanceInfo::get_FrameInternalDurationCPUTimeMs() {
    return *(float*)((uintptr_t)this + 0x14);
}
float& _Script_MagicLeap::MagicLeapGraphicsClientPerformanceInfo::get_FrameDurationCPUTimeMs() {
    return *(float*)((uintptr_t)this + 0xc);
}
float& _Script_MagicLeap::MagicLeapGraphicsClientPerformanceInfo::get_FrameStartCPUCompAcquireCPUTimeMs() {
    return *(float*)((uintptr_t)this + 0x0);
}
float& _Script_MagicLeap::MagicLeapGraphicsClientPerformanceInfo::get_FrameStartCPUFrameEndGPUTimeMs() {
    return *(float*)((uintptr_t)this + 0x4);
}
float& _Script_MagicLeap::MagicLeapGraphicsClientPerformanceInfo::get_FrameDurationGPUTimeMs() {
    return *(float*)((uintptr_t)this + 0x10);
}
float& _Script_MagicLeap::MagicLeapGraphicsClientPerformanceInfo::get_FrameStartCPUFrameStartCPUTimeMs() {
    return *(float*)((uintptr_t)this + 0x8);
}
float& _Script_MagicLeap::MagicLeapGraphicsClientPerformanceInfo::get_FrameInternalDurationGPUTimeMs() {
    return *(float*)((uintptr_t)this + 0x18);
}
_Script_CoreUObject::Class* _Script_MagicLeap::MagicLeapGraphicsClientPerformanceInfo::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/MagicLeap.MagicLeapGraphicsClientPerformanceInfo");
    return result;
}
