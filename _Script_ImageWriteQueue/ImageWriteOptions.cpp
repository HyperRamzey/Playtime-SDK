#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "ImageWriteOptions.hpp"
bool _Script_ImageWriteQueue::ImageWriteOptions::get_bAsync() {
    return (*(uint8_t*)((uintptr_t)this + 0x19 + 0)) & 1 != 0;
}
void _Script_ImageWriteQueue::ImageWriteOptions::set_bOverwriteFile(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x18 + 0);
    *(uint8_t*)((uintptr_t)this + 0x18 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_ImageWriteQueue::ImageWriteOptions::get_Format() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_ImageWriteQueue::ImageWriteOptions::get_OnComplete() {
    return (void*)((uintptr_t)this + 0x4);
}
void _Script_ImageWriteQueue::ImageWriteOptions::set_bAsync(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x19 + 0);
    *(uint8_t*)((uintptr_t)this + 0x19 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
int32_t& _Script_ImageWriteQueue::ImageWriteOptions::get_CompressionQuality() {
    return *(int32_t*)((uintptr_t)this + 0x14);
}
bool _Script_ImageWriteQueue::ImageWriteOptions::get_bOverwriteFile() {
    return (*(uint8_t*)((uintptr_t)this + 0x18 + 0)) & 1 != 0;
}
_Script_CoreUObject::Class* _Script_ImageWriteQueue::ImageWriteOptions::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ImageWriteQueue.ImageWriteOptions");
    return result;
}
