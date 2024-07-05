#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "LiveLinkTransformAxisSwitchPreProcessor.hpp"
#include "..\_Script_LiveLinkInterface\LiveLinkFramePreProcessor.hpp"
bool _Script_LiveLink::LiveLinkTransformAxisSwitchPreProcessor::get_bUseOffsetPosition() {
    return (*(uint8_t*)((uintptr_t)this + 0x2b + 0)) & 1 != 0;
}
void* _Script_LiveLink::LiveLinkTransformAxisSwitchPreProcessor::get_FrontAxis() {
    return (void*)((uintptr_t)this + 0x28);
}
void* _Script_LiveLink::LiveLinkTransformAxisSwitchPreProcessor::get_RightAxis() {
    return (void*)((uintptr_t)this + 0x29);
}
void _Script_LiveLink::LiveLinkTransformAxisSwitchPreProcessor::set_bUseOffsetPosition(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2b + 0);
    *(uint8_t*)((uintptr_t)this + 0x2b + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_LiveLink::LiveLinkTransformAxisSwitchPreProcessor::get_UpAxis() {
    return (void*)((uintptr_t)this + 0x2a);
}
bool _Script_LiveLink::LiveLinkTransformAxisSwitchPreProcessor::get_bUseOffsetOrientation() {
    return (*(uint8_t*)((uintptr_t)this + 0x2c + 0)) & 1 != 0;
}
void* _Script_LiveLink::LiveLinkTransformAxisSwitchPreProcessor::get_OffsetPosition() {
    return (void*)((uintptr_t)this + 0x30);
}
void _Script_LiveLink::LiveLinkTransformAxisSwitchPreProcessor::set_bUseOffsetOrientation(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2c + 0);
    *(uint8_t*)((uintptr_t)this + 0x2c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_LiveLink::LiveLinkTransformAxisSwitchPreProcessor::get_OffsetOrientation() {
    return (void*)((uintptr_t)this + 0x3c);
}
_Script_CoreUObject::Class* _Script_LiveLink::LiveLinkTransformAxisSwitchPreProcessor::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/LiveLink.LiveLinkTransformAxisSwitchPreProcessor");
    return result;
}
