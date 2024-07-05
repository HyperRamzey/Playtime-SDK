#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "LiveLinkBasicFrameInterpolationProcessor.hpp"
#include "..\_Script_LiveLinkInterface\LiveLinkFrameInterpolationProcessor.hpp"
bool _Script_LiveLink::LiveLinkBasicFrameInterpolationProcessor::get_bInterpolatePropertyValues() {
    return (*(uint8_t*)((uintptr_t)this + 0x28 + 0)) & 1 != 0;
}
void _Script_LiveLink::LiveLinkBasicFrameInterpolationProcessor::set_bInterpolatePropertyValues(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x28 + 0);
    *(uint8_t*)((uintptr_t)this + 0x28 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_LiveLink::LiveLinkBasicFrameInterpolationProcessor::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/LiveLink.LiveLinkBasicFrameInterpolationProcessor");
    return result;
}
